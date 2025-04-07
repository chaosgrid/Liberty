#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6382040);
CLANG_FORWARD_PROC_SYMBOL(public_6382930);

#define public_6382086 _public_6382086
#define public_638209f _public_638209f
#define public_63820be _public_63820be
#define public_63820ef _public_63820ef
#define public_6382102 _public_6382102
#define public_6382117 _public_6382117
#define public_6382120 _public_6382120
#define public_6382139 _public_6382139
#define public_638213b _public_638213b
#define public_6382156 _public_6382156
#define public_638216d _public_638216d
#define public_638216f _public_638216f
#define public_638217c _public_638217c
#define public_63821c1 _public_63821c1
#define public_63821f9 _public_63821f9
#define public_6382200 _public_6382200

PROC_DECLARE(0x6382040, internal_6382040, public_6382040);
extern "C" NAKED register_t __cdecl internal_6382040()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x24
        fld qword ptr ds : [public_63a58b0]
        push ebx
        push esi
        fst qword ptr ss : [esp+0x1C]
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        xor edx, edx
        test edi, edi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], 0xFFEFFFFF
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        jle public_6382200
        mov ebx, dword ptr ss : [ebp+8]
        public_6382086 : nop
        mov eax, dword ptr ds : [public_658b1e0]
        test eax, eax
        je public_638209f
        lea eax, ds:[edi-1]
        cmp edx, eax
        jne public_638209f
        fld qword ptr ss : [esp+0x18]
        jmp public_6382156
        public_638209f : nop
        mov eax, dword ptr ds : [public_658b050]
        test eax, eax
        je public_63820be
        lea ecx, ds:[edi-1]
        cmp edx, ecx
        jne public_63820be
        fld qword ptr ss : [esp+0x10]
        fmul qword ptr ss : [esp+0x10]
        fadd st(0), st
        jmp public_6382156
        public_63820be : nop
        mov eax, dword ptr ds : [public_658b24c]
        fld qword ptr ds : [public_63a59d8]
        mov esi, eax
        imul esi, dword ptr ss : [ebp+0xC]
        lea esi, ds:[ebx+esi*8]
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x24], 0x7FEFFFFF
        mov ecx, ebx
        jae public_6382120
        lea edi, ds:[eax*8]
        public_63820ef : nop
        fld qword ptr ds : [ecx+edx*8]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 1
        je public_6382102
        fstp st(0)
        fld qword ptr ds : [ecx+edx*8]
        public_6382102 : nop
        fld qword ptr ds : [ecx+edx*8]
        fcomp qword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 1
        je public_6382117
        fld qword ptr ds : [ecx+edx*8]
        fstp qword ptr ss : [esp+0x20]
        public_6382117 : nop
        add ecx, edi
        cmp ecx, esi
        jb public_63820ef
        mov edi, dword ptr ss : [ebp+0x10]
        public_6382120 : nop
        fld st(0)
        fsub qword ptr ss : [esp+0x20]
        fld qword ptr ss : [esp+0x18]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_6382139
        fstp qword ptr ss : [esp+0x18]
        jmp public_638213b
        public_6382139 : nop
        fstp st(0)
        public_638213b : nop
        fld qword ptr ss : [esp+0x20]
        fchs 
        fstp qword ptr ss : [esp+0x28]
        fcom qword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 1
        je public_6382156
        fstp st(0)
        fld qword ptr ss : [esp+0x28]
        public_6382156 : nop
        fld st(0)
        faddp st(2), st
        fld qword ptr ss : [esp+0x10]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_638216d
        fstp qword ptr ss : [esp+0x10]
        jmp public_638216f
        public_638216d : nop
        fstp st(0)
        public_638216f : nop
        inc edx
        cmp edx, edi
        jl public_6382086
        fstp qword ptr ss : [esp+0x20]
        public_638217c : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push eax
        mov eax, dword ptr ds : [public_658b24c]
        push ecx
        push edx
        push eax
        call public_6382930
        fmul qword ptr ds : [public_63a59d0]
        add esp, 0x14
        fcom qword ptr ds : [public_63a59c8]
        fst qword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 1
        je public_63821c1
        fstp st(0)
        fld qword ptr ds : [public_63a59c8]
        fst qword ptr ss : [esp+0x20]
        public_63821c1 : nop
        cmp dword ptr ds : [public_658b078], 2
        jl public_63821f9
        mov ecx, dword ptr ss : [esp+0x1C]
        fstp st(0)
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push edx
        mov edx, dword ptr ds : [public_658b7fc]
        push eax
        push ecx
/*FIXUP push offset public_63f6a78 @0x63821e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6a78
        push edx
        call dword ptr ds : [public_63991e8]
        fld qword ptr ss : [esp+0x38]
        add esp, 0x18
        public_63821f9 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6382200 : nop
        fstp st(0)
        jmp public_638217c
        UNREACHABLE_TRAP(0x6382040)
    }
}

#undef public_6382086
#undef public_638209f
#undef public_63820be
#undef public_63820ef
#undef public_6382102
#undef public_6382117
#undef public_6382120
#undef public_6382139
#undef public_638213b
#undef public_6382156
#undef public_638216d
#undef public_638216f
#undef public_638217c
#undef public_63821c1
#undef public_63821f9
#undef public_6382200
