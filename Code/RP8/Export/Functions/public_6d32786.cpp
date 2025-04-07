#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f49c);
CLANG_FORWARD_PROC_SYMBOL(public_6d30c59);
CLANG_FORWARD_PROC_SYMBOL(public_6d32786);

#define public_6d327b1 _public_6d327b1
#define public_6d327bb _public_6d327bb
#define public_6d327e2 _public_6d327e2
#define public_6d327e4 _public_6d327e4
#define public_6d327ee _public_6d327ee
#define public_6d32805 _public_6d32805
#define public_6d32810 _public_6d32810
#define public_6d3281d _public_6d3281d
#define public_6d3282f _public_6d3282f
#define public_6d3287b _public_6d3287b
#define public_6d32887 _public_6d32887
#define public_6d32893 _public_6d32893
#define public_6d328a1 _public_6d328a1
#define public_6d328af _public_6d328af
#define public_6d328bb _public_6d328bb
#define public_6d328be _public_6d328be
#define public_6d328cc _public_6d328cc
#define public_6d328cf _public_6d328cf
#define public_6d328f5 _public_6d328f5
#define public_6d32905 _public_6d32905
#define public_6d32927 _public_6d32927
#define public_6d3292b _public_6d3292b
#define public_6d3293e _public_6d3293e
#define public_6d32941 _public_6d32941
#define public_6d3296e _public_6d3296e
#define public_6d32970 _public_6d32970
#define public_6d3297e _public_6d3297e
#define public_6d3298f _public_6d3298f
#define public_6d3299a _public_6d3299a
#define public_6d329af _public_6d329af
#define public_6d329b1 _public_6d329b1
#define public_6d329be _public_6d329be
#define public_6d32a00 _public_6d32a00
#define public_6d32a08 _public_6d32a08
#define public_6d32a0f _public_6d32a0f
#define public_6d32a1a _public_6d32a1a
#define public_6d32a23 _public_6d32a23
#define public_6d32a2c _public_6d32a2c
#define public_6d32a76 _public_6d32a76
#define public_6d32a78 _public_6d32a78
#define public_6d32a80 _public_6d32a80
#define public_6d32a82 _public_6d32a82
#define public_6d32a8f _public_6d32a8f
#define public_6d32a92 _public_6d32a92
#define public_6d32aa1 _public_6d32aa1
#define public_6d32ab0 _public_6d32ab0
#define public_6d32ab4 _public_6d32ab4
#define public_6d32abb _public_6d32abb
#define public_6d32ac0 _public_6d32ac0
#define public_6d32ac1 _public_6d32ac1

