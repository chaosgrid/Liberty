#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6380f60);
CLANG_FORWARD_PROC_SYMBOL(public_63829d0);
CLANG_FORWARD_PROC_SYMBOL(public_63837e0);

#define public_6380fa1 _public_6380fa1
#define public_6380fd1 _public_6380fd1
#define public_6381009 _public_6381009
#define public_6381044 _public_6381044
#define public_6381054 _public_6381054
#define public_638105a _public_638105a
#define public_6381075 _public_6381075
#define public_638107e _public_638107e
#define public_6381093 _public_6381093
#define public_63810ad _public_63810ad
#define public_63810cd _public_63810cd
#define public_63810cf _public_63810cf
#define public_63810d6 _public_63810d6
#define public_63810f4 _public_63810f4
#define public_6381114 _public_6381114
#define public_638112a _public_638112a
#define public_6381160 _public_6381160
#define public_638116f _public_638116f
#define public_6381171 _public_6381171
#define public_6381186 _public_6381186
#define public_63811d5 _public_63811d5
#define public_63811fe _public_63811fe
#define public_6381204 _public_6381204
#define public_638121c _public_638121c

PROC_DECLARE(0x6380f60, internal_6380f60, public_6380f60);
extern "C" NAKED register_t __cdecl internal_6380f60()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x14
        fld qword ptr ds : [public_63a58b0]
        push ebx
        push esi
        fst qword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [ebp+8]
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        cmp edi, 2
        jne public_6380fa1
        fstp st(0)
        fld qword ptr ds : [esi]
        fld qword ptr ds : [esi+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fst qword ptr ss : [esp+0x18]
        fstp st(2)
        fstp st(0)
        jmp public_638105a
        public_6380fa1 : nop
        cmp edi, 3
        jne public_6380fd1
        fstp st(0)
        fld qword ptr ds : [esi]
        fld qword ptr ds : [esi+8]
        fld qword ptr ds : [esi+0x10]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fst qword ptr ss : [esp+0x18]
        fstp st(3)
        fstp st(0)
        fstp st(0)
        jmp public_638105a
        public_6380fd1 : nop
        cmp edi, 4
        jne public_6381009
        fstp st(0)
        fld qword ptr ds : [esi]
        fld qword ptr ds : [esi+8]
        fld qword ptr ds : [esi+0x18]
        fld qword ptr ds : [esi+0x10]
        fld st(1)
        fmul st, st(2)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fsqrt 
        fst qword ptr ss : [esp+0x18]
        fstp st(4)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        jmp public_638105a
        public_6381009 : nop
        jle public_638105a
        fstp st(0)
        lea ecx, ds:[edi-4]
        fld qword ptr ds : [esi]
        mov edx, ecx
        fld qword ptr ds : [esi+8]
        dec ecx
        test edx, edx
        fld qword ptr ds : [esi+0x18]
        fld qword ptr ds : [esi+0x10]
        lea eax, ds:[esi+0x20]
        fld st(1)
        fmul st, st(2)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fstp st(4)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        je public_6381054
        inc ecx
        public_6381044 : nop
        fld qword ptr ds : [eax]
        add eax, 8
        dec ecx
        fld st(0)
        fmul st, st(1)
        faddp st(2), st
        fstp st(0)
        jne public_6381044
        public_6381054 : nop
        fsqrt 
        fst qword ptr ss : [esp+0x18]
        public_638105a : nop
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        je public_638107e
        fcom qword ptr ds : [eax]
        fnstsw ax
        test ah, 1
        je public_6381075
        mov eax, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [eax], 1
        jmp public_638107e
        public_6381075 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [ecx], 0
        public_638107e : nop
        fld qword ptr ds : [public_658bd70]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6381093
        fst qword ptr ds : [public_658bd70]
        public_6381093 : nop
        fcom qword ptr ds : [public_658b6d0]
        fnstsw ax
        test ah, 0x41
        jne public_638112a
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        jne public_63810ad
        fchs 
        public_63810ad : nop
        cmp edi, 2
        fld qword ptr ds : [esi]
        fdiv st, st(1)
        fstp qword ptr ds : [esi]
        fld qword ptr ds : [esi+8]
        fdiv st, st(1)
        fstp qword ptr ds : [esi+8]
        je public_63810cd
        cmp edi, 3
        jne public_63810d6
        fld qword ptr ds : [esi+0x10]
        fdiv st, st(1)
        fstp qword ptr ds : [esi+0x10]
        public_63810cd : nop
        fstp st(0)
        public_63810cf : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_63810d6 : nop
        cmp edi, 4
        jne public_63810f4
        fld qword ptr ds : [esi+0x10]
        fdiv st, st(1)
        fstp qword ptr ds : [esi+0x10]
        fld qword ptr ds : [esi+0x18]
        fdiv st, st(1)
        fstp qword ptr ds : [esi+0x18]
        fstp st(0)
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_63810f4 : nop
        jle public_63810cd
        fld qword ptr ds : [esi+0x10]
        lea ecx, ds:[edi-4]
        fdiv st, st(1)
        mov edx, ecx
        dec ecx
        test edx, edx
        lea eax, ds:[esi+0x20]
        fstp qword ptr ds : [esi+0x10]
        fld qword ptr ds : [esi+0x18]
        fdiv st, st(1)
        fstp qword ptr ds : [esi+0x18]
        je public_63810cd
        inc ecx
        public_6381114 : nop
        fld qword ptr ds : [eax]
        add eax, 8
        dec ecx
        fdiv st, st(1)
        fstp qword ptr ds : [eax-8]
        jne public_6381114
        fstp st(0)
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_638112a : nop
        fcom qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 0x40
        je public_6381160
        test edi, edi
        fstp st(0)
        fild dword ptr ss : [ebp+0xC]
        fdivr qword ptr ds : [public_63a5940]
        fsqrt 
        je public_63810cd
        lea ecx, ds:[edi*8-5]
        fstp qword ptr ds : [esi]
        shr ecx, 2
        lea edi, ds:[esi+8]
        rep movsd
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6381160 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        jne public_638116f
        fchs 
        fstp qword ptr ss : [esp+0x18]
        jmp public_6381171
        public_638116f : nop
        fstp st(0)
        public_6381171 : nop
        test edi, edi
        lea eax, ds:[edi-1]
        mov ebx, esi
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0xC], eax
        je public_63810cf
        public_6381186 : nop
        mov ecx, dword ptr ds : [public_658b6cc]
        mov edx, dword ptr ds : [public_658b6c8]
        lea eax, ss:[esp+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push edx
        mov edx, dword ptr ds : [ebx+4]
        push eax
        mov eax, dword ptr ds : [ebx]
        push ecx
        push edx
        push eax
        call public_63829d0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 0x1C
        test eax, eax
        jne public_63811d5
        mov eax, dword ptr ss : [esp+0xC]
        fstp qword ptr ds : [ebx]
        add ebx, 8
        mov ecx, eax
        dec eax
        test ecx, ecx
        mov dword ptr ss : [esp+0xC], eax
        jne public_6381186
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_63811d5 : nop
        push edi
        fstp st(0)
        push esi
        call public_63837e0
        fld qword ptr ss : [esp+0x20]
        mov edx, eax
        fmul qword ptr ds : [edx]
        add esp, 8
        fcomp qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 1
        jne public_63811fe
        fld qword ptr ds : [public_63a5940]
        jmp public_6381204
        public_63811fe : nop
        fld qword ptr ds : [public_63a59b8]
        public_6381204 : nop
        test edi, edi
        je public_638121c
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ds:[eax+eax+2]
        and ecx, 0x3FFFFFFE
        xor eax, eax
        mov edi, esi
        rep stosd
        public_638121c : nop
        fstp qword ptr ds : [edx]
        mov ecx, dword ptr ds : [public_658bd90]
        mov eax, dword ptr ds : [public_658b078]
        inc ecx
        test eax, eax
        mov dword ptr ds : [public_658bd90], ecx
        je public_63810cf
        mov ecx, dword ptr ds : [public_658b870]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [public_658b7fc]
        push edx
        push eax
/*FIXUP push offset public_63f67b4 @0x638124f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f67b4
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6380f60)
    }
}

#undef public_6380fa1
#undef public_6380fd1
#undef public_6381009
#undef public_6381044
#undef public_6381054
#undef public_638105a
#undef public_6381075
#undef public_638107e
#undef public_6381093
#undef public_63810ad
#undef public_63810cd
#undef public_63810cf
#undef public_63810d6
#undef public_63810f4
#undef public_6381114
#undef public_638112a
#undef public_6381160
#undef public_638116f
#undef public_6381171
#undef public_6381186
#undef public_63811d5
#undef public_63811fe
#undef public_6381204
#undef public_638121c
