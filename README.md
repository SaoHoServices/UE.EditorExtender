# EditorExtender
EditorExtender Documentation

ContentBrowser Extender  
{  
  UAssetActionAssist:ContentBrowser Menu Extender, Inherit it to implement new menu items or submenu functions.  
  SupportedClasses:class that this asset action supports (if not implemented, it will show up for all asset types).  
  SelectedAssets:The assets selected when opening the menu.  
  virtual void ConstructMenu(FMenuBuilder &MenuBuilder):override it to build submenus or menu items.  
  virtual void Reset():Called when need reset the object.
  virtual void ReleaseMemory():Called when the object begin destroy.  
}  
LevelEditor Extender
{
  UActorActionAssist:LevelEditor Menu Extender, Inherit it to implement new menu items or submenu functions.  
  SupportedClasses:class that this asset action supports (if not implemented, it will show up for all asset types).  
  SelectedActors:The actors selected when opening the menu.  
  virtual void ConstructMenu(FMenuBuilder &MenuBuilder):override it to build submenus or menu items.  
  virtual void Reset():Called when need reset the object.
  virtual void ReleaseMemory():Called when the object begin destroy.  
}
