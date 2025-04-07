#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_637f410);
CLANG_FORWARD_PROC_SYMBOL(public_63809e0);
CLANG_FORWARD_PROC_SYMBOL(public_63840b0);

#define public_6380a21 _public_6380a21
#define public_6380a47 _public_6380a47
#define public_6380a61 _public_6380a61
#define public_6380a65 _public_6380a65
#define public_6380a7d _public_6380a7d
#define public_6380a92 _public_6380a92
#define public_6380a94 _public_6380a94
#define public_6380ac3 _public_6380ac3
#define public_6380ac7 _public_6380ac7
#define public_6380b45 _public_6380b45
#define public_6380b48 _public_6380b48
#define public_6380b64 _public_6380b64
#define public_6380b8c _public_6380b8c
#define public_6380ba6 _public_6380ba6
#define public_6380bc2 _public_6380bc2
#define public_6380bc4 _public_6380bc4
#define public_6380bd7 _public_6380bd7
#define public_6380bf7 _public_6380bf7
#define public_6380c1b _public_6380c1b
#define public_6380c41 _public_6380c41
#define public_6380c48 _public_6380c48

PROC_DECLARE(0x63809e0, internal_63809e0, public_63809e0);
extern "C" NAKED register_t __cdecl internal_63809e0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x24
        mov eax, dword ptr ss : [ebp+0x18]
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        push esi
        push edi
        xor edi, edi
        cmp ebx, edi
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ds : [eax], edi
        jle public_6380bf7
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+8]
        dec edx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x18], edx
        public_6380a21 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        fld qword ptr ds : [ecx+edi*8]
        lea esi, ds:[edi*8]
        fcomp qword ptr ds : [public_63a58b0]
        fld qword ptr ds : [ecx+esi]
        mov dword ptr ss : [esp+0x14], esi
        fnstsw ax
        test ah, 1
        je public_6380a47
        fchs 
        public_6380a47 : nop
        lea ecx, ds:[edi+1]
        fstp qword ptr ss : [esp+0x28]
        cmp ecx, ebx
        mov edx, edi
        mov dword ptr ss : [esp+0x24], ecx
        jge public_6380ac7
        mov eax, dword ptr ss : [esp+0x10]
        lea ebx, ds:[eax+4]
        jmp public_6380a65
        public_6380a61 : nop
        mov esi, dword ptr ss : [esp+0x14]
        public_6380a65 : nop
        mov eax, dword ptr ds : [ebx]
        fld qword ptr ds : [esi+eax]
        add esi, eax
        fcomp qword ptr ds : [public_63a58b0]
        fld qword ptr ds : [esi]
        fnstsw ax
        test ah, 1
        je public_6380a7d
        fchs 
        public_6380a7d : nop
        fld st(0)
        fcomp qword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 0x41
        jne public_6380a92
        fstp qword ptr ss : [esp+0x28]
        mov edx, ecx
        jmp public_6380a94
        public_6380a92 : nop
        fstp st(0)
        public_6380a94 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        inc ecx
        add ebx, 4
        cmp ecx, eax
        jl public_6380a61
        cmp edx, edi
        je public_6380ac3
        mov esi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [esi+edx*4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+edx*4], ecx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [ebp+0x14]
        xor dword ptr ds : [eax], 1
        xor dword ptr ss : [esp+0x1C], 1
        public_6380ac3 : nop
        mov esi, dword ptr ss : [esp+0x14]
        public_6380ac7 : nop
        mov eax, dword ptr ds : [public_658b6f4]
        fld qword ptr ss : [esp+0x28]
        fcomp qword ptr ds : [esi+eax]
        fnstsw ax
        test ah, 0x41
        je public_6380b64
        fld qword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [ebp+0x18]
        fcomp qword ptr ds : [public_63a58b0]
        mov dword ptr ds : [ecx], 1
        fnstsw ax
        test ah, 0x40
        je public_6380b64
        cmp dword ptr ds : [public_658b078], 4
        jl public_6380b45
        mov edx, dword ptr ds : [public_658b6a4]
        mov eax, dword ptr ds : [public_658b6a0]
        mov ecx, dword ptr ss : [esp+0x2C]
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push eax
        push ecx
        push edx
        push edi
