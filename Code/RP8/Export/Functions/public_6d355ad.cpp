#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f87d);
CLANG_FORWARD_PROC_SYMBOL(public_6d2fc9d);
CLANG_FORWARD_PROC_SYMBOL(public_6d355ad);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd8c);
CLANG_FORWARD_JUMP_SYMBOL(public_6d5d075);

#define public_6d355d0 _public_6d355d0
#define public_6d355f4 _public_6d355f4
#define public_6d355fe _public_6d355fe
#define public_6d3561d _public_6d3561d
#define public_6d3564d _public_6d3564d
#define public_6d35661 _public_6d35661
#define public_6d35675 _public_6d35675
#define public_6d356ac _public_6d356ac
#define public_6d356b0 _public_6d356b0
#define public_6d356c4 _public_6d356c4
#define public_6d35700 _public_6d35700
#define public_6d35702 _public_6d35702
#define public_6d35728 _public_6d35728
#define public_6d35754 _public_6d35754
#define public_6d35756 _public_6d35756
#define public_6d35790 _public_6d35790
#define public_6d357a0 _public_6d357a0
#define public_6d357b0 _public_6d357b0
#define public_6d357c2 _public_6d357c2
#define public_6d357dc _public_6d357dc
#define public_6d357ed _public_6d357ed
#define public_6d3581a _public_6d3581a
#define public_6d35832 _public_6d35832
#define public_6d3584f _public_6d3584f
#define public_6d3586f _public_6d3586f
#define public_6d359df _public_6d359df
#define public_6d35a05 _public_6d35a05
#define public_6d35a1a _public_6d35a1a
#define public_6d35a25 _public_6d35a25
#define public_6d35a30 _public_6d35a30
#define public_6d35a32 _public_6d35a32

