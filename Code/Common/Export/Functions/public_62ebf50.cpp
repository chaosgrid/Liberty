#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b4ac0);
CLANG_FORWARD_PROC_SYMBOL(public_62e1630);
CLANG_FORWARD_PROC_SYMBOL(public_62e1680);
CLANG_FORWARD_PROC_SYMBOL(public_62e5af0);
CLANG_FORWARD_PROC_SYMBOL(public_62e5b20);
CLANG_FORWARD_PROC_SYMBOL(public_62e5b70);
CLANG_FORWARD_PROC_SYMBOL(public_62e5ba0);
CLANG_FORWARD_PROC_SYMBOL(public_62e60e0);
CLANG_FORWARD_PROC_SYMBOL(public_62e6150);
CLANG_FORWARD_PROC_SYMBOL(public_62ebf50);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391fc2);

#define public_62ebf8d _public_62ebf8d
#define public_62ebf8f _public_62ebf8f
#define public_62ebfb2 _public_62ebfb2
#define public_62ebfb4 _public_62ebfb4
#define public_62ebfcb _public_62ebfcb
#define public_62ebfd9 _public_62ebfd9
#define public_62ebfdb _public_62ebfdb
#define public_62ebff0 _public_62ebff0
#define public_62ec024 _public_62ec024
#define public_62ec026 _public_62ec026
#define public_62ec043 _public_62ec043
#define public_62ec045 _public_62ec045
#define public_62ec086 _public_62ec086
#define public_62ec0b0 _public_62ec0b0
#define public_62ec0b2 _public_62ec0b2
#define public_62ec0f0 _public_62ec0f0
#define public_62ec11f _public_62ec11f
#define public_62ec121 _public_62ec121
#define public_62ec143 _public_62ec143
#define public_62ec145 _public_62ec145
#define public_62ec17e _public_62ec17e
#define public_62ec191 _public_62ec191
#define public_62ec28d _public_62ec28d
#define public_62ec28f _public_62ec28f
#define public_62ec2a6 _public_62ec2a6
#define public_62ec2d6 _public_62ec2d6
#define public_62ec2d8 _public_62ec2d8
#define public_62ec2f2 _public_62ec2f2
#define public_62ec303 _public_62ec303
#define public_62ec309 _public_62ec309
#define public_62ec34c _public_62ec34c
#define public_62ec375 _public_62ec375
#define public_62ec377 _public_62ec377
#define public_62ec38e _public_62ec38e
#define public_62ec390 _public_62ec390
#define public_62ec3ca _public_62ec3ca
#define public_62ec412 _public_62ec412
#define public_62ec422 _public_62ec422
#define public_62ec424 _public_62ec424
#define public_62ec43b _public_62ec43b
#define public_62ec454 _public_62ec454
#define public_62ec456 _public_62ec456
#define public_62ec469 _public_62ec469
#define public_62ec47c _public_62ec47c
#define public_62ec47e _public_62ec47e
#define public_62ec4a9 _public_62ec4a9
#define public_62ec4ab _public_62ec4ab
#define public_62ec4bc _public_62ec4bc
#define public_62ec4f8 _public_62ec4f8
#define public_62ec4fc _public_62ec4fc
#define public_62ec50a _public_62ec50a

