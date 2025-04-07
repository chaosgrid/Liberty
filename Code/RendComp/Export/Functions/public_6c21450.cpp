#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c22440);
CLANG_FORWARD_PROC_SYMBOL(public_6c22550);
CLANG_FORWARD_PROC_SYMBOL(public_6c23fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c214a5 _public_6c214a5
#define public_6c214b5 _public_6c214b5
#define public_6c214bc _public_6c214bc

PROC_DECLARE(0x6c21450, internal_6c21450, public_6c21450);
extern "C" NAKED register_t __cdecl internal_6c21450()
{
    __asm
    {
        push esi
        push 0x228
        call public_6c34eac
        add esp, 4
        test eax, eax
        je public_6c214b5
        mov ecx, eax
        call public_6c22440
        mov esi, eax
        test esi, esi
        je public_6c214b5
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0xC]
        test eax, eax
        jl public_6c214a5
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx+0x30]
        mov eax, dword ptr ds : [public_6c37d54]
        mov ecx, dword ptr ds : [public_6c37d64]
        push edx
        mov edx, dword ptr ds : [public_6c37d50]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_6c23fd0
        test eax, eax
        jge public_6c214bc
        public_6c214a5 : nop
        mov ecx, esi
        call public_6c22550
        push esi
        call public_6c34ea0
        add esp, 4
        public_6c214b5 : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 8
        public_6c214bc : nop
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6c21450)
    }
}

#undef public_6c214a5
#undef public_6c214b5
#undef public_6c214bc
