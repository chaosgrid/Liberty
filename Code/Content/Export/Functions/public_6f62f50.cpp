#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ead810);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f62ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f62f50);
CLANG_FORWARD_PROC_SYMBOL(public_6f637e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f69830);
CLANG_FORWARD_PROC_SYMBOL(public_6f699e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a410);
CLANG_FORWARD_PROC_SYMBOL(public_6f76970);
CLANG_FORWARD_PROC_SYMBOL(public_6f77e70);
CLANG_FORWARD_PROC_SYMBOL(public_6f78070);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafb2b);

#define public_6f62fe4 _public_6f62fe4
#define public_6f6302a _public_6f6302a
#define public_6f63054 _public_6f63054
#define public_6f63058 _public_6f63058
#define public_6f63070 _public_6f63070
#define public_6f63085 _public_6f63085
#define public_6f63088 _public_6f63088
#define public_6f63096 _public_6f63096
#define public_6f630a2 _public_6f630a2
#define public_6f630ab _public_6f630ab
#define public_6f630b2 _public_6f630b2
#define public_6f630cc _public_6f630cc
#define public_6f630e0 _public_6f630e0
#define public_6f630e4 _public_6f630e4
#define public_6f630f4 _public_6f630f4
#define public_6f6312c _public_6f6312c
#define public_6f6314f _public_6f6314f
#define public_6f63158 _public_6f63158
#define public_6f6315f _public_6f6315f
#define public_6f63175 _public_6f63175
#define public_6f63182 _public_6f63182
#define public_6f6318e _public_6f6318e
#define public_6f631a8 _public_6f631a8
#define public_6f631c1 _public_6f631c1
#define public_6f63267 _public_6f63267
#define public_6f63274 _public_6f63274
#define public_6f6328a _public_6f6328a
#define public_6f63299 _public_6f63299
#define public_6f632af _public_6f632af
#define public_6f632b6 _public_6f632b6
#define public_6f632ba _public_6f632ba
#define public_6f632bc _public_6f632bc
#define public_6f6332d _public_6f6332d
#define public_6f63415 _public_6f63415
#define public_6f63447 _public_6f63447
#define public_6f63459 _public_6f63459
#define public_6f6345d _public_6f6345d
#define public_6f63475 _public_6f63475
#define public_6f63497 _public_6f63497
#define public_6f63564 _public_6f63564
#define public_6f63596 _public_6f63596
#define public_6f635b0 _public_6f635b0
#define public_6f635c5 _public_6f635c5
#define public_6f635f7 _public_6f635f7
#define public_6f6366e _public_6f6366e
#define public_6f63699 _public_6f63699
#define public_6f636b2 _public_6f636b2
#define public_6f63783 _public_6f63783

