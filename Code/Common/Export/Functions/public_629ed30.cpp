#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ae10);
CLANG_FORWARD_PROC_SYMBOL(public_6309b40);

PROC_DECLARE(0x629ed30, internal_629ed30, public_629ed30);
extern "C" NAKED register_t __cdecl internal_629ed30()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        mov esi, ecx
        call public_629ae10
        add esi, 0x20
        push esi
        mov ecx, edi
        mov bl, al
        call public_6309b40
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x629ed30)
    }
}
