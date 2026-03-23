lib l2cpp;
Address 
_GetGold, 
_GetDiamond, 
_GetMonney, 
_GetAidKit, 
_GetGrenade, 
_GetLevel, 
_GetAmmo, 
_GetDamage;

void getAddress() {
l2cpp.name = "libil2cpp.so";
l2cpp.open();

//Normal Example 
Uclass DSystemClass = l2cpp.getClass("DProject", "DSystem");
_GetGold = DSystemClass.dump("get_payMoney", 0);
_GetDiamond = DSystemClass.dump("get_Diamond", 0);
_GetMonney = DSystemClass.dump("get_gameMoney", 0);
_GetAidKit = DSystemClass.dump("get_aidKitCount", 0);
_GetGrenade = DSystemClass.dump("get_grenadesCount", 0);
_GetLevel = DSystemClass.dump("get_level", 0);

//Normal Example 
Uclass GunControllerClass = l2cpp.getClass("DProject", "GunController");
_GetAmmo = GunControllerClass.dump("get_curBullet", 0);

//Normal Example 
Uclass UpgradeWeaponRecordClass = l2cpp.getClass("DProject", "UpgradeWeaponRecord");
_GetDamage = UpgradeWeaponRecordClass.dump("GetDamage", 4);

}
