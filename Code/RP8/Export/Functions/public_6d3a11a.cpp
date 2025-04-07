#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d3a14e _public_6d3a14e
#define public_6d3a166 _public_6d3a166
#define public_6d3a190 _public_6d3a190
#define public_6d3a1a8 _public_6d3a1a8

PROC_DECLARE(0x6d3a11a, internal_6d3a11a, public_6d3a11a);
extern "C" NAKED register_t __cdecl internal_6d3a11a()
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
        push esi
        lea esi, ds:[eax+edx*4]
        cmp eax, esi
        mov edx, dword ptr ss : [ebp+0x10]
        jae public_6d3a190
        fld dword ptr ds : [public_6d5f62c]
        push edi
        public_6d3a14e : nop
        mov edi, dword ptr ds : [eax]
        and edi, 0xFFFF
        test edi, edi
        mov dword ptr ss : [ebp+0x10], edi
        fild dword ptr ss : [ebp+0x10]
        jge public_6d3a166
        fadd dword ptr ds : [public_6d5f200]
        public_6d3a166 : nop
        fmul st, st(1)
        add eax, 4
        fstp dword ptr ds : [edx]
        movzx edi, word ptr ds : [eax-2]
        mov dword ptr ss : [ebp+0x10], edi
        add edx, 0x10
        cmp eax, esi
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx-0xC]
        fld1 
        fstp dword ptr ds : [edx-8]
        fld1 
        fstp dword ptr ds : [edx-4]
        jb public_6d3a14e
        fstp st(0)
        pop edi
        public_6d3a190 : nop
        cmp dword ptr ds : [ecx+0x10], 0
        pop esi
        je public_6d3a1a8
        mov eax, dword ptr ds : [ecx+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        call public_6d37e98
        public_6d3a1a8 : nop
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d3a11a)
    }
}

#undef public_6d3a14e
#undef public_6d3a166
#undef public_6d3a190
#undef public_6d3a1a8
