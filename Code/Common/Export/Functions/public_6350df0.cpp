#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6350df0);
CLANG_FORWARD_PROC_SYMBOL(public_6391fc2);

#define public_6350e35 _public_6350e35
#define public_6350e43 _public_6350e43
#define public_6350ee1 _public_6350ee1

PROC_DECLARE(0x6350df0, internal_6350df0, public_6350df0);
extern "C" NAKED register_t __cdecl internal_6350df0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [edi+8]
        mov esi, ecx
        fmul dword ptr ds : [ebx+8]
        fld dword ptr ds : [edi+4]
        fmul dword ptr ds : [ebx+4]
        faddp 
        fld dword ptr ds : [ebx+0xC]
        fmul dword ptr ds : [edi+0xC]
        faddp 
        fld dword ptr ds : [edi]
        fmul dword ptr ds : [ebx]
        faddp 
        fcom dword ptr ds : [public_63a53d4]
        fst dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_6350e35
        mov dword ptr ss : [esp+0x14], 0x3F800000
        jmp public_6350e43
        public_6350e35 : nop
        fchs 
        mov dword ptr ss : [esp+0x14], 0xBF800000
        fst dword ptr ss : [esp+0x18]
        public_6350e43 : nop
        fcomp dword ptr ds : [public_63a5630]
        fnstsw ax
        test ah, 1
        je public_6350ee1
        fld dword ptr ss : [esp+0x18]
        call public_6391fc2
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fsubr dword ptr ds : [public_63a53d0]
        fsqrt 
        fdivr dword ptr ds : [public_63a53d0]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [public_63a53d0]
        fsub dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fsin 
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x1C]
        fsin 
        fmul dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [edi]
        fld st(1)
        fmul dword ptr ds : [ebx]
        faddp 
        fstp dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [edi+4]
        fld st(1)
        fmul dword ptr ds : [ebx+4]
        faddp 
        fstp dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [edi+8]
        fld st(1)
        fmul dword ptr ds : [ebx+8]
        faddp 
        fstp dword ptr ds : [esi+8]
        fmul dword ptr ds : [ebx+0xC]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [edi+0xC]
        pop edi
        faddp 
        fstp dword ptr ds : [esi+0xC]
        pop esi
        pop ebx
        pop ecx
        ret 0xC
        public_6350ee1 : nop
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [ebx]
        fsub dword ptr ds : [edi]
        fmul dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [edi]
        fstp dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [ebx+4]
        fsub dword ptr ds : [edi+4]
        fmul dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [ebx+8]
        fsub dword ptr ds : [edi+8]
        fmul dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [edi+8]
        fstp dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [ebx+0xC]
        fsub dword ptr ds : [edi+0xC]
        fmul dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [edi+0xC]
        pop edi
        fst dword ptr ds : [esi+0xC]
        fld dword ptr ds : [esi+8]
        fld dword ptr ds : [esi+4]
        fld dword ptr ds : [esi]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fmul dword ptr ds : [public_63a5460]
        fstp st(4)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ds : [public_63a562c]
        fsub st, st(1)
        fld st(0)
        fmul st, st(1)
        fmul st, st(2)
        fsubr dword ptr ds : [public_63a5460]
        faddp 
        fld st(0)
        fmul st, st(1)
        fmulp st(2), st
        fxch 
        fsubr dword ptr ds : [public_63a5460]
        fadd st, st(1)
        fxch 
        fstp st(0)
        fld st(0)
        fmul dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fld st(0)
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        fmul dword ptr ds : [esi+0xC]
        fstp dword ptr ds : [esi+0xC]
        pop esi
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6350df0)
    }
}

#undef public_6350e35
#undef public_6350e43
#undef public_6350ee1
