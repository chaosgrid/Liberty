#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6307ff0);

#define public_6308015 _public_6308015
#define public_6308020 _public_6308020
#define public_6308058 _public_6308058
#define public_630807a _public_630807a
#define public_6308092 _public_6308092
#define public_63080a5 _public_63080a5
#define public_63080ad _public_63080ad
#define public_63080c0 _public_63080c0
#define public_63080dc _public_63080dc
#define public_63080e1 _public_63080e1
#define public_63080f3 _public_63080f3
#define public_6308106 _public_6308106
#define public_630810e _public_630810e
#define public_6308120 _public_6308120
#define public_630813c _public_630813c
#define public_6308141 _public_6308141
#define public_6308150 _public_6308150
#define public_6308159 _public_6308159
#define public_6308170 _public_6308170
#define public_630818b _public_630818b
#define public_6308190 _public_6308190
#define public_63081ec _public_63081ec

PROC_DECLARE(0x6307ff0, internal_6307ff0, public_6307ff0);
extern "C" NAKED register_t __cdecl internal_6307ff0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x68
        push ebx
        push ebp
        push esi
        lea eax, ss:[esp+0x1C]
        lea ecx, ss:[esp+0x24]
        push edi
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ecx
        public_6308015 : nop
        xor esi, esi
        mov dword ptr ss : [esp+0x70], esi
        xor ebp, ebp
        lea ecx, ds:[ecx]
        public_6308020 : nop
        rdtsc 
        mov ebx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], edx
        push 0x14
        call dword ptr ds : [public_6399108]
        rdtsc 
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+4], edx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ss : [esp+0x24]
        cmp ecx, edi
        jl public_6308020
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x28]
        jg public_6308058
        cmp eax, edx
        jb public_6308020
        public_6308058 : nop
        cmp esi, 6
        jae public_630807a
        sub eax, edx
        sbb ecx, edi
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], ecx
        fild qword ptr ss : [esp+0x30]
        fstp qword ptr ss : [esp+esi*8+0x40]
        mov esi, dword ptr ss : [esp+0x70]
        inc esi
        mov dword ptr ss : [esp+0x70], esi
        public_630807a : nop
        inc ebp
        cmp ebp, 6
        jb public_6308020
        mov ecx, 1
        xor edi, edi
        cmp esi, ecx
        jle public_63080ad
        xor ebx, ebx
        mov edx, 8
        public_6308092 : nop
        fld qword ptr ss : [esp+edx+0x40]
        fcomp qword ptr ss : [esp+ebx+0x40]
        fnstsw ax
        test ah, 5
        jp public_63080a5
        mov edi, ecx
        mov ebx, edx
        public_63080a5 : nop
        inc ecx
        add edx, 8
        cmp ecx, esi
        jl public_6308092
        public_63080ad : nop
        cmp edi, esi
        jae public_63080e1
        lea edx, ds:[esi-1]
        cmp edi, edx
        mov eax, edi
        jge public_63080dc
        lea ebx, ds:[ebx]
        public_63080c0 : nop
        mov ecx, dword ptr ss : [esp+eax*8+0x48]
        mov edx, dword ptr ss : [esp+eax*8+0x4C]
        mov dword ptr ss : [esp+eax*8+0x40], ecx
        mov dword ptr ss : [esp+eax*8+0x44], edx
        mov esi, dword ptr ss : [esp+0x70]
        inc eax
        lea ecx, ds:[esi-1]
        cmp eax, ecx
        jl public_63080c0
        public_63080dc : nop
        dec esi
        mov dword ptr ss : [esp+0x70], esi
        public_63080e1 : nop
        mov ecx, 1
        xor edi, edi
        cmp esi, ecx
        jle public_630810e
        xor ebx, ebx
        mov edx, 8
        public_63080f3 : nop
        fld qword ptr ss : [esp+edx+0x40]
        fcomp qword ptr ss : [esp+ebx+0x40]
        fnstsw ax
        test ah, 0x41
        jne public_6308106
        mov edi, ecx
        mov ebx, edx
        public_6308106 : nop
        inc ecx
        add edx, 8
        cmp ecx, esi
        jl public_63080f3
        public_630810e : nop
        cmp edi, esi
        jae public_6308141
        lea edx, ds:[esi-1]
        cmp edi, edx
        mov eax, edi
        jge public_630813c
        nop 
        lea esp, ss:[esp]
        public_6308120 : nop
        mov ecx, dword ptr ss : [esp+eax*8+0x48]
        mov edx, dword ptr ss : [esp+eax*8+0x4C]
        mov dword ptr ss : [esp+eax*8+0x40], ecx
        mov dword ptr ss : [esp+eax*8+0x44], edx
        mov esi, dword ptr ss : [esp+0x70]
        inc eax
        lea ecx, ds:[esi-1]
        cmp eax, ecx
        jl public_6308120
        public_630813c : nop
        dec esi
        mov dword ptr ss : [esp+0x70], esi
        public_6308141 : nop
        fld qword ptr ds : [public_639c430]
        xor eax, eax
        test esi, esi
        jle public_6308159
        lea ecx, ds:[ecx]
        public_6308150 : nop
        fadd qword ptr ss : [esp+eax*8+0x40]
        inc eax
        cmp eax, esi
        jl public_6308150
        public_6308159 : nop
        fidiv dword ptr ss : [esp+0x70]
        xor ecx, ecx
        test esi, esi
        fld qword ptr ds : [public_639c430]
        jle public_6308190
        lea esp, ss:[esp]
        public_6308170 : nop
        fld qword ptr ss : [esp+ecx*8+0x40]
        fsub st, st(2)
        fabs 
        fst qword ptr ss : [esp+0x38]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_630818b
        fstp st(0)
        fld qword ptr ss : [esp+0x38]
        public_630818b : nop
        inc ecx
        cmp ecx, esi
        jl public_6308170
        public_6308190 : nop
        fdiv st, st(1)
        fcomp qword ptr ds : [public_639c9f0]
        fnstsw ax
        test ah, 5
        jnp public_63081ec
        mov eax, dword ptr ss : [esp+0x14]
        fstp st(0)
        inc eax
        cmp eax, 0x19
        mov dword ptr ss : [esp+0x14], eax
        jl public_6308015
        mov edx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a3150 @0x63081b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3150
        push 0x11E
/*FIXUP push offset public_63a30f8 @0x63081c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30f8
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x63081cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        call dword ptr ds : [edx]
        fld qword ptr ds : [public_63a30f0]
        fmul qword ptr ds : [public_63a3148]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_63081ec : nop
        fmul qword ptr ds : [public_63a04e8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6307ff0)
    }
}

#undef public_6308015
#undef public_6308020
#undef public_6308058
#undef public_630807a
#undef public_6308092
#undef public_63080a5
#undef public_63080ad
#undef public_63080c0
#undef public_63080dc
#undef public_63080e1
#undef public_63080f3
#undef public_6308106
#undef public_630810e
#undef public_6308120
#undef public_630813c
#undef public_6308141
#undef public_6308150
#undef public_6308159
#undef public_6308170
#undef public_630818b
#undef public_6308190
#undef public_63081ec
