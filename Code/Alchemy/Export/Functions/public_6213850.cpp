#include "Alchemy-PCH.h"

PROC_DECLARE(0x6213850, internal_6213850, public_6213850);
extern "C" NAKED register_t __cdecl internal_6213850()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x10]
        ret 4
        UNREACHABLE_TRAP(0x6213850)
    }
}
