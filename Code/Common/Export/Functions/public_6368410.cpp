#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6368410);

#define public_636843f _public_636843f
#define public_6368452 _public_6368452
#define public_6368454 _public_6368454
#define public_6368477 _public_6368477
#define public_636847d _public_636847d
#define public_6368491 _public_6368491
#define public_63684a8 _public_63684a8
#define public_63684c9 _public_63684c9
#define public_63684d9 _public_63684d9
#define public_63684e8 _public_63684e8
#define public_63684fc _public_63684fc
#define public_636850e _public_636850e
#define public_6368516 _public_6368516
#define public_6368521 _public_6368521
#define public_6368533 _public_6368533

PROC_DECLARE(0x6368410, internal_6368410, public_6368410);
extern "C" NAKED register_t __cdecl internal_6368410()
{
    __asm
    {
        push ecx
        push ebp
        mov ebp, dword ptr ds : [ecx+4]
        push esi
        lea esi, ss:[ebp-1]
        test esi, esi
        push edi
        mov dword ptr ss : [esp+0xC], 0
        jl public_6368477
        mov eax, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [ecx+0xC]
        or edx, 0xFFFFFFFF
        sub edx, eax
        shl edx, 2
        inc eax
        imul eax, esi
        push ebx
        lea edi, ds:[edi+eax*4]
        lea ebx, ds:[esi+1]
        public_636843f : nop
        fld dword ptr ds : [edi]
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_6368452
        fstp dword ptr ss : [esp+0x10]
        jmp public_6368454
        public_6368452 : nop
        fstp st(0)
        public_6368454 : nop
        add edi, edx
        dec ebx
        jne public_636843f
        fld dword ptr ss : [esp+0x10]
        pop ebx
        fcomp dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 0x41
        jne public_6368477
        fld dword ptr ds : [public_63a53d0]
        fdiv dword ptr ss : [esp+0xC]
        jmp public_636847d
        public_6368477 : nop
        fld dword ptr ds : [public_63a53d0]
        public_636847d : nop
        test esi, esi
        fst dword ptr ds : [ecx+0x18]
        fld dword ptr ds : [public_63a53d4]
        jl public_63684c9
        mov eax, dword ptr ds : [ecx+0x10]
        lea edx, ds:[eax+esi*4]
        inc esi
        public_6368491 : nop
        fld dword ptr ds : [edx]
        fabs 
        fst dword ptr ss : [esp+0xC]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_63684a8
        fstp st(0)
        fld dword ptr ss : [esp+0xC]
        public_63684a8 : nop
        sub edx, 4
        dec esi
        jne public_6368491
        fcom dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 0x41
        jne public_63684c9
        fld dword ptr ds : [public_63a53d0]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0xC]
        jmp public_63684d9
        public_63684c9 : nop
        fstp st(0)
        mov dword ptr ss : [esp+0xC], 0x3F800000
        fld dword ptr ds : [public_63a53d0]
        public_63684d9 : nop
        fld st(1)
        xor edi, edi
        test ebp, ebp
        fmul st, st(1)
        fstp dword ptr ds : [ecx+0x18]
        fstp st(0)
        jle public_6368516
        public_63684e8 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+0xC]
        mov edx, esi
        imul edx, edi
        lea eax, ds:[eax+edx*4]
        xor edx, edx
        test esi, esi
        jle public_636850e
        public_63684fc : nop
        fld st(0)
        inc edx
        fmul dword ptr ds : [eax]
        add eax, 4
        fstp dword ptr ds : [eax-4]
        mov esi, dword ptr ds : [ecx+8]
        cmp edx, esi
        jl public_63684fc
        public_636850e : nop
        mov eax, dword ptr ds : [ecx+4]
        inc edi
        cmp edi, eax
        jl public_63684e8
        public_6368516 : nop
        mov edx, dword ptr ds : [ecx+4]
        fstp st(0)
        dec edx
        pop edi
        pop esi
        pop ebp
        js public_6368533
        public_6368521 : nop
        mov eax, dword ptr ds : [ecx+0x10]
        fld dword ptr ss : [esp]
        fmul dword ptr ds : [eax+edx*4]
        lea eax, ds:[eax+edx*4]
        dec edx
        fstp dword ptr ds : [eax]
        jns public_6368521
        public_6368533 : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6368410)
    }
}

#undef public_636843f
#undef public_6368452
#undef public_6368454
#undef public_6368477
#undef public_636847d
#undef public_6368491
#undef public_63684a8
#undef public_63684c9
#undef public_63684d9
#undef public_63684e8
#undef public_63684fc
#undef public_636850e
#undef public_6368516
#undef public_6368521
#undef public_6368533
