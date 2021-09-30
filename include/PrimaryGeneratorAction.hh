
#ifndef PrimaryGeneratorAction_h
#define PrimaryGeneratorAction_h

#include "globals.hh"
#include "G4VUserPrimaryGeneratorAction.hh"

extern int nEnergies, cascade;
extern float inputArray[500][50];

class G4ParticleGun;
class G4Event;

class PrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction {
public:
  PrimaryGeneratorAction();
  ~PrimaryGeneratorAction();

  void GeneratePrimaries(G4Event* anEvent);

private:
  G4ParticleGun* particleGun;
};

#endif
