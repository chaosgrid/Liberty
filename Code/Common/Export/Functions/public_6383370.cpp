#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6383370);

#define public_638338d _public_638338d
#define public_638339b _public_638339b
#define public_63833ab _public_63833ab
#define public_63833c2 _public_63833c2
#define public_63833d5 _public_63833d5
#define public_63833e2 _public_63833e2
#define public_63833ef _public_63833ef
#define public_63833fd _public_63833fd
#define public_6383413 _public_6383413
#define public_6383424 _public_6383424
#define public_6383430 _public_6383430
#define public_6383443 _public_6383443
#define public_638344d _public_638344d

PROC_DECLARE(0x6383370, internal_6383370, public_6383370);
extern "C" NAKED register_t __cdecl internal_6383370()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        push edi
        jle public_6383443
        mov edi, dword ptr ss : [esp+0x18]
        mov ebp, 1
        mov dword ptr ss : [esp+0x14], edi
        public_638338d : nop
        test esi, esi
        fld qword ptr ds : [public_63a58b0]
        mov ecx, dword ptr ds : [edi]
        je public_63833ab
        lea eax, ds:[esi]
        public_638339b : nop
        fld qword ptr ds : [ecx]
        add ecx, 8
        dec eax
        fld st(0)
        fmul st, st(1)
        faddp st(2), st
        fstp st(0)
        jne public_638339b
        public_63833ab : nop
        fsqrt 
        fld qword ptr ds : [public_658bd70]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_63833c2
        fst qword ptr ds : [public_658bd70]
        public_63833c2 : nop
        fcom qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 0x40
        jne public_638344d
        test esi, esi
        je public_63833e2
        lea eax, ds:[esi]
        public_63833d5 : nop
        fld qword ptr ds : [ecx-8]
        sub ecx, 8
        dec eax
        fdiv st, st(1)
        fstp qword ptr ds : [ecx]
        jne public_63833d5
        public_63833e2 : nop
        cmp ebp, esi
        fstp st(0)
        jge public_6383430
        mov ebx, esi
        add edi, 4
        sub ebx, ebp
        public_63833ef : nop
        test esi, esi
        fld qword ptr ds : [public_63a58b0]
        mov eax, dword ptr ds : [edi]
        je public_6383424
        lea edx, ds:[esi]
        public_63833fd : nop
        fld qword ptr ds : [ecx]
        add eax, 8
        fmul qword ptr ds : [eax-8]
        add ecx, 8
        dec edx
        faddp 
        jne public_63833fd
        test esi, esi
        je public_6383424
        lea edx, ds:[esi]
        public_6383413 : nop
        fld st(0)
        sub ecx, 8
        fmul qword ptr ds : [ecx]
        sub eax, 8
        dec edx
        fsubr qword ptr ds : [eax]
        fstp qword ptr ds : [eax]
        jne public_6383413
        public_6383424 : nop
        add edi, 4
        fstp st(0)
        dec ebx
        jne public_63833ef
        mov edi, dword ptr ss : [esp+0x14]
        public_6383430 : nop
        add edi, 4
        inc ebp
        lea eax, ss:[ebp-1]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], edi
        jl public_638338d
        public_6383443 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 
        public_638344d : nop
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6383370)
    }
}

#undef public_638338d
#undef public_638339b
#undef public_63833ab
#undef public_63833c2
#undef public_63833d5
#undef public_63833e2
#undef public_63833ef
#undef public_63833fd
#undef public_6383413
#undef public_6383424
#undef public_6383430
#undef public_6383443
#undef public_638344d
