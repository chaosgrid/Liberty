#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208620);
CLANG_FORWARD_PROC_SYMBOL(public_62434c0);

PROC_DECLARE(0x6208620, internal_6208620, public_6208620);
extern "C" NAKED register_t __cdecl internal_6208620()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62434c0
        mov dword ptr ds : [esi], offset public_624bbb8
        mov dword ptr ds : [esi+0x30], 1
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6208620)
    }
}
