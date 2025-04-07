#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d3ab8b _public_6d3ab8b
#define public_6d3aba3 _public_6d3aba3
#define public_6d3abc9 _public_6d3abc9
#define public_6d3abe1 _public_6d3abe1

PROC_DECLARE(0x6d3ab57, internal_6d3ab57, public_6d3ab57);
extern "C" NAKED register_t __cdecl internal_6d3ab57()
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
        push esi
        lea esi, ds:[eax+edx*4]
        cmp eax, esi
        mov edx, dword ptr ss : [ebp+0x10]
        jae public_6d3abc9
        fld dword ptr ds : [public_6d5f62c]
        push edi
        public_6d3ab8b : nop
        mov edi, dword ptr ds : [eax]
        and edi, 0xFFFF
        test edi, edi
        mov dword ptr ss : [ebp+0x10], edi
        fild dword ptr ss : [ebp+0x10]
        jge public_6d3aba3
        fadd dword ptr ds : [public_6d5f200]
        public_6d3aba3 : nop
        fmul st, st(1)
        add eax, 4
        fst dword ptr ds : [edx+8]
        fst dword ptr ds : [edx+4]
        fstp dword ptr ds : [edx]
        movzx edi, word ptr ds : [eax-2]
        mov dword ptr ss : [ebp+0x10], edi
        add edx, 0x10
        cmp eax, esi
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx-4]
        jb public_6d3ab8b
        fstp st(0)
        pop edi
        public_6d3abc9 : nop
        cmp dword ptr ds : [ecx+0x10], 0
        pop esi
        je public_6d3abe1
        mov eax, dword ptr ds : [ecx+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        call public_6d37e98
        public_6d3abe1 : nop
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d3ab57)
    }
}

#undef public_6d3ab8b
#undef public_6d3aba3
#undef public_6d3abc9
#undef public_6d3abe1
