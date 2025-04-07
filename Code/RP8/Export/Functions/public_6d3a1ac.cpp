#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d3a1e1 _public_6d3a1e1
#define public_6d3a22f _public_6d3a22f
#define public_6d3a248 _public_6d3a248

PROC_DECLARE(0x6d3a1ac, internal_6d3a1ac, public_6d3a1ac);
extern "C" NAKED register_t __cdecl internal_6d3a1ac()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov edx, dword ptr ss : [ebp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x1050]
        imul eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [esi+0x1054]
        imul ecx, dword ptr ss : [ebp+0xC]
        add eax, ecx
        add eax, dword ptr ds : [esi+0x18]
        push edi
        mov edi, dword ptr ds : [esi+0x1058]
        add edi, eax
        cmp eax, edi
        jae public_6d3a22f
        fld dword ptr ds : [public_6d5f630]
        public_6d3a1e1 : nop
        mov cl, byte ptr ds : [eax]
        shr cl, 5
        movzx ecx, cl
        mov dword ptr ss : [ebp+0x10], ecx
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx]
        mov cl, byte ptr ds : [eax]
        shr cl, 2
        and cl, 7
        movzx ecx, cl
        mov dword ptr ss : [ebp+0x10], ecx
        add edx, 0x10
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx-0xC]
        mov cl, byte ptr ds : [eax]
        and cl, 3
        movzx ecx, cl
        mov dword ptr ss : [ebp+0x10], ecx
        inc eax
        cmp eax, edi
        fild dword ptr ss : [ebp+0x10]
        fmul dword ptr ds : [public_6d5f624]
        fstp dword ptr ds : [edx-8]
        fld1 
        fstp dword ptr ds : [edx-4]
        jb public_6d3a1e1
        fstp st(0)
        public_6d3a22f : nop
        cmp dword ptr ds : [esi+0x10], 0
        je public_6d3a248
        mov eax, dword ptr ds : [esi+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        mov ecx, esi
        call public_6d37e98
        public_6d3a248 : nop
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d3a1ac)
    }
}

#undef public_6d3a1e1
#undef public_6d3a22f
#undef public_6d3a248
