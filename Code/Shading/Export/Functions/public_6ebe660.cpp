#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebe660);
CLANG_FORWARD_PROC_SYMBOL(public_6ebe8c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ce4);

#define public_6ebe68f _public_6ebe68f
#define public_6ebe692 _public_6ebe692
#define public_6ebe726 _public_6ebe726
#define public_6ebe775 _public_6ebe775
#define public_6ebe7a5 _public_6ebe7a5
#define public_6ebe7c4 _public_6ebe7c4
#define public_6ebe7d9 _public_6ebe7d9
#define public_6ebe7e4 _public_6ebe7e4

PROC_DECLARE(0x6ebe660, internal_6ebe660, public_6ebe660);
extern "C" NAKED register_t __cdecl internal_6ebe660()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        jne public_6ebe692
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax+0x14]
        add eax, 0x10
        test edx, edx
        je public_6ebe68f
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, edx
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ebe68f : nop
        mov dword ptr ds : [esi+0x14], edx
        public_6ebe692 : nop
        cmp dword ptr ds : [esi+0x14], 1
        jbe public_6ebe7e4
        fld qword ptr ds : [public_6ed2918]
        mov eax, dword ptr ds : [esi+0x2C]
        sub eax, 0
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_6ed2910]
        fstp qword ptr ss : [esp+4]
        je public_6ebe7a5
        dec eax
        je public_6ebe775
        dec eax
        jne public_6ebe7d9
        fstp st(0)
        fld dword ptr ds : [esi+0xC]
        fmul qword ptr ss : [esp+4]
        fadd qword ptr ds : [esi+0x18]
        fst qword ptr ss : [esp+4]
        fst qword ptr ds : [esi+0x18]
        fld dword ptr ds : [esi+0xC]
        fcomp qword ptr ds : [public_6ed2918]
        fnstsw ax
        test ah, 5
        jp public_6ebe726
        fcom qword ptr ds : [public_6ed2918]
        fnstsw ax
        test ah, 5
        jp public_6ebe726
        fstp st(0)
        fld qword ptr ss : [esp+4]
        fld qword ptr ds : [esi+0x20]
        call public_6ed0ce4
        fchs 
        fld dword ptr ds : [esi+0xC]
        push ecx
        fchs 
        mov ecx, esi
        fstp dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp]
        call public_6ebe8c0
        xor eax, eax
        pop esi
        add esp, 8
        ret 4
        public_6ebe726 : nop
        fld dword ptr ds : [esi+0xC]
        fcomp qword ptr ds : [public_6ed2918]
        fnstsw ax
        test ah, 0x41
        jne public_6ebe7d9
        fcom qword ptr ds : [esi+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_6ebe7d9
        fstp st(0)
        fld qword ptr ss : [esp+4]
        fld qword ptr ds : [esi+0x20]
        call public_6ed0ce4
        fsubr qword ptr ds : [esi+0x20]
        fld dword ptr ds : [esi+0xC]
        push ecx
        fchs 
        mov ecx, esi
        fstp dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp]
        call public_6ebe8c0
        xor eax, eax
        pop esi
        add esp, 8
        ret 4
        public_6ebe775 : nop
        fstp st(0)
        fld qword ptr ss : [esp+4]
        fadd qword ptr ds : [esi+0x18]
        fst qword ptr ss : [esp+4]
        fstp qword ptr ds : [esi+0x18]
        fld qword ptr ss : [esp+4]
        fld qword ptr ds : [esi+0x20]
        call public_6ed0ce4
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call public_6ebe8c0
        xor eax, eax
        pop esi
        add esp, 8
        ret 4
        public_6ebe7a5 : nop
        fstp st(0)
        fld qword ptr ss : [esp+4]
        fadd qword ptr ds : [esi+0x18]
        fst qword ptr ds : [esi+0x18]
        fld qword ptr ds : [esi+0x20]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 5
        jnp public_6ebe7c4
        fstp st(0)
        fld qword ptr ds : [esi+0x20]
        public_6ebe7c4 : nop
        fcom qword ptr ds : [public_6ed2918]
        fnstsw ax
        test ah, 0x41
        je public_6ebe7d9
        fstp st(0)
        fld qword ptr ds : [public_6ed2918]
        public_6ebe7d9 : nop
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call public_6ebe8c0
        public_6ebe7e4 : nop
        xor eax, eax
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6ebe660)
    }
}

#undef public_6ebe68f
#undef public_6ebe692
#undef public_6ebe726
#undef public_6ebe775
#undef public_6ebe7a5
#undef public_6ebe7c4
#undef public_6ebe7d9
#undef public_6ebe7e4
