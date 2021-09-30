
#ifndef RunAction_h
#define RunAction_h

#include "globals.hh"
#include "G4UserRunAction.hh"
#include "TTree.h"
#include "TFile.h"

extern TFile* newfile;
extern TTree* t;
extern TBranch* ebranch;

extern G4double energy[8], energy_tot;
extern int mult, nDetectors;
extern G4String detectorName[8];

class G4Run;

class RunAction : public G4UserRunAction {
public:
  RunAction();
  virtual ~RunAction();

  virtual void BeginOfRunAction(const G4Run* aRun);
  virtual void EndOfRunAction(const G4Run* aRun);

private:
  G4int runIDcounter;
};

#endif