PROC_DECLARE(0x6d32786, internal_6d32786, public_6d32786);
extern "C" NAKED register_t __cdecl internal_6d32786()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x2C
        cmp dword ptr ss : [ebp+0xC], 4
        push ebx
        mov ebx, ecx
        push edi
        mov dword ptr ss : [ebp-8], ebx
        jb public_6d327b1
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax], 0x20534444
        jne public_6d327b1
        sub dword ptr ss : [ebp+0xC], 4
        add eax, 4
        cmp dword ptr ss : [ebp+0xC], 0x7C
        jae public_6d327bb
        public_6d327b1 : nop
        mov eax, 0x80004005
        jmp public_6d32ac1
        public_6d327bb : nop
        sub dword ptr ss : [ebp+0xC], 0x7C
        push esi
        mov esi, eax
        add eax, 0x7C
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0xC], eax
        mov eax, dword ptr ds : [esi+8]
        xor edx, edx
        mov dword ptr ds : [ebx+0x10], eax
        inc edx
        test byte ptr ds : [esi+6], 0x80
        je public_6d327e2
        mov eax, dword ptr ds : [esi+0x14]
        jmp public_6d327e4
        public_6d327e2 : nop
        mov eax, edx
        public_6d327e4 : nop
        test eax, eax
        mov dword ptr ds : [ebx+0x14], eax
        jne public_6d327ee
        mov dword ptr ds : [ebx+0x14], edx
        public_6d327ee : nop
        mov eax, dword ptr ds : [esi+0x6C]
        mov ecx, 0xFC00
        and eax, ecx
        cmp eax, ecx
        jne public_6d32805
        mov dword ptr ss : [ebp-0x14], 6
        jmp public_6d32810
        public_6d32805 : nop
        test eax, eax
        jne public_6d32abb
        mov dword ptr ss : [ebp-0x14], edx
        public_6d32810 : nop
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        mov dword ptr ss : [ebp-0x20], eax
        jne public_6d3281d
        mov dword ptr ss : [ebp-0x20], edx
        public_6d3281d : nop
        cmp dword ptr ds : [public_6d6c470], 0
        mov edi, offset public_6d6c470
        je public_6d328cf
        public_6d3282f : nop
        cmp dword ptr ds : [esi+0x48], 0x20
        jne public_6d328be
        mov eax, dword ptr ds : [edi+8]
        cmp dword ptr ds : [esi+0x4C], eax
        jne public_6d328be
        mov ebx, eax
        and ebx, 0xC4440
        mov dword ptr ss : [ebp+8], ebx
        mov ebx, eax
        and ebx, 0xC4040
        mov dword ptr ss : [ebp-0x28], ebx
        mov ecx, eax
        mov edx, eax
        mov ebx, eax
        and ecx, 0xC4462
        and edx, 0xE4040
        and ebx, 0x80003
        test al, 4
        je public_6d3287b
        mov eax, dword ptr ds : [esi+0x50]
        cmp eax, dword ptr ds : [edi+0xC]
        jne public_6d328bb
        public_6d3287b : nop
        test ecx, ecx
        je public_6d32887
        mov eax, dword ptr ds : [esi+0x54]
        cmp eax, dword ptr ds : [edi+0x10]
        jne public_6d328bb
        public_6d32887 : nop
        test edx, edx
        je public_6d32893
        mov eax, dword ptr ds : [esi+0x58]
        cmp eax, dword ptr ds : [edi+0x14]
        jne public_6d328bb
        public_6d32893 : nop
        cmp dword ptr ss : [ebp+8], 0
        je public_6d328a1
        mov eax, dword ptr ds : [esi+0x5C]
        cmp eax, dword ptr ds : [edi+0x18]
        jne public_6d328bb
        public_6d328a1 : nop
        cmp dword ptr ss : [ebp-0x28], 0
        je public_6d328af
        mov eax, dword ptr ds : [esi+0x60]
        cmp eax, dword ptr ds : [edi+0x1C]
        jne public_6d328bb
        public_6d328af : nop
        test ebx, ebx
        je public_6d328cc
        mov eax, dword ptr ds : [esi+0x64]
        cmp eax, dword ptr ds : [edi+0x20]
        je public_6d328cc
        public_6d328bb : nop
        mov ebx, dword ptr ss : [ebp-8]
        public_6d328be : nop
        add edi, 0x24
        cmp dword ptr ds : [edi], 0
        jne public_6d3282f
        jmp public_6d328cf
        public_6d328cc : nop
        mov ebx, dword ptr ss : [ebp-8]
        public_6d328cf : nop
        mov edi, dword ptr ds : [edi]
        test edi, edi
        mov dword ptr ss : [ebp-0x24], edi
        je public_6d32abb
        push edi
        call public_6d2f49c
        test byte ptr ds : [esi+6], 0x80
        pop ecx
        mov dword ptr ss : [ebp-0x2C], eax
        je public_6d328f5
        mov dword ptr ds : [ebx+0x44], 4
        jmp public_6d32905
        public_6d328f5 : nop
        xor ecx, ecx
        cmp dword ptr ss : [ebp-0x14], 6
        sete cl
        lea ecx, ds:[ecx+ecx+3]
        mov dword ptr ds : [ebx+0x44], ecx
        public_6d32905 : nop
        cmp dword ptr ds : [eax+4], 1
        jne public_6d32927
        mov eax, 0x400
        cmp dword ptr ss : [ebp+0xC], eax
        jb public_6d32abb
        mov ecx, dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp-4], eax
        sub dword ptr ss : [ebp+0xC], eax
        mov dword ptr ss : [ebp-0x28], ecx
        jmp public_6d3292b
        public_6d32927 : nop
        and dword ptr ss : [ebp-0x28], 0
        public_6d3292b : nop
        and dword ptr ss : [ebp-0x10], 0
        cmp dword ptr ss : [ebp-0x14], 0
        jbe public_6d32ab0
        mov esi, dword ptr ss : [ebp+0xC]
        jmp public_6d32941
        public_6d3293e : nop
        mov ebx, dword ptr ss : [ebp-8]
        public_6d32941 : nop
        cmp dword ptr ss : [ebp-0x10], 0
        mov eax, dword ptr ss : [ebp-8]
        mov edi, dword ptr ds : [ebx+0xC]
        mov ebx, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [ebp-0x1C], ebx
        mov dword ptr ss : [ebp+8], ecx
        je public_6d3297e
        push 0x54
        call public_6d2f2a0
        test eax, eax
        pop ecx
        je public_6d3296e
        mov ecx, eax
        call public_6d30c59
        jmp public_6d32970
        public_6d3296e : nop
        xor eax, eax
        public_6d32970 : nop
        test eax, eax
        je public_6d32ab4
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [ecx+0x50], eax
        public_6d3297e : nop
        and dword ptr ss : [ebp-0xC], 0
        cmp dword ptr ss : [ebp-0x20], 0
        mov dword ptr ss : [ebp-0x18], eax
        jbe public_6d32aa1
        public_6d3298f : nop
        cmp dword ptr ss : [ebp-0xC], 0
        jne public_6d3299a
        mov esi, dword ptr ss : [ebp-0x18]
        jmp public_6d329be
        public_6d3299a : nop
        push 0x54
        call public_6d2f2a0
        test eax, eax
        pop ecx
        je public_6d329af
        mov ecx, eax
        call public_6d30c59
        jmp public_6d329b1
        public_6d329af : nop
        xor eax, eax
        public_6d329b1 : nop
        test eax, eax
        je public_6d32ab4
        mov dword ptr ds : [esi+0x4C], eax
        mov esi, eax
        public_6d329be : nop
        mov eax, dword ptr ss : [ebp-0x24]
        cmp eax, 0x31545844
        je public_6d32a1a
        cmp eax, 0x32545844
        je public_6d32a0f
        cmp eax, 0x32595559
        je public_6d32a00
        cmp eax, 0x33545844
        je public_6d32a0f
        cmp eax, 0x34545844
        je public_6d32a0f
        cmp eax, 0x35545844
        je public_6d32a0f
        cmp eax, 0x59565955
        je public_6d32a00
        mov eax, dword ptr ss : [ebp-0x2C]
        mov eax, dword ptr ds : [eax+8]
        shr eax, 3
        imul eax, edi
        jmp public_6d32a08
        public_6d32a00 : nop
        lea eax, ds:[edi+1]
        shr eax, 1
        shl eax, 2
        public_6d32a08 : nop
        mov ecx, eax
        imul ecx, ebx
        jmp public_6d32a2c
        public_6d32a0f : nop
        lea eax, ds:[edi+3]
        shr eax, 2
        shl eax, 4
        jmp public_6d32a23
        public_6d32a1a : nop
        lea eax, ds:[edi+3]
        shr eax, 2
        shl eax, 3
        public_6d32a23 : nop
        lea ecx, ds:[ebx+3]
        shr ecx, 2
        imul ecx, eax
        public_6d32a2c : nop
        mov ebx, dword ptr ss : [ebp-0x24]
        and dword ptr ds : [esi+0x38], 0
        and dword ptr ds : [esi+0x3C], 0
        mov edx, ecx
        imul edx, dword ptr ss : [ebp+8]
        cmp dword ptr ss : [ebp+0xC], edx
        mov dword ptr ds : [esi], ebx
        mov ebx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [esi+0x30], eax
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ds : [esi+0x14], eax
        mov eax, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [esi+0x34], ecx
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+8], eax
        jb public_6d32abb
        add dword ptr ss : [ebp-4], edx
        sub dword ptr ss : [ebp+0xC], edx
        xor eax, eax
        inc eax
        cmp edi, eax
        jne public_6d32a76
        mov edi, eax
        jmp public_6d32a78
        public_6d32a76 : nop
        shr edi, 1
        public_6d32a78 : nop
        cmp ebx, eax
        jne public_6d32a80
        mov ebx, eax
        jmp public_6d32a82
        public_6d32a80 : nop
        shr ebx, 1
        public_6d32a82 : nop
        cmp dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp-0x1C], ebx
        jne public_6d32a8f
        mov dword ptr ss : [ebp+8], eax
        jmp public_6d32a92
        public_6d32a8f : nop
        shr dword ptr ss : [ebp+8], 1
        public_6d32a92 : nop
        inc dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp-0xC]
        cmp eax, dword ptr ss : [ebp-0x20]
        jb public_6d3298f
        public_6d32aa1 : nop
        inc dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp-0x10]
        cmp eax, dword ptr ss : [ebp-0x14]
        jb public_6d3293e
        public_6d32ab0 : nop
        xor eax, eax
        jmp public_6d32ac0
        public_6d32ab4 : nop
        mov eax, 0x8007000E
        jmp public_6d32ac0
        public_6d32abb : nop
        mov eax, 0x80004005
        public_6d32ac0 : nop
        pop esi
        public_6d32ac1 : nop
        pop edi
        pop ebx
        leave 
        ret 8
        UNREACHABLE_TRAP(0x6d32786)
    }
}

