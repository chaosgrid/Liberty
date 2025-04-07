#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2a950);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a970);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2aa50);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c29b2b _public_6c29b2b
#define public_6c29b3b _public_6c29b3b
#define public_6c29b42 _public_6c29b42

PROC_DECLARE(0x6c29ae0, internal_6c29ae0, public_6c29ae0);
extern "C" NAKED register_t __cdecl internal_6c29ae0()
{
    __asm
    {
        push esi
        push 0x1C
        call public_6c34eac
        add esp, 4
        test eax, eax
        je public_6c29b3b
        mov ecx, eax
        call public_6c2a950
        mov esi, eax
        test esi, esi
        je public_6c29b3b
        mov ecx, esi
        call public_6c2a9a0
        test eax, eax
        jl public_6c29b2b
        mov eax, dword ptr ds : [public_6c37d54]
        mov ecx, dword ptr ds : [public_6c37d64]
        mov edx, dword ptr ds : [public_6c37d50]
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_6c2aa50
        test eax, eax
        jge public_6c29b42
        public_6c29b2b : nop
        mov ecx, esi
        call public_6c2a970
        push esi
        call public_6c34ea0
        add esp, 4
        public_6c29b3b : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 8
        public_6c29b42 : nop
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6c29ae0)
    }
}

#undef public_6c29b2b
#undef public_6c29b3b
#undef public_6c29b42
