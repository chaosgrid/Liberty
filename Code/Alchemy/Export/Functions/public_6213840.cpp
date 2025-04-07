#include "Alchemy-PCH.h"

PROC_DECLARE(0x6213840, internal_6213840, public_6213840);
extern "C" NAKED register_t __cdecl internal_6213840()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0xC]
        ret 4
        UNREACHABLE_TRAP(0x6213840)
    }
}