#undef public_6d327b1
#undef public_6d327bb
#undef public_6d327e2
#undef public_6d327e4
#undef public_6d327ee
#undef public_6d32805
#undef public_6d32810
#undef public_6d3281d
#undef public_6d3282f
#undef public_6d3287b
#undef public_6d32887
#undef public_6d32893
#undef public_6d328a1
#undef public_6d328af
#undef public_6d328bb
#undef public_6d328be
#undef public_6d328cc
#undef public_6d328cf
#undef public_6d328f5
#undef public_6d32905
#undef public_6d32927
#undef public_6d3292b
#undef public_6d3293e
#undef public_6d32941
#undef public_6d3296e
#undef public_6d32970
#undef public_6d3297e
#undef public_6d3298f
#undef public_6d3299a
#undef public_6d329af
#undef public_6d329b1
#undef public_6d329be
#undef public_6d32a00
#undef public_6d32a08
#undef public_6d32a0f
#undef public_6d32a1a
#undef public_6d32a23
#undef public_6d32a2c
#undef public_6d32a76
#undef public_6d32a78
#undef public_6d32a80
#undef public_6d32a82
#undef public_6d32a8f
#undef public_6d32a92
#undef public_6d32aa1
#undef public_6d32ab0
#undef public_6d32ab4
#undef public_6d32abb
#undef public_6d32ac0
#undef public_6d32ac1