PROC_DECLARE(0x6d355ad, internal_6d355ad, public_6d355ad);
extern "C" NAKED register_t __cdecl internal_6d355ad()
{
    __asm
    {
        mov eax, public_6d5d075
        call public_6d5cd8c
        sub esp, 0xB8
        push ebx
        mov ebx, ecx
        cmp byte ptr ds : [ebx+8], 5
        je public_6d355d0
        mov eax, 0x80004005
        jmp public_6d35a32
        public_6d355d0 : nop
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ecx+0x1058]
        mov edx, dword ptr ds : [ebx+4]
        push esi
        mov esi, dword ptr ds : [edx+0x1058]
        push edi
        mov edi, eax
        shr edi, 1
        cmp esi, edi
        je public_6d355fe
        cmp esi, 1
        jne public_6d355f4
        cmp eax, esi
        je public_6d355fe
        public_6d355f4 : nop
        mov eax, 0x80004005
        jmp public_6d35a30
        public_6d355fe : nop
        mov edi, dword ptr ds : [ecx+0x105C]
        mov esi, dword ptr ds : [edx+0x105C]
        shr edi, 1
        cmp esi, edi
        je public_6d3561d
        cmp esi, 1
        jne public_6d355f4
        cmp dword ptr ds : [ecx+0x105C], esi
        jne public_6d355f4
        public_6d3561d : nop
        mov esi, dword ptr ds : [ecx+0x1060]
        shr esi, 1
        cmp dword ptr ds : [edx+0x1060], esi
        jne public_6d355f4
        cmp eax, 1
        jbe public_6d3564d
        test al, 1
        je public_6d3564d
        and eax, 0xFFFFFFFE
        mov dword ptr ds : [ecx+0x1058], eax
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax+0x1068]
        sub dword ptr ds : [eax+0x1064], ecx
        public_6d3564d : nop
        mov eax, dword ptr ds : [ebx]
        lea ecx, ds:[eax+0x105C]
        mov eax, dword ptr ds : [ecx]
        cmp eax, 1
        jbe public_6d35661
        and eax, 0xFFFFFFFE
        mov dword ptr ds : [ecx], eax
        public_6d35661 : nop
        mov eax, dword ptr ds : [ebx]
        lea ecx, ds:[eax+0x1060]
        mov eax, dword ptr ds : [ecx]
        cmp eax, 1
        jbe public_6d35675
        and eax, 0xFFFFFFFE
        mov dword ptr ds : [ecx], eax
        public_6d35675 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [eax+0x1058]
        mov eax, esi
        shl eax, 4
        push eax
        call public_6d2f2a0
        pop ecx
        mov dword ptr ss : [ebp-0x14], eax
        and dword ptr ss : [ebp-4], 0
        test eax, eax
        mov edi, offset _public_6d2f87d
        je public_6d356ac
        push edi
        push esi
        push 0x10
        push eax
        call public_6d2fc9d
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x20], eax
        jmp public_6d356b0
        public_6d356ac : nop
        and dword ptr ss : [ebp-0x20], 0
        public_6d356b0 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        cmp dword ptr ss : [ebp-0x20], 0
        jne public_6d356c4
        mov eax, 0x8007000E
        jmp public_6d35a30
        public_6d356c4 : nop
        mov eax, dword ptr ds : [ebx]
        cmp dword ptr ds : [eax+0x105C], 1
        mov esi, dword ptr ds : [eax+0x1058]
        jne public_6d35728
        shl esi, 1
        mov eax, esi
        shl eax, 4
        push eax
        call public_6d2f2a0
        pop ecx
        mov dword ptr ss : [ebp-0x14], eax
        test eax, eax
        mov dword ptr ss : [ebp-4], 1
        je public_6d35700
        push edi
        push esi
        push 0x10
        push eax
        call public_6d2fc9d
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6d35702
        public_6d35700 : nop
        xor ecx, ecx
        public_6d35702 : nop
        mov eax, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [eax+0x1058]
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov esi, eax
        shl esi, 4
        add esi, ecx
        mov edx, esi
        mov dword ptr ss : [ebp-0x38], ecx
        mov dword ptr ss : [ebp-0x18], ecx
        mov dword ptr ss : [ebp-0x30], esi
        mov dword ptr ss : [ebp-0x1C], ecx
        mov dword ptr ss : [ebp-0x28], edx
        jmp public_6d35790
        public_6d35728 : nop
        shl esi, 2
        mov eax, esi
        shl eax, 4
        push eax
        call public_6d2f2a0
        pop ecx
        mov dword ptr ss : [ebp-0x14], eax
        test eax, eax
        mov dword ptr ss : [ebp-4], 2
        je public_6d35754
        push edi
        push esi
        push 0x10
        push eax
        call public_6d2fc9d
        mov edx, dword ptr ss : [ebp-0x14]
        jmp public_6d35756
        public_6d35754 : nop
        xor edx, edx
        public_6d35756 : nop
        mov eax, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [eax+0x1058]
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ecx, eax
        shl ecx, 4
        add ecx, edx
        mov dword ptr ss : [ebp-0x30], ecx
        mov esi, dword ptr ss : [ebp-0x30]
        mov ecx, eax
        shl ecx, 5
        add ecx, edx
        mov dword ptr ss : [ebp-0x1C], ecx
        lea ecx, ds:[eax+eax*2]
        shl ecx, 4
        add ecx, edx
        mov dword ptr ss : [ebp-0x28], ecx
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0x38], edx
        mov dword ptr ss : [ebp-0x18], edx
        mov edx, dword ptr ss : [ebp-0x28]
        public_6d35790 : nop
        cmp dword ptr ss : [ebp-0x38], 0
        jne public_6d357a0
        mov esi, 0x8007000E
        jmp public_6d35a25
        public_6d357a0 : nop
        cmp eax, 1
        mov eax, dword ptr ss : [ebp-0x18]
        jne public_6d357b0
        mov dword ptr ss : [ebp-0x3C], eax
        mov dword ptr ss : [ebp-0x40], esi
        jmp public_6d357c2
        public_6d357b0 : nop
        add eax, 0x10
        mov dword ptr ss : [ebp-0x3C], eax
        lea eax, ds:[esi+0x10]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x40], eax
        add edx, 0x10
        public_6d357c2 : nop
        mov eax, dword ptr ds : [ebx+4]
        and dword ptr ss : [ebp-0x24], 0
        cmp dword ptr ds : [eax+0x1060], 0
        mov dword ptr ss : [ebp-0x44], ecx
        mov dword ptr ss : [ebp-0x14], edx
        jbe public_6d35a1a
        public_6d357dc : nop
        and dword ptr ss : [ebp-0x10], 0
        cmp dword ptr ds : [eax+0x105C], 0
        jbe public_6d35a05
        public_6d357ed : nop
        push dword ptr ss : [ebp-0x18]
        mov edi, dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ecx]
        add edi, edi
        add eax, eax
        push edi
        push eax
        call dword ptr ds : [edx+4]
        cmp esi, dword ptr ss : [ebp-0x18]
        je public_6d3581a
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ecx]
        push esi
        lea eax, ds:[edi+1]
        push eax
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, eax
        push eax
        call dword ptr ds : [edx+4]
        public_6d3581a : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        cmp eax, dword ptr ss : [ebp-0x18]
        je public_6d35832
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, eax
        push edi
        inc eax
        push eax
        call dword ptr ds : [edx+4]
        public_6d35832 : nop
        mov eax, dword ptr ss : [ebp-0x28]
        cmp eax, esi
        je public_6d3584f
        cmp eax, dword ptr ss : [ebp-0x1C]
        je public_6d3584f
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [ebp-0x10]
        inc edi
        add eax, eax
        push edi
        inc eax
        push eax
        call dword ptr ds : [edx+4]
        public_6d3584f : nop
        mov eax, dword ptr ds : [ebx+4]
        and dword ptr ss : [ebp-0x2C], 0
        cmp dword ptr ds : [eax+0x1058], 0
        jbe public_6d359df
        mov eax, dword ptr ss : [ebp-0x20]
        fld dword ptr ds : [public_6d5f210]
        mov dword ptr ss : [ebp-0x34], eax
        public_6d3586f : nop
        mov eax, dword ptr ss : [ebp-0x2C]
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ss : [ebp-0x18]
        add eax, eax
        shl eax, 4
        add ecx, eax
        fld dword ptr ds : [ecx]
        add edx, eax
        fadd dword ptr ds : [edx]
        fld dword ptr ds : [ecx+4]
        fadd dword ptr ds : [edx+4]
        fld dword ptr ds : [ecx+8]
        fadd dword ptr ds : [edx+8]
        fstp dword ptr ss : [ebp-0x8C]
        fld dword ptr ds : [ecx+0xC]
        lea ecx, ds:[eax+esi]
        fadd dword ptr ds : [edx+0xC]
        fstp dword ptr ss : [ebp-0x88]
        fld st(1)
        fadd dword ptr ds : [ecx]
        fstp dword ptr ss : [ebp-0xB4]
        fadd dword ptr ds : [ecx+4]
        fstp st(1)
        fld dword ptr ss : [ebp-0x8C]
        fadd dword ptr ds : [ecx+8]
        fld dword ptr ss : [ebp-0x88]
        fadd dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [ebp-0x40]
        add ecx, eax
        fstp dword ptr ss : [ebp-0xA8]
        fld dword ptr ss : [ebp-0xB4]
        fadd dword ptr ds : [ecx]
        fstp dword ptr ss : [ebp-0x84]
        fld st(1)
        fadd dword ptr ds : [ecx+4]
        fstp dword ptr ss : [ebp-0x80]
        fadd dword ptr ds : [ecx+8]
        fstp st(1)
        fld dword ptr ss : [ebp-0xA8]
        fadd dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [ebp-0x1C]
        fld dword ptr ss : [ebp-0x84]
        add ecx, eax
        fadd dword ptr ds : [ecx]
        fstp dword ptr ss : [ebp-0x54]
        fld dword ptr ss : [ebp-0x80]
        fadd dword ptr ds : [ecx+4]
        fstp dword ptr ss : [ebp-0x50]
        fld st(1)
        fadd dword ptr ds : [ecx+8]
        fstp dword ptr ss : [ebp-0x4C]
        fadd dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [ebp-0x44]
        add ecx, eax
        fstp st(1)
        fld dword ptr ss : [ebp-0x54]
        fadd dword ptr ds : [ecx]
        fld dword ptr ss : [ebp-0x50]
        fadd dword ptr ds : [ecx+4]
        fstp dword ptr ss : [ebp-0x60]
        fld dword ptr ss : [ebp-0x4C]
        fadd dword ptr ds : [ecx+8]
        fstp dword ptr ss : [ebp-0x5C]
        fld st(1)
        fadd dword ptr ds : [ecx+0xC]
        fstp dword ptr ss : [ebp-0x58]
        mov ecx, dword ptr ss : [ebp-0x28]
        add ecx, eax
        fadd dword ptr ds : [ecx]
        mov edi, dword ptr ss : [ebp-0x34]
        add dword ptr ss : [ebp-0x34], 0x10
        lea esi, ss:[ebp-0x74]
        fstp st(1)
        fld dword ptr ss : [ebp-0x60]
        fadd dword ptr ds : [ecx+4]
        fld dword ptr ss : [ebp-0x5C]
        fadd dword ptr ds : [ecx+8]
        fstp dword ptr ss : [ebp-0x9C]
        fld dword ptr ss : [ebp-0x58]
        fadd dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [ebp-0x14]
        add eax, ecx
        inc dword ptr ss : [ebp-0x2C]
        fstp dword ptr ss : [ebp-0x98]
        fld st(1)
        mov ecx, dword ptr ss : [ebp-0x2C]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [ebp-0xC4]
        fadd dword ptr ds : [eax+4]
        fstp st(1)
        fld dword ptr ss : [ebp-0x9C]
        fadd dword ptr ds : [eax+8]
        fld dword ptr ss : [ebp-0x98]
        fadd dword ptr ds : [eax+0xC]
        fstp dword ptr ss : [ebp-0xB8]
        fld dword ptr ss : [ebp-0xC4]
        fmul st, st(3)
        fstp dword ptr ss : [ebp-0x74]
        fld st(1)
        fmul st, st(3)
        fstp dword ptr ss : [ebp-0x70]
        fmul st, st(2)
        fstp dword ptr ss : [ebp-0x6C]
        fstp st(0)
        fld dword ptr ss : [ebp-0xB8]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0x68]
        movsd 
        movsd 
        movsd 
        movsd 
        mov eax, dword ptr ds : [ebx+4]
        cmp ecx, dword ptr ds : [eax+0x1058]
        mov esi, dword ptr ss : [ebp-0x30]
        jb public_6d3586f
        fstp st(0)
        public_6d359df : nop
        push dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ds : [ebx+4]
        push dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ds : [ecx]
        push dword ptr ss : [ebp-0x10]
        call dword ptr ds : [eax+8]
        inc dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [ebp-0x10]
        cmp ecx, dword ptr ds : [eax+0x105C]
        jb public_6d357ed
        public_6d35a05 : nop
        inc dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [ebp-0x24]
        cmp ecx, dword ptr ds : [eax+0x1060]
        jb public_6d357dc
        public_6d35a1a : nop
        push dword ptr ss : [ebp-0x38]
        call public_6d2f249
        pop ecx
        xor esi, esi
        public_6d35a25 : nop
        push dword ptr ss : [ebp-0x20]
        call public_6d2f249
        pop ecx
        mov eax, esi
        public_6d35a30 : nop
        pop edi
        pop esi
        public_6d35a32 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        pop ebx
        mov dword ptr fs : [0], ecx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d355ad)
    }
}

#undef public_6d355d0
#undef public_6d355f4
#undef public_6d355fe
#undef public_6d3561d
#undef public_6d3564d
#undef public_6d35661
#undef public_6d35675
#undef public_6d356ac
#undef public_6d356b0
#undef public_6d356c4
#undef public_6d35700
#undef public_6d35702
#undef public_6d35728
#undef public_6d35754
#undef public_6d35756
#undef public_6d35790
#undef public_6d357a0
#undef public_6d357b0
#undef public_6d357c2
#undef public_6d357dc
#undef public_6d357ed
#undef public_6d3581a
#undef public_6d35832
#undef public_6d3584f
#undef public_6d3586f
#undef public_6d359df
#undef public_6d35a05
#undef public_6d35a1a
#undef public_6d35a25
#undef public_6d35a30
#undef public_6d35a32
