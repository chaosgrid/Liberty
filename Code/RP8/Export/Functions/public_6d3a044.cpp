#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d3a082 _public_6d3a082
#define public_6d3a096 _public_6d3a096
#define public_6d3a0b1 _public_6d3a0b1
#define public_6d3a0cd _public_6d3a0cd
#define public_6d3a0e7 _public_6d3a0e7
#define public_6d3a0fe _public_6d3a0fe
#define public_6d3a116 _public_6d3a116

PROC_DECLARE(0x6d3a044, internal_6d3a044, public_6d3a044);
extern "C" NAKED register_t __cdecl internal_6d3a044()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ds : [ecx+0x1050]
        imul eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x1054]
        imul edx, dword ptr ss : [ebp+0xC]
        add eax, edx
        add eax, dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ds : [ecx+0x1058]
        push edi
        lea edi, ds:[eax+edx*4]
        cmp eax, edi
        mov edx, dword ptr ss : [ebp+0x10]
        jae public_6d3a0fe
        fld dword ptr ds : [public_6d5f628]
        push ebx
        push esi
        mov esi, 0x3FF
        public_6d3a082 : nop
        mov ebx, dword ptr ds : [eax]
        and ebx, esi
        test ebx, ebx
        mov dword ptr ss : [ebp+0x10], ebx
        fild dword ptr ss : [ebp+0x10]
        jge public_6d3a096
        fadd dword ptr ds : [public_6d5f200]
        public_6d3a096 : nop
        fmul st, st(1)
        fstp dword ptr ds : [edx]
        mov ebx, dword ptr ds : [eax]
        shr ebx, 0xA
        and ebx, esi
        test ebx, ebx
        mov dword ptr ss : [ebp+0x10], ebx
        fild dword ptr ss : [ebp+0x10]
        jge public_6d3a0b1
        fadd dword ptr ds : [public_6d5f200]
        public_6d3a0b1 : nop
        fmul st, st(1)
        fstp dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [eax]
        shr ebx, 0x14
        and ebx, esi
        test ebx, ebx
        mov dword ptr ss : [ebp+0x10], ebx
        fild dword ptr ss : [ebp+0x10]
        jge public_6d3a0cd
        fadd dword ptr ds : [public_6d5f200]
        public_6d3a0cd : nop
        fmul st, st(1)
        fstp dword ptr ds : [edx+8]
        mov ebx, dword ptr ds : [eax]
        shr ebx, 0x1E
        test ebx, ebx
        mov dword ptr ss : [ebp+0x10], ebx
        fild dword ptr ss : [ebp+0x10]
        jge public_6d3a0e7
        fadd dword ptr ds : [public_6d5f200]
        public_6d3a0e7 : nop
        fmul dword ptr ds : [public_6d5f624]
        add eax, 4
        add edx, 0x10
        cmp eax, edi
        fstp dword ptr ds : [edx-4]
        jb public_6d3a082
        pop esi
        fstp st(0)
        pop ebx
        public_6d3a0fe : nop
        cmp dword ptr ds : [ecx+0x10], 0
        pop edi
        je public_6d3a116
        mov eax, dword ptr ds : [ecx+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        call public_6d37e98
        public_6d3a116 : nop
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d3a044)
    }
}

#undef public_6d3a082
#undef public_6d3a096
#undef public_6d3a0b1
#undef public_6d3a0cd
#undef public_6d3a0e7
#undef public_6d3a0fe
#undef public_6d3a116
