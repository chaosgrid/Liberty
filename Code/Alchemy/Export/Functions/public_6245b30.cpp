#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623fc30);
CLANG_FORWARD_PROC_SYMBOL(public_6245b30);

PROC_DECLARE(0x6245b30, internal_6245b30, public_6245b30);
extern "C" NAKED register_t __cdecl internal_6245b30()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        push edi
        call public_623fc30
        mov eax, dword ptr ds : [edi+0x9C]
        pop edi
        mov dword ptr ds : [esi+0x9C], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6245b30)
    }
}
