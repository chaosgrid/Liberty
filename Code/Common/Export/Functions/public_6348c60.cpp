#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63487f0);
CLANG_FORWARD_PROC_SYMBOL(public_6348b80);
CLANG_FORWARD_PROC_SYMBOL(public_6348c10);
CLANG_FORWARD_PROC_SYMBOL(public_6348c60);

PROC_DECLARE(0x6348c60, internal_6348c60, public_6348c60);
extern "C" NAKED register_t __cdecl internal_6348c60()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6348b80
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov ecx, esi
        call public_6348c10
        mov ecx, esi
        call public_63487f0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6348c60)
    }
}
