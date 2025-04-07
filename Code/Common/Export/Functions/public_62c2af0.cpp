#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c2af0);
CLANG_FORWARD_PROC_SYMBOL(public_62e4bb0);
CLANG_FORWARD_PROC_SYMBOL(public_62e4ea0);

#define public_62c2b81 _public_62c2b81
#define public_62c2b8c _public_62c2b8c
#define public_62c2b8e _public_62c2b8e
#define public_62c2ba8 _public_62c2ba8
#define public_62c2baa _public_62c2baa
#define public_62c2bc2 _public_62c2bc2
#define public_62c2be1 _public_62c2be1
#define public_62c2beb _public_62c2beb
#define public_62c2c0a _public_62c2c0a
#define public_62c2c0d _public_62c2c0d
#define public_62c2c17 _public_62c2c17
#define public_62c2c39 _public_62c2c39
#define public_62c2c43 _public_62c2c43
#define public_62c2c65 _public_62c2c65

PROC_DECLARE(0x62c2af0, internal_62c2af0, public_62c2af0);
extern "C" NAKED register_t __cdecl internal_62c2af0()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62c2c65
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_62c2c65
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [esi+0x18], eax
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx]
        fld dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [ecx]
        push ecx
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [ecx+8]
        lea edi, ds:[eax+0x14FC]
        push edi
        fstp dword ptr ss : [esp+0x1C]
        call public_62e4ea0
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        add esp, 8
        fld dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x14], 0
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fsqrt 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_62c2b81
        mov dword ptr ds : [esi+0x14], 1
        public_62c2b81 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62c2b8c
        add eax, 0xFFFFFFF8
        jmp public_62c2b8e
        public_62c2b8c : nop
        xor eax, eax
        public_62c2b8e : nop
        push eax
        push edi
        call public_62e4bb0
        fstp dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi]
        add esp, 8
        test eax, eax
        pop edi
        je public_62c2ba8
        lea ecx, ds:[eax-8]
        jmp public_62c2baa
        public_62c2ba8 : nop
        xor ecx, ecx
        public_62c2baa : nop
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+7]
        push eax
        call dword ptr ds : [edx+0x60]
        fld dword ptr ds : [esi+8]
        mov cl, byte ptr ss : [esp+7]
        test cl, cl
        je public_62c2bc2
        fmul dword ptr ds : [esi+0x10]
        public_62c2bc2 : nop
        fld dword ptr ds : [public_639e6d4]
        fsubr st, st(1)
        fld dword ptr ss : [esp+0x1C]
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_62c2be1
        mov eax, dword ptr ds : [esi+0x14]
        or eax, 2
        jmp public_62c2c0a
        public_62c2be1 : nop
        test cl, cl
        fld dword ptr ds : [esi+8]
        je public_62c2beb
        fmul dword ptr ds : [esi+0x10]
        public_62c2beb : nop
        fld dword ptr ds : [public_639e6d4]
        fadd st, st(1)
        fld dword ptr ss : [esp+0x1C]
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_62c2c0d
        mov edx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [esi+0x14]
        or eax, edx
        public_62c2c0a : nop
        mov dword ptr ds : [esi+0x14], eax
        public_62c2c0d : nop
        test cl, cl
        fld dword ptr ds : [esi+0xC]
        je public_62c2c17
        fmul dword ptr ds : [esi+0x10]
        public_62c2c17 : nop
        fld dword ptr ds : [public_639e6d4]
        fsubr st, st(1)
        fld dword ptr ss : [esp+0x1C]
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_62c2c39
        or dword ptr ds : [esi+0x14], 4
        pop esi
        add esp, 0x10
        ret 8
        public_62c2c39 : nop
        test cl, cl
        fld dword ptr ds : [esi+0xC]
        je public_62c2c43
        fmul dword ptr ds : [esi+0x10]
        public_62c2c43 : nop
        fld dword ptr ds : [public_639e6d4]
        fadd st, st(1)
        fld dword ptr ss : [esp+0x1C]
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_62c2c65
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+0x18]
        or ecx, eax
        mov dword ptr ds : [esi+0x14], ecx
        public_62c2c65 : nop
        pop esi
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x62c2af0)
    }
}

#undef public_62c2b81
#undef public_62c2b8c
#undef public_62c2b8e
#undef public_62c2ba8
#undef public_62c2baa
#undef public_62c2bc2
#undef public_62c2be1
#undef public_62c2beb
#undef public_62c2c0a
#undef public_62c2c0d
#undef public_62c2c17
#undef public_62c2c39
#undef public_62c2c43
#undef public_62c2c65
