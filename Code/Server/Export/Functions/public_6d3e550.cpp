#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3e550);

PROC_DECLARE(0x6d3e550, internal_6d3e550, public_6d3e550);
extern "C" NAKED register_t __cdecl internal_6d3e550()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [public_6d64ba0]
        push edi
        push eax
        call esi
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov edi, eax
        call esi
        add esp, 8
        xor edx, edx
        cmp ax, di
        setne dl
        pop edi
        mov al, dl
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d3e550)
    }
}