/*FIXUP push offset public_63f66f4 @0x6380b19*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f66f4
        call public_6356960
        mov eax, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [public_658b7fc]
        push eax
        push ebx
        push ecx
/*FIXUP push offset public_63f66ec @0x6380b35*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f66ec
        push edx
        call public_63840b0
        add esp, 0x2C
        jmp public_6380b48
        public_6380b45 : nop
        mov ebx, dword ptr ss : [ebp+0xC]
        public_6380b48 : nop
        mov edx, dword ptr ds : [public_658bc58]
        inc edx
/*FIXUP push offset public_63f66c8 @0x6380b4f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f66c8
        mov dword ptr ds : [public_658bc58], edx
        call public_637f410
        add esp, 4
        jmp public_6380bd7
        public_6380b64 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edi]
        fld qword ptr ds : [edx+esi]
        mov ecx, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ss : [ebp+0xC]
        add edx, esi
        add edx, 8
        cmp ecx, ebx
        jge public_6380c48
        mov eax, ebx
        add edi, 4
        sub eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        public_6380b8c : nop
        mov ecx, dword ptr ds : [edi]
        mov ebx, dword ptr ss : [esp+0x18]
        mov eax, esi
        fld qword ptr ds : [eax+ecx]
        add eax, ecx
        add eax, 8
        fdiv st, st(1)
        test ebx, ebx
        mov ecx, edx
        je public_6380bc2
        lea esi, ds:[ebx]
        public_6380ba6 : nop
        fld st(0)
        add ecx, 8
        fmul qword ptr ds : [ecx-8]
        add eax, 8
        dec esi
        fsubr qword ptr ds : [eax-8]
        fstp qword ptr ds : [eax-8]
        jne public_6380ba6
        mov esi, dword ptr ss : [esp+0x14]
        fstp st(0)
        jmp public_6380bc4
        public_6380bc2 : nop
        fstp st(0)
        public_6380bc4 : nop
        mov eax, dword ptr ss : [esp+0x20]
        add edi, 4
        dec eax
        mov dword ptr ss : [esp+0x20], eax
        jne public_6380b8c
        mov ebx, dword ptr ss : [ebp+0xC]
        fstp st(0)
        public_6380bd7 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x24]
        add edx, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x18], ecx
        jl public_6380a21
        public_6380bf7 : nop
        fld qword ptr ds : [public_658bd70]
        fcomp qword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 0x41
        jne public_6380c1b
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [public_658bd70], eax
        mov dword ptr ds : [public_658bd74], ecx
        public_6380c1b : nop
        cmp dword ptr ds : [public_658b078], 5
        jl public_6380c41
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [public_658b7fc]
        push edx
        push ebx
        push eax
/*FIXUP push offset public_63f66b0 @0x6380c33*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f66b0
        push ecx
        call public_63840b0
        add esp, 0x14
        public_6380c41 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_6380c48 : nop
        fstp st(0)
        jmp public_6380bd7
        UNREACHABLE_TRAP(0x63809e0)
    }
}

#undef public_6380a21
#undef public_6380a47
#undef public_6380a61
#undef public_6380a65
#undef public_6380a7d
#undef public_6380a92
#undef public_6380a94
#undef public_6380ac3
#undef public_6380ac7
#undef public_6380b45
#undef public_6380b48
#undef public_6380b64
#undef public_6380b8c
#undef public_6380ba6
#undef public_6380bc2
#undef public_6380bc4
#undef public_6380bd7
#undef public_6380bf7
#undef public_6380c1b
#undef public_6380c41
#undef public_6380c48
