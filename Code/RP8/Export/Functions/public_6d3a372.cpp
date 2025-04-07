#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d3a3a8 _public_6d3a3a8
#define public_6d3a3f2 _public_6d3a3f2
#define public_6d3a40b _public_6d3a40b

PROC_DECLARE(0x6d3a372, internal_6d3a372, public_6d3a372);
extern "C" NAKED register_t __cdecl internal_6d3a372()
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
        mov ecx, dword ptr ds : [esi+0x1058]
        push edi
        lea edi, ds:[eax+ecx*2]
        cmp eax, edi
        jae public_6d3a3f2
        fld dword ptr ds : [public_6d5f620]
        public_6d3a3a8 : nop
        mov cl, byte ptr ds : [eax+1]
        and cl, 0xF
        movzx ecx, cl
        mov dword ptr ss : [ebp+0x10], ecx
        xor ecx, ecx
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx]
        mov cl, byte ptr ds : [eax]
        shr cl, 4
        add edx, 0x10
        and ecx, 0xF
        mov dword ptr ss : [ebp+0x10], ecx
        fild dword ptr ss : [ebp+0x10]
        xor ecx, ecx
        fmul st, st(1)
        fstp dword ptr ds : [edx-0xC]
        mov cl, byte ptr ds : [eax]
        and ecx, 0xF
        mov dword ptr ss : [ebp+0x10], ecx
        fild dword ptr ss : [ebp+0x10]
        inc eax
        inc eax
        cmp eax, edi
        fmul st, st(1)
        fstp dword ptr ds : [edx-8]
        fld1 
        fstp dword ptr ds : [edx-4]
        jb public_6d3a3a8
        fstp st(0)
        public_6d3a3f2 : nop
        cmp dword ptr ds : [esi+0x10], 0
        je public_6d3a40b
        mov eax, dword ptr ds : [esi+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        mov ecx, esi
        call public_6d37e98
        public_6d3a40b : nop
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d3a372)
    }
}

#undef public_6d3a3a8
#undef public_6d3a3f2
#undef public_6d3a40b
