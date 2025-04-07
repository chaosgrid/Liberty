#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63594d0);

#define public_63594e6 _public_63594e6
#define public_6359534 _public_6359534
#define public_635954c _public_635954c

PROC_DECLARE(0x63594d0, internal_63594d0, public_63594d0);
extern "C" NAKED register_t __cdecl internal_63594d0()
{
    __asm
    {
        fld dword ptr ds : [public_63a53d4]
        push esi
        lea esi, ds:[ecx+0x16]
        mov ecx, dword ptr ds : [ecx+0x40]
        push edi
        add ecx, 0x70
        mov edi, 2
        public_63594e6 : nop
        mov edx, dword ptr ds : [ecx]
        test edx, edx
        je public_635954c
        cmp byte ptr ds : [esi], 3
        je public_635954c
        fld dword ptr ds : [edx+0x9C]
        fld dword ptr ds : [edx+0x98]
        fld dword ptr ds : [edx+0x94]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fmul dword ptr ds : [public_63a5678]
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [public_63a5674]
        fnstsw ax
        test ah, 0x41
        jne public_6359534
        fstp st(0)
        fld dword ptr ds : [public_63a5674]
        public_6359534 : nop
        fsqrt 
        mov eax, dword ptr ds : [edx+0xC]
        fcos 
        fsubr dword ptr ds : [public_63a53d0]
        fmul dword ptr ds : [edx+4]
        fmul dword ptr ds : [eax+0xB0]
        faddp 
        public_635954c : nop
        add ecx, 4
        add esi, 0x14
        dec edi
        jne public_63594e6
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63594d0)
    }
}

#undef public_63594e6
#undef public_6359534
#undef public_635954c
