#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d3a2f6 _public_6d3a2f6
#define public_6d3a353 _public_6d3a353
#define public_6d3a36c _public_6d3a36c

PROC_DECLARE(0x6d3a2c0, internal_6d3a2c0, public_6d3a2c0);
extern "C" NAKED register_t __cdecl internal_6d3a2c0()
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
        jae public_6d3a353
        fld dword ptr ds : [public_6d5f630]
        public_6d3a2f6 : nop
        xor ecx, ecx
        mov cl, byte ptr ds : [eax]
        shr cl, 5
        and ecx, 7
        mov dword ptr ss : [ebp+0x10], ecx
        fild dword ptr ss : [ebp+0x10]
        xor ecx, ecx
        fmul st, st(1)
        fstp dword ptr ds : [edx]
        mov cl, byte ptr ds : [eax]
        shr cl, 2
        add edx, 0x10
        and ecx, 7
        mov dword ptr ss : [ebp+0x10], ecx
        fild dword ptr ss : [ebp+0x10]
        xor ecx, ecx
        fmul st, st(1)
        fstp dword ptr ds : [edx-0xC]
        mov cl, byte ptr ds : [eax]
        and ecx, 3
        mov dword ptr ss : [ebp+0x10], ecx
        fild dword ptr ss : [ebp+0x10]
        inc eax
        inc eax
        cmp eax, edi
        fmul dword ptr ds : [public_6d5f624]
        fstp dword ptr ds : [edx-8]
        movzx ecx, byte ptr ds : [eax-1]
        mov dword ptr ss : [ebp+0x10], ecx
        fild dword ptr ss : [ebp+0x10]
        fmul dword ptr ds : [public_6d5f5cc]
        fstp dword ptr ds : [edx-4]
        jb public_6d3a2f6
        fstp st(0)
        public_6d3a353 : nop
        cmp dword ptr ds : [esi+0x10], 0
        je public_6d3a36c
        mov eax, dword ptr ds : [esi+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        mov ecx, esi
        call public_6d37e98
        public_6d3a36c : nop
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d3a2c0)
    }
}

#undef public_6d3a2f6
#undef public_6d3a353
#undef public_6d3a36c
