#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f87d);
CLANG_FORWARD_PROC_SYMBOL(public_6d2fc9d);
CLANG_FORWARD_PROC_SYMBOL(public_6d35a3f);
CLANG_FORWARD_PROC_SYMBOL(public_6d35f25);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd8c);
CLANG_FORWARD_JUMP_SYMBOL(public_6d5d0b1);

#define public_6d35f54 _public_6d35f54
#define public_6d3601f _public_6d3601f
#define public_6d36026 _public_6d36026
#define public_6d36069 _public_6d36069
#define public_6d3606b _public_6d3606b
#define public_6d360c1 _public_6d360c1
#define public_6d360e0 _public_6d360e0
#define public_6d3611d _public_6d3611d
#define public_6d3613b _public_6d3613b
#define public_6d36168 _public_6d36168
#define public_6d36184 _public_6d36184
#define public_6d365cf _public_6d365cf
#define public_6d365f8 _public_6d365f8
#define public_6d36611 _public_6d36611
#define public_6d36615 _public_6d36615
#define public_6d3661a _public_6d3661a
#define public_6d36649 _public_6d36649

PROC_DECLARE(0x6d35f25, internal_6d35f25, public_6d35f25);
extern "C" NAKED register_t __cdecl internal_6d35f25()
{
    __asm
    {
        mov eax, public_6d5d0b1
        call public_6d5cd8c
        sub esp, 0x198
        and dword ptr ss : [ebp-0x44], 0
        and dword ptr ss : [ebp-0x30], 0
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        cmp al, 3
        mov dword ptr ss : [ebp-0x54], esi
        je public_6d35f54
        mov eax, 0x80004005
        jmp public_6d36649
        public_6d35f54 : nop
        mov ecx, eax
        mov edx, eax
        shr ecx, 0x10
        shr eax, 0x12
        push ebx
        not ecx
        not eax
        and ecx, 1
        shr edx, 0x11
        and eax, 1
        push edi
        not edx
        mov dword ptr ss : [ebp-0x20], eax
        mov eax, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [eax+0x1058]
        push ecx
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [ecx+0x1058]
        and edx, 1
        mov dword ptr ss : [ebp-0x3C], edx
        call public_6d35a3f
        mov ecx, dword ptr ds : [esi]
        push dword ptr ss : [ebp-0x3C]
        mov edi, dword ptr ds : [ecx+0x105C]
        mov dword ptr ss : [ebp-0x48], eax
        mov eax, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [eax+0x105C]
        call public_6d35a3f
        mov ecx, dword ptr ds : [esi]
        push dword ptr ss : [ebp-0x20]
        mov edi, dword ptr ds : [ecx+0x1060]
        mov dword ptr ss : [ebp-0x4C], eax
        mov eax, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [eax+0x1060]
        call public_6d35a3f
        xor ebx, ebx
        add esp, 0xC
        cmp dword ptr ss : [ebp-0x48], ebx
        mov dword ptr ss : [ebp-0x3C], eax
        je public_6d36615
        cmp dword ptr ss : [ebp-0x4C], ebx
        je public_6d36615
        cmp eax, ebx
        je public_6d36615
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax+0x1058]
        mov eax, edi
        shl eax, 4
        push eax
        call public_6d2f2a0
        pop ecx
        mov dword ptr ss : [ebp-0x44], eax
        test eax, eax
        mov dword ptr ss : [ebp-4], ebx
        mov ebx, offset _public_6d2f87d
        je public_6d3601f
        push ebx
        push edi
        push 0x10
        push eax
        call public_6d2fc9d
        mov eax, dword ptr ss : [ebp-0x44]
        mov dword ptr ss : [ebp-0x34], eax
        jmp public_6d36026
        public_6d3601f : nop
        and dword ptr ss : [ebp-0x34], 0
        mov eax, dword ptr ss : [ebp-0x34]
        public_6d36026 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        test eax, eax
        mov dword ptr ss : [ebp-0x44], eax
        je public_6d36615
        mov eax, dword ptr ds : [esi]
        mov edi, dword ptr ds : [eax+0x1058]
        shl edi, 2
        mov eax, edi
        shl eax, 4
        push eax
        call public_6d2f2a0
        pop ecx
        mov dword ptr ss : [ebp-0x30], eax
        test eax, eax
        mov dword ptr ss : [ebp-4], 1
        je public_6d36069
        push ebx
        push edi
        push 0x10
        push eax
        call public_6d2fc9d
        mov eax, dword ptr ss : [ebp-0x30]
        jmp public_6d3606b
        public_6d36069 : nop
        xor eax, eax
        public_6d3606b : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        test eax, eax
        mov dword ptr ss : [ebp-0x30], eax
        je public_6d36615
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [ecx+0x1058]
        and dword ptr ss : [ebp-0x38], 0
        mov ecx, edi
        shl ecx, 4
        add ecx, eax
        mov dword ptr ss : [ebp-0x1C], ecx
        mov ecx, edi
        lea edi, ds:[edi+edi*2]
        shl ecx, 5
        shl edi, 4
        add ecx, eax
        add edi, eax
        mov dword ptr ss : [ebp-0x28], eax
        mov eax, dword ptr ds : [esi+4]
        cmp dword ptr ds : [eax+0x1060], 0
        mov dword ptr ss : [ebp-0x40], ecx
        mov dword ptr ss : [ebp-0x2C], edi
        jbe public_6d36611
        mov ecx, dword ptr ss : [ebp-0x3C]
        add ecx, 8
        mov dword ptr ss : [ebp-0x10], ecx
        public_6d360c1 : nop
        and dword ptr ss : [ebp-0x24], 0
        or dword ptr ss : [ebp-0x18], 0xFFFFFFFF
        or dword ptr ss : [ebp-0x14], 0xFFFFFFFF
        cmp dword ptr ds : [eax+0x105C], 0
        jbe public_6d365f8
        mov ebx, dword ptr ss : [ebp-0x4C]
        add ebx, 8
        public_6d360e0 : nop
        mov eax, dword ptr ds : [ebx-8]
        and dword ptr ss : [ebp-0x20], 0
        cmp eax, dword ptr ss : [ebp-0x18]
        je public_6d3613b
        mov ecx, dword ptr ss : [ebp-0x14]
        cmp eax, ecx
        je public_6d3611d
        push dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ss : [ebp-0x10]
        push dword ptr ds : [edx-8]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [ebp-0x18], eax
        push dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        push dword ptr ss : [ebp-0x40]
        mov edx, dword ptr ss : [ebp-0x10]
        push dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi]
        push dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        jmp public_6d3613b
        public_6d3611d : nop
        mov eax, dword ptr ss : [ebp-0x28]
        or dword ptr ss : [ebp-0x14], 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x18], ecx
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0x1C], eax
        mov eax, dword ptr ss : [ebp-0x40]
        mov dword ptr ss : [ebp-0x40], edi
        mov dword ptr ss : [ebp-0x28], ecx
        mov dword ptr ss : [ebp-0x2C], eax
        mov edi, eax
        public_6d3613b : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp-0x14]
        je public_6d36168
        push dword ptr ss : [ebp-0x1C]
        mov edx, dword ptr ss : [ebp-0x10]
        push dword ptr ds : [edx-8]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [ebp-0x14], eax
        push dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push edi
        push dword ptr ds : [edx]
        push dword ptr ss : [ebp-0x14]
        call dword ptr ds : [eax+4]
        public_6d36168 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp dword ptr ds : [eax+0x1058], 0
        jbe public_6d365cf
        mov eax, dword ptr ss : [ebp-0x48]
        mov ecx, dword ptr ss : [ebp-0x34]
        add eax, 8
        mov dword ptr ss : [ebp-0x50], ecx
        public_6d36184 : nop
        mov ecx, dword ptr ds : [eax]
        fld dword ptr ds : [eax+4]
        fld st(0)
        shl ecx, 4
        lea edx, ds:[ecx+edi]
        fmul dword ptr ds : [edx]
        fstp dword ptr ss : [ebp-0x114]
        fld st(0)
        fmul dword ptr ds : [edx+4]
        fstp dword ptr ss : [ebp-0x110]
        fld st(0)
        fmul dword ptr ds : [edx+8]
        fstp dword ptr ss : [ebp-0x10C]
        fmul dword ptr ds : [edx+0xC]
        mov edx, dword ptr ds : [eax-8]
        fld dword ptr ds : [eax-4]
        shl edx, 4
        fld st(0)
        lea esi, ds:[edx+edi]
        fmul dword ptr ds : [esi]
        mov edi, dword ptr ss : [ebp-0x40]
        fld st(1)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ss : [ebp-0x60]
        fld st(1)
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ss : [ebp-0x5C]
        fld st(1)
        fmul dword ptr ds : [esi+0xC]
        lea esi, ds:[ecx+edi]
        fstp dword ptr ss : [ebp-0x58]
        fadd dword ptr ss : [ebp-0x114]
        fstp dword ptr ss : [ebp-0x94]
        fstp st(0)
        fld dword ptr ss : [ebp-0x60]
        fadd dword ptr ss : [ebp-0x110]
        fstp dword ptr ss : [ebp-0x90]
        fld dword ptr ss : [ebp-0x5C]
        fadd dword ptr ss : [ebp-0x10C]
        fstp dword ptr ss : [ebp-0x8C]
        fld dword ptr ss : [ebp-0x58]
        fadd st, st(1)
        fstp st(1)
        fld dword ptr ds : [ebx+4]
        fld dword ptr ss : [ebp-0x94]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0x174]
        fld dword ptr ss : [ebp-0x90]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0x170]
        fld dword ptr ss : [ebp-0x8C]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0x16C]
        fld st(1)
        fmul st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ds : [eax+4]
        fld st(0)
        fmul dword ptr ds : [esi]
        fstp dword ptr ss : [ebp-0x194]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ss : [ebp-0x190]
        fld st(0)
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ss : [ebp-0x18C]
        fmul dword ptr ds : [esi+0xC]
        lea esi, ds:[edx+edi]
        fld dword ptr ds : [eax-4]
        mov edi, dword ptr ss : [ebp-0x10]
        fld st(0)
        fmul dword ptr ds : [esi]
        fld st(1)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ss : [ebp-0xB0]
        fld st(1)
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ss : [ebp-0xAC]
        fld st(1)
        fmul dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [ebp-0xA8]
        fadd dword ptr ss : [ebp-0x194]
        fstp dword ptr ss : [ebp-0x134]
        fstp st(0)
        fld dword ptr ss : [ebp-0xB0]
        fadd dword ptr ss : [ebp-0x190]
        fstp dword ptr ss : [ebp-0x130]
        fld dword ptr ss : [ebp-0xAC]
        fadd dword ptr ss : [ebp-0x18C]
        fstp dword ptr ss : [ebp-0x12C]
        fld dword ptr ss : [ebp-0xA8]
        fadd st, st(1)
        fstp st(1)
        fld dword ptr ds : [ebx-4]
        fld dword ptr ss : [ebp-0x134]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0xD4]
        fld dword ptr ss : [ebp-0x130]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0xD0]
        fld dword ptr ss : [ebp-0x12C]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0xCC]
        fld st(1)
        fmul st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ss : [ebp-0xD4]
        fadd dword ptr ss : [ebp-0x174]
        fstp dword ptr ss : [ebp-0xF4]
        fld dword ptr ss : [ebp-0xD0]
        fadd dword ptr ss : [ebp-0x170]
        fstp dword ptr ss : [ebp-0xF0]
        fld dword ptr ss : [ebp-0xCC]
        fadd dword ptr ss : [ebp-0x16C]
        fstp dword ptr ss : [ebp-0xEC]
        fadd st, st(1)
        fstp st(1)
        fld dword ptr ds : [edi+4]
        fld dword ptr ss : [ebp-0xF4]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0x184]
        fld dword ptr ss : [ebp-0xF0]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0x180]
        fld dword ptr ss : [ebp-0xEC]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0x17C]
        fld st(1)
        fmul st, st(1)
        fstp st(2)
        fstp st(0)
        mov esi, dword ptr ss : [ebp-0x1C]
        fld dword ptr ds : [eax+4]
        add esi, ecx
        fld st(0)
        fmul dword ptr ds : [esi]
        fstp dword ptr ss : [ebp-0x154]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ss : [ebp-0x150]
        fld st(0)
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ss : [ebp-0x14C]
        fmul dword ptr ds : [esi+0xC]
        mov esi, dword ptr ss : [ebp-0x1C]
        fld dword ptr ds : [eax-4]
        add esi, edx
        fld st(0)
        fmul dword ptr ds : [esi]
        fld st(1)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ss : [ebp-0x70]
        fld st(1)
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ss : [ebp-0x6C]
        fld st(1)
        fmul dword ptr ds : [esi+0xC]
        mov esi, dword ptr ss : [ebp-0x28]
        add ecx, esi
        fstp dword ptr ss : [ebp-0x68]
        fadd dword ptr ss : [ebp-0x154]
        fstp dword ptr ss : [ebp-0x84]
        fstp st(0)
        fld dword ptr ss : [ebp-0x70]
        fadd dword ptr ss : [ebp-0x150]
        fstp dword ptr ss : [ebp-0x80]
        fld dword ptr ss : [ebp-0x6C]
        fadd dword ptr ss : [ebp-0x14C]
        fstp dword ptr ss : [ebp-0x7C]
        fld dword ptr ss : [ebp-0x68]
        fadd st, st(1)
        fstp st(1)
        fld dword ptr ds : [ebx+4]
        fld dword ptr ss : [ebp-0x84]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0x124]
        fld dword ptr ss : [ebp-0x80]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0x120]
        fld dword ptr ss : [ebp-0x7C]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0x11C]
        fld st(1)
        fmul st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ds : [eax+4]
        fld st(0)
        fmul dword ptr ds : [ecx]
        fstp dword ptr ss : [ebp-0xA4]
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ss : [ebp-0xA0]
        fld st(0)
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ss : [ebp-0x9C]
        fmul dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [eax-4]
        lea ecx, ds:[edx+esi]
        fld st(0)
        fmul dword ptr ds : [ecx]
        fld st(1)
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ss : [ebp-0xC0]
        fld st(1)
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ss : [ebp-0xBC]
        fld st(1)
        fmul dword ptr ds : [ecx+0xC]
        fstp dword ptr ss : [ebp-0xB8]
        fadd dword ptr ss : [ebp-0xA4]
        fstp dword ptr ss : [ebp-0xE4]
        fstp st(0)
        fld dword ptr ss : [ebp-0xC0]
        fadd dword ptr ss : [ebp-0xA0]
        fstp dword ptr ss : [ebp-0xE0]
        fld dword ptr ss : [ebp-0xBC]
        fadd dword ptr ss : [ebp-0x9C]
        fstp dword ptr ss : [ebp-0xDC]
        fld dword ptr ss : [ebp-0xB8]
        fadd st, st(1)
        fstp st(1)
        fld dword ptr ds : [ebx-4]
        fld dword ptr ss : [ebp-0xE4]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0x104]
        fld dword ptr ss : [ebp-0xE0]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0x100]
        fld dword ptr ss : [ebp-0xDC]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0xFC]
        fld st(1)
        fmul st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ss : [ebp-0x104]
        fadd dword ptr ss : [ebp-0x124]
        fstp dword ptr ss : [ebp-0x144]
        fld dword ptr ss : [ebp-0x100]
        fadd dword ptr ss : [ebp-0x120]
        fstp dword ptr ss : [ebp-0x140]
        fld dword ptr ss : [ebp-0xFC]
        fadd dword ptr ss : [ebp-0x11C]
        fstp dword ptr ss : [ebp-0x13C]
        fadd st, st(1)
        fstp st(1)
        fld dword ptr ds : [edi-4]
        fld dword ptr ss : [ebp-0x144]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0x164]
        fld dword ptr ss : [ebp-0x140]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0x160]
        fld dword ptr ss : [ebp-0x13C]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0x15C]
        fld st(1)
        fmul st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ss : [ebp-0x164]
        fadd dword ptr ss : [ebp-0x184]
        mov edi, dword ptr ss : [ebp-0x50]
        mov ecx, dword ptr ss : [ebp-0x54]
        add dword ptr ss : [ebp-0x50], 0x10
        fstp dword ptr ss : [ebp-0x1A4]
        lea esi, ss:[ebp-0x1A4]
        fld dword ptr ss : [ebp-0x160]
        add eax, 0x10
        fadd dword ptr ss : [ebp-0x180]
        inc dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ss : [ebp-0x20]
        fstp dword ptr ss : [ebp-0x1A0]
        fld dword ptr ss : [ebp-0x15C]
        fadd dword ptr ss : [ebp-0x17C]
        fstp dword ptr ss : [ebp-0x19C]
        fadd st, st(1)
        fstp dword ptr ss : [ebp-0x198]
        movsd 
        fstp st(0)
        movsd 
        movsd 
        movsd 
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+0x1058]
        mov edi, dword ptr ss : [ebp-0x2C]
        jb public_6d36184
        mov esi, dword ptr ss : [ebp-0x54]
        public_6d365cf : nop
        push dword ptr ss : [ebp-0x34]
        mov ecx, dword ptr ds : [esi+4]
        push dword ptr ss : [ebp-0x38]
        mov eax, dword ptr ds : [ecx]
        push dword ptr ss : [ebp-0x24]
        call dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi+4]
        add ebx, 0x10
        inc dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ss : [ebp-0x24]
        cmp ecx, dword ptr ds : [eax+0x105C]
        jb public_6d360e0
        public_6d365f8 : nop
        add dword ptr ss : [ebp-0x10], 0x10
        inc dword ptr ss : [ebp-0x38]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [ebp-0x38]
        cmp ecx, dword ptr ds : [eax+0x1060]
        jb public_6d360c1
        public_6d36611 : nop
        xor esi, esi
        jmp public_6d3661a
        public_6d36615 : nop
        mov esi, 0x8007000E
        public_6d3661a : nop
        push dword ptr ss : [ebp-0x48]
        call public_6d2f249
        push dword ptr ss : [ebp-0x4C]
        call public_6d2f249
        push dword ptr ss : [ebp-0x3C]
        call public_6d2f249
        push dword ptr ss : [ebp-0x44]
        call public_6d2f249
        push dword ptr ss : [ebp-0x30]
        call public_6d2f249
        add esp, 0x14
        pop edi
        mov eax, esi
        pop ebx
        public_6d36649 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        pop esi
        mov dword ptr fs : [0], ecx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d35f25)
    }
}

#undef public_6d35f54
#undef public_6d3601f
#undef public_6d36026
#undef public_6d36069
#undef public_6d3606b
#undef public_6d360c1
#undef public_6d360e0
#undef public_6d3611d
#undef public_6d3613b
#undef public_6d36168
#undef public_6d36184
#undef public_6d365cf
#undef public_6d365f8
#undef public_6d36611
#undef public_6d36615
#undef public_6d3661a
#undef public_6d36649
