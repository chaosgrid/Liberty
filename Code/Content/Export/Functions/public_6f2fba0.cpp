#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2fba0);
CLANG_FORWARD_PROC_SYMBOL(public_6f300e0);

#define public_6f2fbb3 _public_6f2fbb3
#define public_6f2fbcf _public_6f2fbcf

PROC_DECLARE(0x6f2fba0, internal_6f2fba0, public_6f2fba0);
extern "C" NAKED register_t __cdecl internal_6f2fba0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6f2fbcf
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6f2fbb3 : nop
        push esi
        push edi
        call public_6f300e0
        add esi, 0x44
        add esp, 8
        add edi, 0x44
        cmp esi, ebx
        jne public_6f2fbb3
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6f2fbcf : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f2fba0)
    }
}

#undef public_6f2fbb3
#undef public_6f2fbcf