PROC_DECLARE(0x62ebf50, internal_62ebf50, public_62ebf50);
extern "C" NAKED register_t __cdecl internal_62ebf50()
{
    __asm
    {
        sub esp, 0xA4
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        push esi
        je public_62ec50a
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62ec50a
        mov byte ptr ss : [esp+0xF], 0
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        mov dword ptr ss : [esp+0x1C], 0x7F7FFFFF
        je public_62ebf8d
        add ecx, 0xFFFFFFF8
        jmp public_62ebf8f
        public_62ebf8d : nop
        xor ecx, ecx
        public_62ebf8f : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0xF]
        push edx
        call dword ptr ds : [eax+0x60]
        mov al, byte ptr ss : [esp+0xF]
        test al, al
        mov eax, dword ptr ss : [ebp+8]
        jne public_62ebfcb
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ebfb2
        add eax, 0xFFFFFFF8
        jmp public_62ebfb4
        public_62ebfb2 : nop
        xor eax, eax
        public_62ebfb4 : nop
        push 1
        push 0x3F800000
        push eax
        call public_62e5af0
        mov dword ptr ss : [esp+0x20], 1
        jmp public_62ebff0
        public_62ebfcb : nop
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ebfd9
        add eax, 0xFFFFFFF8
        jmp public_62ebfdb
        public_62ebfd9 : nop
        xor eax, eax
        public_62ebfdb : nop
        push 4
        push 0x3F800000
        push eax
        call public_62e5af0
        mov dword ptr ss : [esp+0x20], 4
        public_62ebff0 : nop
        mov ebx, dword ptr ss : [esp+0xC0]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x1C]
        mov eax, 0x3F800000
        mov dword ptr ds : [ebx+4], eax
        fstp dword ptr ds : [ebx]
        mov dword ptr ds : [ebx+0xC], eax
        mov byte ptr ds : [ebx+0x10], 1
        mov eax, dword ptr ss : [ebp+8]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        add esp, 0xC
        test eax, eax
        je public_62ec024
        lea ecx, ds:[eax-8]
        jmp public_62ec026
        public_62ec024 : nop
        xor ecx, ecx
        public_62ec026 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_62ec043
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_62ec045
        public_62ec043 : nop
        xor eax, eax
        public_62ec045 : nop
        lea ecx, ss:[ebp+0x1C]
        push 0x20
        push ecx
        mov ecx, eax
        call public_62b4ac0
        mov esi, eax
        test esi, esi
        jbe public_62ec50a
        mov eax, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [eax+0x157A]
        add eax, 0x14FC
        test cl, cl
        push edi
        jne public_62ec086
        mov ecx, dword ptr ds : [eax+0x84]
        lea edi, ds:[eax+0xC]
        mov byte ptr ds : [eax+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push edi
        add eax, 0x18
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62ec086 : nop
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ss : [ebp+8]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ec0b0
        add eax, 0xFFFFFFF8
        jmp public_62ec0b2
        public_62ec0b0 : nop
        xor eax, eax
        public_62ec0b2 : nop
        push eax
        lea eax, ss:[esp+0x88]
        push eax
        call public_62e6150
        add esp, 8
        test esi, esi
        mov dword ptr ss : [esp+0x40], 0xC61C4000
        mov dword ptr ss : [esp+0x24], 0xC61C4000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        jbe public_62ec2f2
        lea eax, ss:[ebp+0x1C]
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], esi
        mov edi, edi
        public_62ec0f0 : nop
        mov edi, dword ptr ds : [eax]
        test edi, edi
        je public_62ec2d8
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edi]
        push eax
        push 0x3F800000
        mov ecx, edi
        call dword ptr ds : [edx+0xD8]
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_62ec11f
        fstp dword ptr ss : [esp+0x14]
        jmp public_62ec121
        public_62ec11f : nop
        fstp st(0)
        public_62ec121 : nop
        mov edx, dword ptr ds : [edi]
        push 0
        push 0x3F800000
        mov ecx, edi
        call dword ptr ds : [edx+0xF0]
        fcom dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 5
        jp public_62ec143
        fstp dword ptr ss : [esp+0x20]
        jmp public_62ec145
        public_62ec143 : nop
        fstp st(0)
        public_62ec145 : nop
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x78]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0xAC]
        mov esi, dword ptr ss : [ebp+8]
        mov al, byte ptr ds : [esi+0x157A]
        add esi, 0x14FC
        test al, al
        jne public_62ec17e
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62ec17e : nop
        mov eax, dword ptr ds : [public_63fca58]
        test eax, eax
        jne public_62ec191
        call public_6391cf0
        mov dword ptr ds : [public_63fca58], eax
        public_62ec191 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x78]
        push edx
        mov edx, dword ptr ss : [esp+0x48]
        push edx
        lea edx, ss:[esp+0x5C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ds : [esi+0xC]
        lea eax, ss:[esp+0x90]
        push edi
        push eax
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x60]
        fadd dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x64]
        fadd dword ptr ds : [esi+0x14]
        fstp dword ptr ss : [esp+0x58]
        call public_62e60e0
        fld dword ptr ss : [esp+0x58]
        fsub dword ptr ds : [eax+8]
        add esp, 8
        fld dword ptr ss : [esp+0x4C]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x48]
        fsub dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x14FC
        fstp dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        lea ecx, ss:[esp+0x2C]
        fld dword ptr ds : [eax+0x20]
        lea eax, ss:[esp+0x60]
        fstp dword ptr ss : [esp+0x74]
        fxch 
        push eax
        fchs 
        push ecx
        fstp dword ptr ss : [esp+0x68]
        lea edx, ss:[esp+0xA4]
        fchs 
        push edx
        fstp dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x80]
        fchs 
        fstp dword ptr ss : [esp+0x74]
        call public_62e1680
        add esp, 8
        push eax
        call public_62e1630
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        add esp, 8
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x1C]
        fmulp 
        fcom dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 0x41
        jne public_62ec28d
        fstp dword ptr ss : [esp+0x24]
        jmp public_62ec28f
        public_62ec28d : nop
        fstp st(0)
        public_62ec28f : nop
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ss : [esp+0x40]
        fnstsw ax
        test ah, 0x41
        jne public_62ec2a6
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x40], eax
        public_62ec2a6 : nop
        lea ecx, ss:[esp+0xA8]
        push edi
        push ecx
        call public_62e6150
        push eax
        lea edx, ss:[esp+0x90]
        push edx
        call public_62e1630
        fcom dword ptr ss : [esp+0x38]
        add esp, 0x10
        fnstsw ax
        test ah, 5
        jp public_62ec2d6
        fstp dword ptr ss : [esp+0x28]
        jmp public_62ec2d8
        public_62ec2d6 : nop
        fstp st(0)
        public_62ec2d8 : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x3C]
        add eax, 4
        dec ecx
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], ecx
        jne public_62ec0f0
        public_62ec2f2 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        pop edi
        jne public_62ec303
        fld dword ptr ds : [public_639fe30]
        jmp public_62ec309
        public_62ec303 : nop
        fld dword ptr ds : [public_63a0608]
        public_62ec309 : nop
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_63a0800]
        fnstsw ax
        test ah, 0x41
        jne public_62ec469
        fdivr dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_639b21c]
        fnstsw ax
        test ah, 5
        jp public_62ec34c
        fld st(0)
        fmulp 
        fcom dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 5
        jp public_62ec34c
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        public_62ec34c : nop
        fmul dword ptr ss : [esp+0x10]
        fsubr dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x10]
        fmul qword ptr ds : [public_639df88]
        fld dword ptr ss : [esp+0x18]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_62ec375
        fstp dword ptr ss : [esp+0x18]
        jmp public_62ec377
        public_62ec375 : nop
        fstp st(0)
        public_62ec377 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [ebp+8]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ec38e
        add eax, 0xFFFFFFF8
        jmp public_62ec390
        public_62ec38e : nop
        xor eax, eax
        public_62ec390 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        push edx
        push eax
        call public_62e5b70
        fstp dword ptr ds : [ebx+4]
        fld dword ptr ss : [esp+0x30]
        add esp, 0xC
        call public_6391fc2
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ss : [ebp+0x9C]
        fnstsw ax
        test ah, 5
        jp public_62ec3ca
        mov dword ptr ss : [esp+0x10], 0x7F7FFFFF
        jmp public_62ec424
        public_62ec3ca : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ss : [ebp+0xA0]
        fnstsw ax
        test ah, 5
        jp public_62ec412
        fld dword ptr ss : [ebp+0xA0]
        fsub dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x1C]
        fdiv dword ptr ss : [ebp+0xA0]
        fmulp 
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        fmul qword ptr ds : [public_639df88]
        fld dword ptr ss : [esp+0x10]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_62ec422
        fstp dword ptr ss : [esp+0x10]
        jmp public_62ec424
        public_62ec412 : nop
        fld dword ptr ss : [esp+0x1C]
        fmul qword ptr ds : [public_639fa50]
        fstp dword ptr ss : [esp+0x10]
        jmp public_62ec424
        public_62ec422 : nop
        fstp st(0)
        public_62ec424 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 0x41
        jne public_62ec43b
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        public_62ec43b : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+8], ecx
        mov ebp, dword ptr ss : [ebp+8]
        add ebp, 8
        mov ebp, dword ptr ss : [ebp]
        test ebp, ebp
        je public_62ec454
        lea eax, ss:[ebp-8]
        jmp public_62ec456
        public_62ec454 : nop
        xor eax, eax
        public_62ec456 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push eax
        call public_62e5ba0
        fstp dword ptr ds : [ebx+0xC]
        add esp, 8
        jmp public_62ec4bc
        public_62ec469 : nop
        mov eax, dword ptr ss : [ebp+8]
        fstp st(0)
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ec47c
        add eax, 0xFFFFFFF8
        jmp public_62ec47e
        public_62ec47c : nop
        xor eax, eax
        public_62ec47e : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov esi, 0x3F800000
        push esi
        push eax
        call public_62e5af0
        fstp dword ptr ds : [ebx]
        mov dword ptr ds : [ebx+4], esi
        mov ebp, dword ptr ss : [ebp+8]
        add ebp, 8
        mov ebp, dword ptr ss : [ebp]
        add esp, 0xC
        test ebp, ebp
        je public_62ec4a9
        add ebp, 0xFFFFFFF8
        jmp public_62ec4ab
        public_62ec4a9 : nop
        xor ebp, ebp
        public_62ec4ab : nop
        push esi
        push esi
        push ebp
        call public_62e5b20
        fstp dword ptr ds : [ebx+8]
        add esp, 0xC
        mov dword ptr ds : [ebx+0xC], esi
        public_62ec4bc : nop
        mov al, byte ptr ss : [esp+0xF]
        test al, al
        jne public_62ec4fc
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_639b21c]
        fnstsw ax
        test ah, 5
        jp public_62ec4f8
        fld dword ptr ss : [esp+0x24]
        fcomp qword ptr ds : [public_63a07f8]
        fnstsw ax
        test ah, 0x41
        jne public_62ec4f8
        pop esi
        pop ebp
        mov byte ptr ds : [ebx+0x10], 1
        mov al, 1
        pop ebx
        add esp, 0xA4
        ret 4
        public_62ec4f8 : nop
        mov byte ptr ds : [ebx+0x10], 0
        public_62ec4fc : nop
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0xA4
        ret 4
        public_62ec50a : nop
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xA4
        ret 4
        UNREACHABLE_TRAP(0x62ebf50)
    }
}

