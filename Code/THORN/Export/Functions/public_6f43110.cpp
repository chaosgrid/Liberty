#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f43110);
CLANG_FORWARD_PROC_SYMBOL(public_6f431d0);

PROC_DECLARE(0x6f43110, internal_6f43110, public_6f43110);
extern "C" NAKED register_t __cdecl internal_6f43110()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, ecx
        lea edx, ds:[eax+0xC8]
        push 0xFFFFFFFF
        mov edi, edx
        mov ecx, 0xF
        push 0xFFFFFFFF
        rep movsd
        push edx
        mov ecx, eax
        call public_6f431d0
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f43110)
    }
}
