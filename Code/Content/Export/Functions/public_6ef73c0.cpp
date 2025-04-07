#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef73c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8110);

#define public_6ef73d3 _public_6ef73d3
#define public_6ef73f5 _public_6ef73f5

PROC_DECLARE(0x6ef73c0, internal_6ef73c0, public_6ef73c0);
extern "C" NAKED register_t __cdecl internal_6ef73c0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6ef73f5
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6ef73d3 : nop
        push esi
        push edi
        call public_6ef8110
        add esi, 0x80
        add esp, 8
        add edi, 0x80
        cmp esi, ebx
        jne public_6ef73d3
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6ef73f5 : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ef73c0)
    }
}

#undef public_6ef73d3
#undef public_6ef73f5
