#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ae10);
CLANG_FORWARD_PROC_SYMBOL(public_6309b80);

PROC_DECLARE(0x629f300, internal_629f300, public_629f300);
extern "C" NAKED register_t __cdecl internal_629f300()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        call public_629ae10
        mov ecx, esi
        mov bl, al
        call public_6309b80
        pop esi
        mov al, bl
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x629f300)
    }
}
