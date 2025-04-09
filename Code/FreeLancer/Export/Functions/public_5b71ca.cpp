#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b71ca, internal_5b71ca, public_5b71ca);
extern "C" NAKED register_t __cdecl internal_5b71ca()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6734]
        UNREACHABLE_TRAP(0x5b71ca)
    }
}
