#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52e100);
CLANG_FORWARD_PROC_SYMBOL(public_542550);

PROC_DECLARE(0x52e100, internal_52e100, public_52e100);
extern "C" NAKED register_t __cdecl internal_52e100()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_542550
        mov dword ptr ds : [esi], offset public_5dd8cc
        mov dword ptr ds : [esi+4], offset public_5dd84c
        mov dword ptr ds : [esi+0xC], offset public_5dd844
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x52e100)
    }
}
