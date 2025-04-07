#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d3a735 _public_6d3a735
#define public_6d3a790 _public_6d3a790
#define public_6d3a7a9 _public_6d3a7a9

PROC_DECLARE(0x6d3a6fe, internal_6d3a6fe, public_6d3a6fe);
extern "C" NAKED register_t __cdecl internal_6d3a6fe()
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
        jae public_6d3a790
        fld dword ptr ds : [public_6d5f638]
        push ebx
        public_6d3a735 : nop
        mov bl, byte ptr ds : [eax]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        shl bl, 3
        sar bl, 3
        movsx ebx, bl
        mov dword ptr ss : [ebp+0x10], ebx
        shr ecx, 5
        shl cl, 3
        fild dword ptr ss : [ebp+0x10]
        sar cl, 3
        movsx ecx, cl
        fmul st, st(1)
        mov dword ptr ss : [ebp+0x10], ecx
        fstp dword ptr ds : [edx]
        add edx, 0x10
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx-0xC]
        fldz 
        fstp dword ptr ds : [edx-8]
        mov cx, word ptr ds : [eax]
        shr cx, 0xA
        movzx ecx, cx
        mov dword ptr ss : [ebp+0x10], ecx
        inc eax
        inc eax
        cmp eax, edi
        fild dword ptr ss : [ebp+0x10]
        fmul dword ptr ds : [public_6d5f618]
        fstp dword ptr ds : [edx-4]
        jb public_6d3a735
        fstp st(0)
        pop ebx
        public_6d3a790 : nop
        cmp dword ptr ds : [esi+0x10], 0
        je public_6d3a7a9
        mov eax, dword ptr ds : [esi+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        mov ecx, esi
        call public_6d37e98
        public_6d3a7a9 : nop
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d3a6fe)
    }
}

#undef public_6d3a735
#undef public_6d3a790
#undef public_6d3a7a9
