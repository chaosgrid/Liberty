#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a1960);
CLANG_FORWARD_PROC_SYMBOL(public_62abaa0);

PROC_DECLARE(0x62aba50, internal_62aba50, public_62aba50);
extern "C" NAKED register_t __cdecl internal_62aba50()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        push ebx
        mov esi, ecx
        call public_62abaa0
        push edi
        push ebx
        lea ecx, ds:[esi+0x144]
        call public_62a1960
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x62aba50)
    }
}
