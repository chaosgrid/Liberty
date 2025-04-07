#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d3a628 _public_6d3a628
#define public_6d3a65d _public_6d3a65d
#define public_6d3a676 _public_6d3a676

PROC_DECLARE(0x6d3a5f3, internal_6d3a5f3, public_6d3a5f3);
extern "C" NAKED register_t __cdecl internal_6d3a5f3()
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
        jae public_6d3a65d
        fld dword ptr ds : [public_6d5f620]
        public_6d3a628 : nop
        mov cl, byte ptr ds : [eax]
        and cl, 0xF
        movzx ecx, cl
        mov dword ptr ss : [ebp+0x10], ecx
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fst dword ptr ds : [edx+8]
        fst dword ptr ds : [edx+4]
        fstp dword ptr ds : [edx]
        mov cl, byte ptr ds : [eax]
        shr cl, 4
        movzx ecx, cl
        mov dword ptr ss : [ebp+0x10], ecx
        inc eax
        add edx, 0x10
        cmp eax, edi
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx-4]
        jb public_6d3a628
        fstp st(0)
        public_6d3a65d : nop
        cmp dword ptr ds : [esi+0x10], 0
        je public_6d3a676
        mov eax, dword ptr ds : [esi+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        mov ecx, esi
        call public_6d37e98
        public_6d3a676 : nop
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d3a5f3)
    }
}

#undef public_6d3a628
#undef public_6d3a65d
#undef public_6d3a676
