#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fcc40);

#define public_4fcc7f _public_4fcc7f
#define public_4fccac _public_4fccac
#define public_4fccb3 _public_4fccb3
#define public_4fcd2e _public_4fcd2e
#define public_4fcd6a _public_4fcd6a
#define public_4fcdbc _public_4fcdbc
#define public_4fcdf8 _public_4fcdf8
#define public_4fce38 _public_4fce38
#define public_4fce62 _public_4fce62
#define public_4fce64 _public_4fce64

PROC_DECLARE(0x4fcc40, internal_4fcc40, public_4fcc40);
extern "C" NAKED register_t __cdecl internal_4fcc40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        xor esi, esi
        cmp eax, esi
        jne public_4fccb3
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4fcc7f
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [ecx+0xC]
        fadd dword ptr ds : [ecx+8]
        fst dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4fccac
        mov dword ptr ds : [ecx+8], esi
        fld dword ptr ds : [ecx+8]
        pop esi
        ret 0xC
        public_4fcc7f : nop
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4fccac
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [ecx+0xC]
        fsubr dword ptr ds : [ecx+8]
        fst dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4fccac
        mov dword ptr ds : [ecx+8], esi
        public_4fccac : nop
        fld dword ptr ds : [ecx+8]
        pop esi
        ret 0xC
        public_4fccb3 : nop
        mov edx, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [edx]
        fsub dword ptr ds : [eax]
        fld dword ptr ds : [edx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [edx+8]
        fsub dword ptr ds : [eax+8]
        fld st(2)
        fmul st, st(3)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ds : [ecx]
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [esp+0x10]
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 1
        jne public_4fcd6a
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4fcd2e
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [ecx+0xC]
        fadd dword ptr ds : [ecx+8]
        fst dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4fce64
        mov dword ptr ds : [ecx+8], esi
        fld dword ptr ds : [ecx+8]
        pop esi
        ret 0xC
        public_4fcd2e : nop
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4fce64
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [ecx+0xC]
        fsubr dword ptr ds : [ecx+8]
        fst dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_4fce64
        mov dword ptr ds : [ecx+8], esi
        fld dword ptr ds : [ecx+8]
        pop esi
        ret 0xC
        public_4fcd6a : nop
        fld dword ptr ds : [ecx+4]
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [esp+0x10]
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_4fcdf8
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_4fcdbc
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [ecx+0xC]
        fadd dword ptr ds : [ecx+8]
        fst dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_4fce64
        mov dword ptr ds : [ecx+8], 0x3F800000
        fld dword ptr ds : [ecx+8]
        pop esi
        ret 0xC
        public_4fcdbc : nop
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_4fce64
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [ecx+0xC]
        fsubr dword ptr ds : [ecx+8]
        fst dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_4fce64
        mov dword ptr ds : [ecx+8], 0x3F800000
        fld dword ptr ds : [ecx+8]
        pop esi
        ret 0xC
        public_4fcdf8 : nop
        fld dword ptr ss : [esp+0x10]
        fsqrt 
        fsub dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [ecx+4]
        fdivp 
        fsubr qword ptr ds : [public_5c89b8]
        fcom dword ptr ds : [ecx+8]
        fnstsw ax
        test ah, 0x41
        jne public_4fce38
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [ecx+0xC]
        fadd dword ptr ds : [ecx+8]
        fst dword ptr ds : [ecx+8]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_4fce62
        fstp dword ptr ds : [ecx+8]
        pop esi
        fld dword ptr ds : [ecx+8]
        ret 0xC
        public_4fce38 : nop
        fcom dword ptr ds : [ecx+8]
        fnstsw ax
        test ah, 5
        jp public_4fce62
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [ecx+0xC]
        fsubr dword ptr ds : [ecx+8]
        fst dword ptr ds : [ecx+8]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_4fce62
        fstp dword ptr ds : [ecx+8]
        pop esi
        fld dword ptr ds : [ecx+8]
        ret 0xC
        public_4fce62 : nop
        fstp st(0)
        public_4fce64 : nop
        fld dword ptr ds : [ecx+8]
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x4fcc40)
    }
}

#undef public_4fcc7f
#undef public_4fccac
#undef public_4fccb3
#undef public_4fcd2e
#undef public_4fcd6a
#undef public_4fcdbc
#undef public_4fcdf8
#undef public_4fce38
#undef public_4fce62
#undef public_4fce64
