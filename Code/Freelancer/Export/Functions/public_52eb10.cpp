#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52eb10);
CLANG_FORWARD_PROC_SYMBOL(public_531a30);

PROC_DECLARE(0x52eb10, internal_52eb10, public_52eb10);
extern "C" NAKED register_t __cdecl internal_52eb10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        mov ecx, esi
        call public_531a30
        mov dword ptr ds : [esi], offset public_5ddb40
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x52eb10)
    }
}
