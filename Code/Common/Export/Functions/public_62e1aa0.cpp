#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e1aa0);
CLANG_FORWARD_PROC_SYMBOL(public_636cf40);
CLANG_FORWARD_PROC_SYMBOL(public_6391fc2);

#define public_62e1aec _public_62e1aec
#define public_62e1b0b _public_62e1b0b
#define public_62e1b3a _public_62e1b3a
#define public_62e1b59 _public_62e1b59
#define public_62e1be9 _public_62e1be9
#define public_62e1bfe _public_62e1bfe
#define public_62e1c4f _public_62e1c4f
#define public_62e1c68 _public_62e1c68
#define public_62e1c79 _public_62e1c79

PROC_DECLARE(0x62e1aa0, internal_62e1aa0, public_62e1aa0);
extern "C" NAKED register_t __cdecl internal_62e1aa0()
{
    __asm
    {
        sub esp, 0x3C
        push esi
        mov esi, dword ptr ss : [esp+0x44]
        test esi, esi
        push edi
        je public_62e1c79
        mov edi, dword ptr ss : [esp+0x4C]
        test edi, edi
        je public_62e1c79
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x4C]
        push edx
        mov ecx, edi
        call dword ptr ds : [eax+0x2C]
        test eax, eax
        jne public_62e1aec
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], edx
        jmp public_62e1b0b
        public_62e1aec : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        public_62e1b0b : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x50]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x2C]
        test eax, eax
        jne public_62e1b3a
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ecx
        jmp public_62e1b59
        public_62e1b3a : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        public_62e1b59 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x20]
        mov esi, eax
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x14], ecx
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x18], edx
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fsqrt 
        fcom dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 0x41
        jne public_62e1be9
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x1C]
        jmp public_62e1bfe
        public_62e1be9 : nop
        push 0
        fstp st(0)
        push 0
        push 0
        lea ecx, ss:[esp+0x20]
        call public_636cf40
        fld dword ptr ss : [esp+0x1C]
        public_62e1bfe : nop
        fld dword ptr ds : [esi+8]
        fld dword ptr ds : [esi+0x14]
        fld dword ptr ds : [esi+0x20]
        fxch st(3)
        fmul st, st(3)
        fld dword ptr ss : [esp+0x18]
        fmul st, st(2)
        faddp 
        fxch st(2)
        fmul dword ptr ss : [esp+0x14]
        faddp st(2), st
        fxch 
        fstp dword ptr ss : [esp+0x48]
        fstp st(1)
        fstp st(0)
        fld dword ptr ss : [esp+0x48]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_62e1c4f
        mov dword ptr ss : [esp+0x48], 0x3F800000
        fld dword ptr ss : [esp+0x48]
        call public_6391fc2
        pop edi
        fabs 
        pop esi
        add esp, 0x3C
        ret 
        public_62e1c4f : nop
        fld dword ptr ss : [esp+0x48]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62e1c68
        mov dword ptr ss : [esp+0x48], 0xBF800000
        public_62e1c68 : nop
        fld dword ptr ss : [esp+0x48]
        call public_6391fc2
        pop edi
        fabs 
        pop esi
        add esp, 0x3C
        ret 
        public_62e1c79 : nop
        fld dword ptr ds : [public_6399408]
        pop edi
        pop esi
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x62e1aa0)
    }
}

#undef public_62e1aec
#undef public_62e1b0b
#undef public_62e1b3a
#undef public_62e1b59
#undef public_62e1be9
#undef public_62e1bfe
#undef public_62e1c4f
#undef public_62e1c68
#undef public_62e1c79
