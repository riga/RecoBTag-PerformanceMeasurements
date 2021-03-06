
// PtrelSolver
// Author: Victor E. Bazterra, UIC (2008)

#ifndef PtrelBySystem4_h
#define PtrelBySystem4_h

#include <vector>

#include "../PtrelSolver/PtrelSolver.h"

class PtrelBySystem4 : public PtrelSolver
{

public:

    //! Default constructor
    explicit PtrelBySystem4(char const * filename,  Fit::Type fittype) : PtrelSolver(filename, fittype) {}

    //! Measure efficiency
    virtual void solve(char const *, char const *);

private:

    //! Count the number of entries in histograms that match the pattern
    bool count(
        TFile *,
        TFile *,
        TPRegexp,
        StringVector &,
        ValueVector &,
        ValueVector &
    ) const;

    static bool compute(
        TH1 *,
        ValueVector const &,
        ValueVector const &,
        ValueVector const &,
        ValueVector const &,
        TVectorD const &,
        TVectorD const &,
        TVectorD const &,
        TVectorD const &,
        TH1 *,
        TH1 *
    );

public:

    ClassDef(PtrelBySystem4, 1)

};

#endif
