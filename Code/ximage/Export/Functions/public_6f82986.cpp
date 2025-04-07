#include "ximage-PCH.h"

PROC_DECLARE(0x6f82986, internal_6f82986, public_6f82986);
extern "C" NAKED register_t __cdecl internal_6f82986()
{
    __asm
    {
        jmp dword ptr ds : [public_6f83010]
        UNREACHABLE_TRAP(0x6f82986)
    }
}
