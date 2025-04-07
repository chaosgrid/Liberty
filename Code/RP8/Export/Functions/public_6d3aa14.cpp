#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d3aa4d _public_6d3aa4d
#define public_6d3aab4 _public_6d3aab4
#define public_6d3aacb _public_6d3aacb
#define public_6d3aae3 _public_6d3aae3

PROC_DECLARE(0x6d3aa14, internal_6d3aa14, public_6d3aa14);
extern "C" NAKED register_t __cdecl internal_6d3aa14()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ds : [ecx+0x1050]
        imul eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x1054]
        imul edx, dword ptr ss : [ebp+0xC]
        add eax, edx
        add eax, dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ds : [ecx+0x1058]
        push ebx
        lea ebx, ds:[eax+edx*4]
        cmp eax, ebx
        mov edx, dword ptr ss : [ebp+0x10]
        jae public_6d3aacb
        fld dword ptr ds : [public_6d5f640]
        push esi
        push edi
        public_6d3aa4d : nop
        mov esi, dword ptr ds : [eax]
        mov edi, esi
        shr esi, 0x14
        shl si, 6
        sar si, 6
        shr edi, 0xA
        shl di, 6
        sar di, 6
        mov dword ptr ss : [ebp+8], esi
        mov si, word ptr ds : [eax]
        shl si, 6
        sar si, 6
        movsx esi, si
        mov dword ptr ss : [ebp+0x10], esi
        movsx esi, di
        fild dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp+0x10], esi
        movsx esi, word ptr ss : [ebp+8]
        fmul st, st(1)
        fstp dword ptr ds : [edx]
        fild dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp+0x10], esi
        fmul st, st(1)
        fstp dword ptr ds : [edx+4]
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [eax]
        shr esi, 0x1E
        test esi, esi
        mov dword ptr ss : [ebp+0x10], esi
        fild dword ptr ss : [ebp+0x10]
        jge public_6d3aab4
        fadd dword ptr ds : [public_6d5f200]
        public_6d3aab4 : nop
        fmul dword ptr ds : [public_6d5f624]
        add eax, 4
        add edx, 0x10
        cmp eax, ebx
        fstp dword ptr ds : [edx-4]
        jb public_6d3aa4d
        pop edi
        fstp st(0)
        pop esi
        public_6d3aacb : nop
        cmp dword ptr ds : [ecx+0x10], 0
        pop ebx
        je public_6d3aae3
        mov eax, dword ptr ds : [ecx+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        call public_6d37e98
        public_6d3aae3 : nop
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d3aa14)
    }
}

#undef public_6d3aa4d
#undef public_6d3aab4
#undef public_6d3aacb
#undef public_6d3aae3
