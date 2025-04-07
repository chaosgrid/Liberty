#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d39e79 _public_6d39e79
#define public_6d39ec6 _public_6d39ec6
#define public_6d39edf _public_6d39edf

PROC_DECLARE(0x6d39e43, internal_6d39e43, public_6d39e43);
extern "C" NAKED register_t __cdecl internal_6d39e43()
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
        jae public_6d39ec6
        fld dword ptr ds : [public_6d5f61c]
        public_6d39e79 : nop
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        shr ecx, 0xA
        and ecx, 0x1F
        mov dword ptr ss : [ebp+0x10], ecx
        fild dword ptr ss : [ebp+0x10]
        xor ecx, ecx
        fmul st, st(1)
        fstp dword ptr ds : [edx]
        mov cx, word ptr ds : [eax]
        add edx, 0x10
        shr ecx, 5
        and ecx, 0x1F
        mov dword ptr ss : [ebp+0x10], ecx
        fild dword ptr ss : [ebp+0x10]
        xor ecx, ecx
        fmul st, st(1)
        fstp dword ptr ds : [edx-0xC]
        mov cl, byte ptr ds : [eax]
        and ecx, 0x1F
        mov dword ptr ss : [ebp+0x10], ecx
        fild dword ptr ss : [ebp+0x10]
        inc eax
        inc eax
        cmp eax, edi
        fmul st, st(1)
        fstp dword ptr ds : [edx-8]
        fld1 
        fstp dword ptr ds : [edx-4]
        jb public_6d39e79
        fstp st(0)
        public_6d39ec6 : nop
        cmp dword ptr ds : [esi+0x10], 0
        je public_6d39edf
        mov eax, dword ptr ds : [esi+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        mov ecx, esi
        call public_6d37e98
        public_6d39edf : nop
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d39e43)
    }
}

#undef public_6d39e79
#undef public_6d39ec6
#undef public_6d39edf
