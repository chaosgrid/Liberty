#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a420);

#define public_42a6d2 _public_42a6d2
#define public_42a71a _public_42a71a
#define public_42a781 _public_42a781
#define public_42a78d _public_42a78d
#define public_42a7b3 _public_42a7b3
#define public_42a7c8 _public_42a7c8
#define public_42a7cb _public_42a7cb

PROC_DECLARE(0x42a6b0, internal_42a6b0, public_42a6b0);
extern "C" NAKED register_t __cdecl internal_42a6b0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x7C]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x74]
        test al, al
        je public_42a6d2
        xor al, al
        pop esi
        pop ecx
        ret 8
        public_42a6d2 : nop
        fld dword ptr ds : [esi+0x38]
        mov eax, dword ptr ds : [esi+0x1C]
        fcomp dword ptr ds : [public_5c7474]
        mov ecx, dword ptr ds : [esi+0x34]
        mov dword ptr ss : [esp+4], eax
        mov dword ptr ss : [esp+0xC], ecx
        fnstsw ax
        test ah, 5
        jnp public_42a7cb
        fld dword ptr ds : [esi+0x38]
        fsub dword ptr ss : [esp+0x10]
        fcom dword ptr ds : [public_5c7474]
        fst dword ptr ds : [esi+0x38]
        fnstsw ax
        test ah, 0x41
        jp public_42a71a
        fstp st(0)
        mov dword ptr ds : [esi+0x38], 0xBF800000
        fld dword ptr ss : [esp+0xC]
        jmp public_42a78d
        public_42a71a : nop
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [public_5c9cf4]
        fldl2e 
        fmulp 
        fld st(0)
        frndint 
        fxch 
        fsub st, st(1)
        f2xm1 
        fld1 
        faddp 
        fscale 
        fstp st(1)
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_5c9cf4]
        fldl2e 
        fmulp 
        fld st(0)
        frndint 
        fxch 
        fsub st, st(1)
        f2xm1 
        fld1 
        faddp 
        fscale 
        fstp st(1)
        fsub st, st(1)
        fxch st(2)
        fadd dword ptr ss : [esp+0x10]
        fdivr dword ptr ss : [esp+0x10]
        fmulp st(2), st
        faddp 
        fcom dword ptr ds : [public_5c9cf0]
        fnstsw ax
        test ah, 0x41
        jp public_42a781
        fstp st(0)
        fld dword ptr ds : [public_5ca16c]
        jmp public_42a78d
        public_42a781 : nop
        fldlg2 
        fxch 
        fyl2x 
        fmul qword ptr ds : [public_5c9ce8]
        public_42a78d : nop
        fcom qword ptr ds : [public_5ca210]
        fnstsw ax
        test ah, 5
        jp public_42a7b3
        fstp st(0)
        mov ecx, esi
        fld dword ptr ds : [public_5ca16c]
        fstp dword ptr ds : [esi+0x1C]
        call public_42a420
        mov al, 1
        pop esi
        pop ecx
        ret 8
        public_42a7b3 : nop
        fcom qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_42a7c8
        fstp st(0)
        fld dword ptr ds : [public_5c7474]
        public_42a7c8 : nop
        fstp dword ptr ds : [esi+0x1C]
        public_42a7cb : nop
        mov ecx, esi
        call public_42a420
        mov al, 1
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x42a6b0)
    }
}

#undef public_42a6d2
#undef public_42a71a
#undef public_42a781
#undef public_42a78d
#undef public_42a7b3
#undef public_42a7c8
#undef public_42a7cb
