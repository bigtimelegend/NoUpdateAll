%hook ASUpdatesViewController

- (BOOL)_isUpdateAllEnabled {
return FALSE;

}



- (id)_softwareUpdatesStore {
return FALSE;

}

%new
- (void)_displayAutoUpdatesDiscovery{

}


%end