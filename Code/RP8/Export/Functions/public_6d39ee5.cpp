#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d39f1b _public_6d39f1b
#define public_6d39f76 _public_6d39f76
#define public_6d39f8f _public_6d39f8f

PROC_DECLARE(0x6d39ee5, internal_6d39ee5, public_6d39ee5);
extern "C" NAKED register_t __cdecl internal_6d39ee5()
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
        jae public_6d39f76
        fld dword ptr ds : [public_6d5f61c]
        public_6d39f1b : nop
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
        fmul st, st(1)
        fstp dword ptr ds : [edx-8]
        mov cx, word ptr ds : [eax]
        shr cx, 0xF
        movzx ecx, cx
        mov dword ptr ss : [ebp+0x10], ecx
        inc eax
        inc eax
        cmp eax, edi
        fild dword ptr ss : [ebp+0x10]
        fstp dword ptr ds : [edx-4]
        jb public_6d39f1b
        fstp st(0)
        public_6d39f76 : nop
        cmp dword ptr ds : [esi+0x10], 0
        je public_6d39f8f
        mov eax, dword ptr ds : [esi+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        mov ecx, esi
        call public_6d37e98
        public_6d39f8f : nop
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d39ee5)
    }
}

#undef public_6d39f1b
#undef public_6d39f76
#undef public_6d39f8f