PROC_DECLARE(0x6f62f50, internal_6f62f50, public_6f62f50);
extern "C" NAKED register_t __cdecl internal_6f62f50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafb2b @0x6f62f52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafb2b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xF0
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x63]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_6ead6a0
        mov edi, dword ptr ss : [esp+0x114]
        test edi, edi
        mov ecx, dword ptr ss : [esp+0x11C]
        mov dword ptr ss : [esp+0x108], 0
        mov dword ptr ds : [ecx], 0
        je public_6f6302a
        mov al, byte ptr ds : [edi+0x11]
        test al, al
        je public_6f6302a
        mov eax, dword ptr ss : [esp+0x118]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        jne public_6f6302a
        mov ecx, dword ptr ss : [esp+0x110]
        lea edx, ss:[esp+0x18]
        push edx
        push 0x459C4000
        add eax, 0x34
        push eax
        mov byte ptr ss : [esp+0x1F], 1
        call public_6f76970
        mov esi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        cmp esi, eax
        je public_6f63058
        public_6f62fe4 : nop
        mov eax, dword ptr ds : [esi+4]
        add eax, 4
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x38], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x3C], edx
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x38]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x48], eax
        call dword ptr ds : [public_6fb34b8]
        fcomp dword ptr ds : [public_6fb5810]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jne public_6f63085
        push esi
        lea ecx, ss:[esp+0x1C]
        call public_6f69830
        mov esi, eax
        jmp public_6f63088
        public_6f6302a : nop
        mov ecx, dword ptr ss : [esp+0x118]
        lea eax, ss:[esp+0x18]
        push eax
        add ecx, 0x34
        push 0x459C4000
        push ecx
        mov ecx, dword ptr ss : [esp+0x11C]
        mov byte ptr ss : [esp+0x1F], 0
        call public_6f76970
        mov eax, dword ptr ss : [esp+0x20]
        public_6f63054 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        public_6f63058 : nop
        test esi, esi
        je public_6f631a8
        sub eax, esi
        sar eax, 4
        test eax, eax
        je public_6f631a8
        lea ecx, ds:[ecx]
        public_6f63070 : nop
        lea ecx, ss:[esp+0x18]
        call public_6ead810
        test eax, eax
        jne public_6f63096
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, eax
        jmp public_6f630e4
        public_6f63085 : nop
        add esi, 0x10
        public_6f63088 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp esi, eax
        jne public_6f62fe4
        jmp public_6f63054
        public_6f63096 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        test ecx, ecx
        jne public_6f630a2
        xor esi, esi
        jmp public_6f630ab
        public_6f630a2 : nop
        mov esi, dword ptr ss : [esp+0x20]
        sub esi, ecx
        sar esi, 4
        public_6f630ab : nop
        dec esi
        jne public_6f630b2
        xor eax, eax
        jmp public_6f630cc
        public_6f630b2 : nop
        call dword ptr ds : [public_6fb3370]
        mov ecx, dword ptr ss : [esp+0x1C]
        inc esi
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        public_6f630cc : nop
        test eax, eax
        mov esi, ecx
        jbe public_6f630e0
        shl eax, 4
        add eax, ecx
        mov esi, eax
        lea esp, ss:[esp]
        public_6f630e0 : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_6f630e4 : nop
        xor bl, bl
        cmp esi, eax
        je public_6f6318e
        mov edi, dword ptr ds : [public_6fb3370]
        public_6f630f4 : nop
        test bl, bl
        jne public_6f631c1
        lea edx, ss:[esp+0x64]
        push edx
        mov edx, dword ptr ss : [esp+0x11C]
        lea eax, ss:[esp+0x54]
        push eax
        mov eax, dword ptr ss : [esp+0x118]
        lea ecx, ss:[esp+0x1B]
        push ecx
        push edx
        push esi
        push eax
        call public_6f62ab0
        add esp, 0x18
        test al, al
        je public_6f6312c
        mov bl, 1
        jmp public_6f63182
        public_6f6312c : nop
        push esi
        lea ecx, ss:[esp+0x1C]
        call public_6f69830
        lea ecx, ss:[esp+0x18]
        call public_6ead810
        test eax, eax
        je public_6f6318e
        mov ecx, dword ptr ss : [esp+0x1C]
        test ecx, ecx
        jne public_6f6314f
        xor esi, esi
        jmp public_6f63158
        public_6f6314f : nop
        mov esi, dword ptr ss : [esp+0x20]
        sub esi, ecx
        sar esi, 4
        public_6f63158 : nop
        dec esi
        jne public_6f6315f
        xor eax, eax
        jmp public_6f63175
        public_6f6315f : nop
        call edi
        mov ecx, dword ptr ss : [esp+0x1C]
        inc esi
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        public_6f63175 : nop
        test eax, eax
        mov esi, ecx
        jbe public_6f63182
        shl eax, 4
        add eax, ecx
        mov esi, eax
        public_6f63182 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp esi, eax
        jne public_6f630f4
        public_6f6318e : nop
        mov edx, dword ptr ss : [esp+0x120]
        mov eax, dword ptr ss : [esp+0x11C]
        mov dword ptr ds : [edx], 0
        mov dword ptr ds : [eax], 0
        public_6f631a8 : nop
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x108], 0xFFFFFFFF
        call public_6f68fb0
        jmp public_6f63699
        public_6f631c1 : nop
        cmp esi, eax
        je public_6f6318e
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [public_6fb3664]
        lea ecx, ss:[esp+0xAC]
        push ecx
        mov ecx, dword ptr ss : [esp+0x54]
        imul ecx, 0x44
        lea edx, ss:[esp+0x48]
        push edx
        mov edx, dword ptr ds : [ecx+eax]
        push edx
        call edi
        mov ecx, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ds : [esi+4]
        imul ecx, 0x44
        mov edx, dword ptr ds : [ecx+eax]
        mov eax, dword ptr ss : [esp+0x128]
        lea ecx, ss:[esp+0xE8]
        push ecx
        mov ecx, dword ptr ss : [esp+0x74]
        imul ecx, 0x44
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0xE0]
        push edx
        mov edx, dword ptr ds : [ecx+eax]
        push edx
        call edi
        lea eax, ss:[esp+0x5C]
        push eax
        lea ecx, ss:[esp+0xEC]
        push ecx
        lea edx, ss:[esp+0x58]
        push edx
        call public_6eeaee0
        mov ecx, dword ptr ss : [esp+0x88]
        mov eax, dword ptr ds : [esi+4]
        mov ebp, dword ptr ss : [esp+0x74]
        mov edx, ecx
        imul edx, 0x44
        mov eax, dword ptr ds : [edx+eax]
        mov edx, dword ptr ss : [esp+0x144]
        add esp, 0x24
        cmp ecx, ebp
        mov dword ptr ds : [edx], eax
        jge public_6f63267
        cmp ebp, 1
        je public_6f632b6
        cmp ebp, 2
        je public_6f632b6
        cmp ecx, ebp
        public_6f63267 : nop
        jle public_6f632ba
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        jne public_6f63274
        xor edx, edx
        jmp public_6f6328a
        public_6f63274 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edi
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f6328a : nop
        add edx, 0xFFFFFFFE
        cmp ebp, edx
        je public_6f632b6
        test edi, edi
        jne public_6f63299
        xor edx, edx
        jmp public_6f632af
        public_6f63299 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, edi
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f632af : nop
        add edx, 0xFFFFFFFD
        cmp ebp, edx
        jne public_6f632ba
        public_6f632b6 : nop
        mov bl, 1
        jmp public_6f632bc
        public_6f632ba : nop
        xor bl, bl
        public_6f632bc : nop
        fld dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x12C]
        fmul dword ptr ss : [esp+0xB4]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0xC0]
        faddp 
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0xCC]
        faddp 
        fcomp dword ptr ds : [public_6fb444c]
        fld dword ptr ds : [edx]
        fnstsw ax
        test ah, 5
        mov eax, dword ptr ds : [public_6fd1c70]
        jp public_6f63475
        test eax, eax
        fchs 
        fstp dword ptr ss : [esp+0x9C]
        mov dword ptr ss : [esp+0x94], 0
        mov dword ptr ss : [esp+0x98], 0
        jne public_6f6332d
        call public_6fa8fa0
        mov dword ptr ds : [public_6fd1c70], eax
        public_6f6332d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x94]
        push edx
        lea edx, ss:[esp+0xB0]
        push edx
        lea edx, ss:[esp+0xA8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0xA8]
        fadd dword ptr ss : [esp+0x4C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x94]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xB0]
        fadd dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xAC]
        fadd dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        mov eax, dword ptr ss : [esp+0x88]
        mov ecx, dword ptr ss : [esp+0x8C]
        mov ebp, dword ptr ss : [esp+0x11C]
        mov edx, dword ptr ss : [esp+0x90]
        mov edi, dword ptr ss : [esp+0x110]
        mov dword ptr ss : [esp+0x7C], eax
        push ebp
        lea eax, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x84], ecx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x8C], edx
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x30], 1
        call public_6f78070
        fstp dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x68]
        push ecx
        lea edx, ss:[esp+0x80]
        push edx
        push ebp
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 1
        call public_6f77e70
        test al, al
        je public_6f63415
        fld dword ptr ss : [esp+0x68]
        fabs 
        fcomp qword ptr ds : [public_6fbbc60]
        fnstsw ax
        test ah, 0x41
        jne public_6f63447
        public_6f63415 : nop
        test bl, bl
        je public_6f635c5
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_6fbbc5c]
        fnstsw ax
        test ah, 1
        je public_6f635c5
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 5
        jnp public_6f635c5
        public_6f63447 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push esi
        push ecx
        add esi, 0x10
        push esi
        call public_6f6a410
        add esp, 0xC
        public_6f63459 : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_6f6345d : nop
        push eax
        add eax, 0xFFFFFFF0
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6f699e0
        sub dword ptr ss : [esp+0x20], 0x10
        jmp public_6f63070
        public_6f63475 : nop
        test eax, eax
        fstp dword ptr ss : [esp+0x78]
        mov dword ptr ss : [esp+0x70], 0
        mov dword ptr ss : [esp+0x74], 0
        jne public_6f63497
        call public_6fa8fa0
        mov dword ptr ds : [public_6fd1c70], eax
        public_6f63497 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x70]
        push edx
        lea edx, ss:[esp+0xB0]
        push edx
        lea edx, ss:[esp+0x5C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ss : [esp+0x4C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x64]
        fadd dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x60]
        fadd dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        mov ebp, dword ptr ss : [esp+0x11C]
        mov edx, dword ptr ss : [esp+0x34]
        mov edi, dword ptr ss : [esp+0x110]
        mov dword ptr ss : [esp+0x7C], eax
        push ebp
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x84], ecx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x8C], edx
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_6f78070
        fstp dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x6C]
        push ecx
        lea edx, ss:[esp+0x80]
        push edx
        push ebp
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_6f77e70
        test al, al
        je public_6f63564
        fld dword ptr ss : [esp+0x6C]
        fabs 
        fcomp qword ptr ds : [public_6fbbc60]
        fnstsw ax
        test ah, 0x41
        jne public_6f63596
        public_6f63564 : nop
        test bl, bl
        je public_6f636b2
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_6fbbc5c]
        fnstsw ax
        test ah, 1
        je public_6f636b2
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 5
        jnp public_6f636b2
        public_6f63596 : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea edi, ds:[esi+0x10]
        cmp edi, eax
        mov ebp, eax
        je public_6f6345d
        sub esi, edi
        lea esp, ss:[esp]
        public_6f635b0 : nop
        push edi
        lea ecx, ds:[esi+edi]
        call public_6f637e0
        add edi, 0x10
        cmp edi, ebp
        jne public_6f635b0
        jmp public_6f63459
        public_6f635c5 : nop
        mov ecx, dword ptr ss : [esp+0x12C]
        fld dword ptr ds : [ecx]
        mov eax, dword ptr ds : [public_6fd1c70]
        test eax, eax
        fchs 
        fstp dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0x437F0000
        jne public_6f635f7
        call public_6fa8fa0
        mov dword ptr ds : [public_6fd1c70], eax
        public_6f635f7 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0xB0]
        push ecx
        lea ecx, ss:[esp+0x5C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ss : [esp+0x4C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x7C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x64]
        fadd dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x60]
        fadd dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        mov eax, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ss : [esp+0x124]
        mov ecx, dword ptr ss : [esp+0x74]
        mov edi, dword ptr ss : [esp+0x128]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x78]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, 9
        lea esi, ss:[esp+0xAC]
        mov dword ptr ds : [edx+8], eax
        rep movsd
        public_6f6366e : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        push edx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x110], 0xFFFFFFFF
        call public_6f699e0
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f63699 : nop
        mov ecx, dword ptr ss : [esp+0x100]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xFC
        ret 
        public_6f636b2 : nop
        mov ebp, dword ptr ss : [esp+0x128]
        mov ecx, 9
        lea esi, ss:[esp+0xAC]
        mov edi, ebp
        rep movsd
        fld dword ptr ss : [ebp+0x18]
        fld dword ptr ss : [ebp+0xC]
        fxch 
        fchs 
        mov ecx, dword ptr ss : [ebp]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x20], ecx
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [ebp+0x20]
        mov edx, dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x30]
        fxch 
        fchs 
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        mov dword ptr ss : [ebp], edx
        mov edx, dword ptr ss : [ebp+8]
        fchs 
        mov dword ptr ss : [esp+0x20], edx
        fstp dword ptr ss : [esp+4]
        mov dword ptr ss : [ebp+0x18], ecx
        fld dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x38]
        fchs 
        mov dword ptr ss : [ebp+0xC], eax
        fstp dword ptr ss : [esp]
        call public_6eb7810
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [esp+0x12C]
        mov dword ptr ss : [ebp+0x14], ecx
        mov dword ptr ss : [ebp+0x20], edx
        fld dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_6fd1c70]
        fstp dword ptr ss : [esp+0x34]
        test eax, eax
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0xC37F0000
        jne public_6f63783
        call public_6fa8fa0
        mov dword ptr ds : [public_6fd1c70], eax
        public_6f63783 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        lea edx, ss:[esp+0xB0]
        push edx
        lea edx, ss:[esp+0x5C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x124]
        fld dword ptr ss : [esp+0x58]
        fadd dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [eax+8], ecx
        jmp public_6f6366e
        UNREACHABLE_TRAP(0x6f62f50)
    }
}

#undef public_6f62fe4
#undef public_6f6302a
#undef public_6f63054
#undef public_6f63058
#undef public_6f63070
#undef public_6f63085
#undef public_6f63088
#undef public_6f63096
#undef public_6f630a2
#undef public_6f630ab
#undef public_6f630b2
#undef public_6f630cc
#undef public_6f630e0
#undef public_6f630e4
#undef public_6f630f4
#undef public_6f6312c
#undef public_6f6314f
#undef public_6f63158
#undef public_6f6315f
#undef public_6f63175
#undef public_6f63182
#undef public_6f6318e
#undef public_6f631a8
#undef public_6f631c1
#undef public_6f63267
#undef public_6f63274
#undef public_6f6328a
#undef public_6f63299
#undef public_6f632af
#undef public_6f632b6
#undef public_6f632ba
#undef public_6f632bc
#undef public_6f6332d
#undef public_6f63415
#undef public_6f63447
#undef public_6f63459
#undef public_6f6345d
#undef public_6f63475
#undef public_6f63497
#undef public_6f63564
#undef public_6f63596
#undef public_6f635b0
#undef public_6f635c5
#undef public_6f635f7
#undef public_6f6366e
#undef public_6f63699
#undef public_6f636b2
#undef public_6f63783
