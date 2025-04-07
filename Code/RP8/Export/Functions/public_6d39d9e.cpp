#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d39dd4 _public_6d39dd4
#define public_6d39e24 _public_6d39e24
#define public_6d39e3d _public_6d39e3d

PROC_DECLARE(0x6d39d9e, internal_6d39d9e, public_6d39d9e);
extern "C" NAKED register_t __cdecl internal_6d39d9e()
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
        jae public_6d39e24
        fld dword ptr ds : [public_6d5f61c]
        public_6d39dd4 : nop
        mov cx, word ptr ds : [eax]
        shr cx, 0xB
        movzx ecx, cx
        mov dword ptr ss : [ebp+0x10], ecx
        xor ecx, ecx
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx]
        mov cx, word ptr ds : [eax]
        add edx, 0x10
        shr ecx, 5
        and ecx, 0x3F
        mov dword ptr ss : [ebp+0x10], ecx
        fild dword ptr ss : [ebp+0x10]
        xor ecx, ecx
        fmul dword ptr ds : [public_6d5f618]
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
        jb public_6d39dd4
        fstp st(0)
        public_6d39e24 : nop
        cmp dword ptr ds : [esi+0x10], 0
        je public_6d39e3d
        mov eax, dword ptr ds : [esi+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        mov ecx, esi
        call public_6d37e98
        public_6d39e3d : nop
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d39d9e)
    }
}

#undef public_6d39dd4
#undef public_6d39e24
#undef public_6d39e3d
