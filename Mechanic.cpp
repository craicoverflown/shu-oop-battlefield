#include "Mechanic.h"

Mechanic::Mechanic(const wchar_t *f, const Position &p, const int c)
	: Healer(p, c, 60, 1), filename(f) {}

Mechanic::~Mechanic() {}

const Size & Mechanic::GetSize() const { return size; }
const wchar_t * Mechanic::GetFilename() const { return filename; }
const int & Mechanic::GetColour() const { return colour; }
void Mechanic::RestoreMovements() { moves = 1; }