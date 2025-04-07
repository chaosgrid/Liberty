#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628a7d0);
CLANG_FORWARD_PROC_SYMBOL(public_62ad520);

PROC_DECLARE(0x62ad520, internal_62ad520, public_62ad520);
extern "C" NAKED register_t __cdecl internal_62ad520()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x5C]
        push esi
        call public_628a7d0
        add esp, 4
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62ad520)
    }
}
