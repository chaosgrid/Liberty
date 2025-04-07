#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c29f0);
CLANG_FORWARD_PROC_SYMBOL(public_62e5af0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62c2a0f _public_62c2a0f
#define public_62c2a11 _public_62c2a11
#define public_62c2a1d _public_62c2a1d
#define public_62c2a52 _public_62c2a52
#define public_62c2a62 _public_62c2a62
#define public_62c2a64 _public_62c2a64
#define public_62c2a8c _public_62c2a8c
#define public_62c2aa3 _public_62c2aa3

PROC_DECLARE(0x62c29f0, internal_62c29f0, public_62c29f0);
extern "C" NAKED register_t __cdecl internal_62c29f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        push edi
        mov dword ptr ds : [esi+0xC], ecx
        je public_62c2a0f
        add eax, 8
        jmp public_62c2a11
        public_62c2a0f : nop
        xor eax, eax
        public_62c2a11 : nop
        cmp eax, dword ptr ds : [esi]
        je public_62c2a1d
        push eax
        mov ecx, esi
        call public_6341610
        public_62c2a1d : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        mov dword ptr ds : [esi+0x14], 0
        mov dword ptr ds : [esi+0x18], 0
        je public_62c2aa3
        lea edi, ds:[eax-8]
        test edi, edi
        je public_62c2aa3
        fld dword ptr ss : [esp+0x1C]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        jne public_62c2a52
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x10], edx
        jmp public_62c2a8c
        public_62c2a52 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_62c2a62
        add eax, 0xFFFFFFF8
        jmp public_62c2a64
        public_62c2a62 : nop
        xor eax, eax
        public_62c2a64 : nop
        push 4
        push 0x3F800000
        push eax
        call public_62e5af0
        fstp dword ptr ss : [esp+0x28]
        push 1
        push 0x3F800000
        push edi
        call public_62e5af0
        fdivr dword ptr ss : [esp+0x34]
        add esp, 0x18
        fstp dword ptr ds : [esi+0x10]
        public_62c2a8c : nop
        fld dword ptr ds : [esi+0x10]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_62c2aa3
        mov dword ptr ds : [esi+0x10], 0x3F800000
        public_62c2aa3 : nop
        pop edi
        pop esi
        ret 0x14
        UNREACHABLE_TRAP(0x62c29f0)
    }
}

#undef public_62c2a0f
#undef public_62c2a11
#undef public_62c2a1d
#undef public_62c2a52
#undef public_62c2a62
#undef public_62c2a64
#undef public_62c2a8c
#undef public_62c2aa3
