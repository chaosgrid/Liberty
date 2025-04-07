#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d39fcb _public_6d39fcb
#define public_6d3a025 _public_6d3a025
#define public_6d3a03e _public_6d3a03e

PROC_DECLARE(0x6d39f95, internal_6d39f95, public_6d39f95);
extern "C" NAKED register_t __cdecl internal_6d39f95()
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
        jae public_6d3a025
        fld dword ptr ds : [public_6d5f620]
        public_6d39fcb : nop
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
        fmul st, st(1)
        fstp dword ptr ds : [edx-8]
        mov cx, word ptr ds : [eax]
        shr cx, 0xC
        movzx ecx, cx
        mov dword ptr ss : [ebp+0x10], ecx
        inc eax
        inc eax
        cmp eax, edi
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx-4]
        jb public_6d39fcb
        fstp st(0)
        public_6d3a025 : nop
        cmp dword ptr ds : [esi+0x10], 0
        je public_6d3a03e
        mov eax, dword ptr ds : [esi+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        mov ecx, esi
        call public_6d37e98
        public_6d3a03e : nop
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d39f95)
    }
}

#undef public_6d39fcb
#undef public_6d3a025
#undef public_6d3a03e