#undef public_62ebf8d
#undef public_62ebf8f
#undef public_62ebfb2
#undef public_62ebfb4
#undef public_62ebfcb
#undef public_62ebfd9
#undef public_62ebfdb
#undef public_62ebff0
#undef public_62ec024
#undef public_62ec026
#undef public_62ec043
#undef public_62ec045
#undef public_62ec086
#undef public_62ec0b0
#undef public_62ec0b2
#undef public_62ec0f0
#undef public_62ec11f
#undef public_62ec121
#undef public_62ec143
#undef public_62ec145
#undef public_62ec17e
#undef public_62ec191
#undef public_62ec28d
#undef public_62ec28f
#undef public_62ec2a6
#undef public_62ec2d6
#undef public_62ec2d8
#undef public_62ec2f2
#undef public_62ec303
#undef public_62ec309
#undef public_62ec34c
#undef public_62ec375
#undef public_62ec377
#undef public_62ec38e
#undef public_62ec390
#undef public_62ec3ca
#undef public_62ec412
#undef public_62ec422
#undef public_62ec424
#undef public_62ec43b
#undef public_62ec454
#undef public_62ec456
#undef public_62ec469
#undef public_62ec47c
#undef public_62ec47e
#undef public_62ec4a9
#undef public_62ec4ab
#undef public_62ec4bc
#undef public_62ec4f8
#undef public_62ec4fc
#undef public_62ec50a
