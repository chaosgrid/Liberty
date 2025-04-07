#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f310f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f38ab0);

#define public_6f38ac3 _public_6f38ac3
#define public_6f38adf _public_6f38adf

PROC_DECLARE(0x6f38ab0, internal_6f38ab0, public_6f38ab0);
extern "C" NAKED register_t __cdecl internal_6f38ab0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6f38adf
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6f38ac3 : nop
        push esi
        push edi
        call public_6f310f0
        add esi, 0x14
        add esp, 8
        add edi, 0x14
        cmp esi, ebx
        jne public_6f38ac3
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6f38adf : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f38ab0)
    }
}

#undef public_6f38ac3
#undef public_6f38adf
