#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_6380640);

#define public_63806a8 _public_63806a8
#define public_63806bf _public_63806bf
#define public_63806cd _public_63806cd
#define public_638071d _public_638071d
#define public_6380723 _public_6380723
#define public_6380739 _public_6380739
#define public_6380749 _public_6380749
#define public_63807cc _public_63807cc
#define public_63807d6 _public_63807d6
#define public_63807ec _public_63807ec
#define public_63807f4 _public_63807f4
#define public_6380810 _public_6380810
#define public_638085d _public_638085d
#define public_638088a _public_638088a
#define public_6380895 _public_6380895
#define public_63808b9 _public_63808b9
#define public_63808d5 _public_63808d5
#define public_638091c _public_638091c
#define public_6380932 _public_6380932
#define public_638094e _public_638094e
#define public_638095b _public_638095b
#define public_638098a _public_638098a
#define public_6380999 _public_6380999
#define public_63809ae _public_63809ae
#define public_63809c7 _public_63809c7

PROC_DECLARE(0x6380640, internal_6380640, public_6380640);
extern "C" NAKED register_t __cdecl internal_6380640()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x2C
        mov ecx, dword ptr ds : [public_658b078]
        push ebx
        push esi
        mov esi, dword ptr ds : [public_63991e8]
        xor eax, eax
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        cmp edi, eax
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x34], 0xFFEFFFFF
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x24], 0xFFEFFFFF
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_63806cd
        cmp dword ptr ds : [public_658b0a8], eax
        je public_63806a8
        mov edx, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f6634 @0x638069b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6634
        push edx
        call esi
        add esp, 8
        jmp public_63806bf
        public_63806a8 : nop
        mov eax, dword ptr ds : [public_658b870]
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
/*FIXUP push offset public_63f65f0 @0x63806b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f65f0
        push ecx
        call esi
        add esp, 0xC
        public_63806bf : nop
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0xC
        public_63806cd : nop
        mov eax, dword ptr ds : [public_658b030]
        test eax, eax
        mov ebx, dword ptr ss : [ebp+0x14]
        jne public_6380739
        test ebx, ebx
        je public_6380739
        mov eax, dword ptr ds : [public_658b0a8]
        test eax, eax
        je public_6380723
        fld qword ptr ds : [public_658b020]
        fmul qword ptr ds : [public_63a59a0]
        fld qword ptr ds : [public_658b888]
        fadd st(0), st
        fstp qword ptr ss : [esp+0x28]
        fcom qword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 1
        je public_638071d
        mov edx, dword ptr ss : [esp+0x28]
        fstp st(0)
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x2C], eax
        jmp public_6380749
        public_638071d : nop
        fstp qword ptr ss : [esp+0x28]
        jmp public_6380749
        public_6380723 : nop
        mov ecx, dword ptr ds : [public_658b020]
        mov edx, dword ptr ds : [public_658b024]
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], edx
        jmp public_6380749
        public_6380739 : nop
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x2C], 0x7FEFFFFF
        public_6380749 : nop
        mov eax, dword ptr ds : [public_658b200]
        test eax, eax
        je public_63807cc
        mov eax, dword ptr ds : [public_658b208]
        test eax, eax
        jl public_63807cc
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6370570
        mov ecx, dword ptr ds : [public_658b208]
        add esp, 4
        cmp ecx, eax
        jne public_63807cc
        mov edx, dword ptr ds : [public_658b200]
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        mov dword ptr ds : [public_658b078], edx
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [edi+0x4C]
        push edx
        push eax
        push ecx
        mov ecx, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f65b4 @0x6380792*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f65b4
        push ecx
        call esi
        mov edx, dword ptr ds : [public_658b870]
        mov eax, dword ptr ds : [public_658b7fc]
        add esp, 0x18
        push edx
/*FIXUP push offset public_63f64c0 @0x63807a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f64c0
        push eax
        call esi
        mov ecx, dword ptr ds : [public_658bf58]
        mov edx, dword ptr ds : [public_658b7fc]
        add esp, 0xC
        push ecx
/*FIXUP push offset public_63f64a8 @0x63807c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f64a8
        push edx
        call esi
        add esp, 0xC
        public_63807cc : nop
        test ebx, ebx
        je public_63807d6
        mov dword ptr ds : [ebx], 1
        public_63807d6 : nop
        mov ebx, dword ptr ss : [ebp+0x18]
        mov esi, edi
        mov edi, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ebx], 0
        mov dword ptr ss : [esp+0x18], 0
        public_63807ec : nop
        test esi, esi
        je public_6380895
        public_63807f4 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_6380895
        cmp esi, dword ptr ss : [ebp+0xC]
        jne public_6380810
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        jne public_6380895
        public_6380810 : nop
        mov eax, dword ptr ss : [ebp+8]
        push edi
        push esi
        push eax
        call public_637fd60
        mov ecx, dword ptr ds : [ebx]
        add esp, 0xC
        inc ecx
        mov dword ptr ds : [ebx], ecx
        fld qword ptr ds : [edi]
        test dword ptr ds : [esi+0x50], 0x10000
        je public_638085d
        fcomp qword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_638088a
        fld qword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi]
        fcomp qword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x14], esi
        fnstsw ax
        test ah, 1
        je public_638091c
        jmp public_638088a
        public_638085d : nop
        fcomp qword ptr ss : [esp+0x30]
        fnstsw ax
        test ah, 0x41
        jne public_638088a
        fld qword ptr ds : [edi]
        mov eax, dword ptr ds : [edi]
        fcomp qword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x10], esi
        fnstsw ax
        test ah, 1
        je public_63809c7
        public_638088a : nop
        mov esi, dword ptr ds : [esi+0x30]
        test esi, esi
        jne public_63807f4
        public_6380895 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [public_658b81c]
        inc eax
        cmp eax, 2
        mov dword ptr ss : [esp+0x18], eax
        jl public_63807ec
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_63808b9
        mov eax, dword ptr ss : [esp+0x14]
        public_63808b9 : nop
        mov eax, dword ptr ds : [eax+0x3C]
        test eax, eax
        je public_638095b
        mov esi, dword ptr ds : [eax+4]
        lea ebx, ds:[eax+4]
        add ebx, 4
        test esi, esi
        je public_638095b
        public_63808d5 : nop
        mov eax, dword ptr ds : [esi+0x50]
        test ah, 2
        jne public_638094e
        mov edx, dword ptr ss : [ebp+8]
        push edi
        push esi
        push edx
        call public_637fd60
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        inc ecx
        mov dword ptr ds : [eax], ecx
        fld qword ptr ds : [edi]
        test dword ptr ds : [esi+0x50], 0x10000
        je public_6380932
        fcomp qword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_638094e
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x14], esi
        jmp public_638094e
        public_638091c : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [public_658b078], eax
        mov dword ptr ss : [esp+0x10], esi
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6380932 : nop
        fcomp qword ptr ss : [esp+0x30]
        fnstsw ax
        test ah, 0x41
        jne public_638094e
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x10], esi
        public_638094e : nop
        mov esi, dword ptr ds : [ebx]
        add ebx, 4
        test esi, esi
        jne public_63808d5
        public_638095b : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [ebp+0x14]
        je public_6380999
        test ecx, ecx
        je public_638098a
        fld qword ptr ss : [esp+0x20]
        fcomp qword ptr ds : [public_658b020]
        fnstsw ax
        test ah, 1
        jne public_638098a
        fld qword ptr ss : [esp+0x20]
        fcomp qword ptr ss : [esp+0x30]
        fnstsw ax
        test ah, 0x41
        je public_6380999
        public_638098a : nop
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edi+4], eax
        jmp public_63809ae
        public_6380999 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edi], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ss : [esp+0x10], edx
        public_63809ae : nop
        test ecx, ecx
        je public_63809c7
        fld qword ptr ds : [edi]
        fcomp qword ptr ds : [public_658b020]
        fnstsw ax
        test ah, 1
        je public_63809c7
        mov dword ptr ds : [ecx], 0
        public_63809c7 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        mov dword ptr ds : [public_658b078], eax
        mov eax, dword ptr ss : [esp+8]
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6380640)
    }
}

#undef public_63806a8
#undef public_63806bf
#undef public_63806cd
#undef public_638071d
#undef public_6380723
#undef public_6380739
#undef public_6380749
#undef public_63807cc
#undef public_63807d6
#undef public_63807ec
#undef public_63807f4
#undef public_6380810
#undef public_638085d
#undef public_638088a
#undef public_6380895
#undef public_63808b9
#undef public_63808d5
#undef public_638091c
#undef public_6380932
#undef public_638094e
#undef public_638095b
#undef public_638098a
#undef public_6380999
#undef public_63809ae
#undef public_63809c7
