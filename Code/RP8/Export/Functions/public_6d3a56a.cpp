#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d3a5a0 _public_6d3a5a0
#define public_6d3a5d4 _public_6d3a5d4
#define public_6d3a5ed _public_6d3a5ed

PROC_DECLARE(0x6d3a56a, internal_6d3a56a, public_6d3a56a);
extern "C" NAKED register_t __cdecl internal_6d3a56a()
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
        jae public_6d3a5d4
        fld dword ptr ds : [public_6d5f5cc]
        public_6d3a5a0 : nop
        xor ecx, ecx
        mov cl, byte ptr ds : [eax]
        and ecx, 0xFF
        mov dword ptr ss : [ebp+0x10], ecx
        fild dword ptr ss : [ebp+0x10]
        inc eax
        inc eax
        fmul st, st(1)
        fst dword ptr ds : [edx+8]
        fst dword ptr ds : [edx+4]
        fstp dword ptr ds : [edx]
        movzx ecx, byte ptr ds : [eax-1]
        mov dword ptr ss : [ebp+0x10], ecx
        add edx, 0x10
        cmp eax, edi
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx-4]
        jb public_6d3a5a0
        fstp st(0)
        public_6d3a5d4 : nop
        cmp dword ptr ds : [esi+0x10], 0
        je public_6d3a5ed
        mov eax, dword ptr ds : [esi+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        mov ecx, esi
        call public_6d37e98
        public_6d3a5ed : nop
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d3a56a)
    }
}

#undef public_6d3a5a0
#undef public_6d3a5d4
#undef public_6d3a5ed
