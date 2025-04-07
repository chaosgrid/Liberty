#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d3ac18 _public_6d3ac18
#define public_6d3ac55 _public_6d3ac55
#define public_6d3ac6d _public_6d3ac6d

PROC_DECLARE(0x6d3abe5, internal_6d3abe5, public_6d3abe5);
extern "C" NAKED register_t __cdecl internal_6d3abe5()
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
        mov edx, dword ptr ss : [ebp+0x10]
        push esi
        mov esi, dword ptr ds : [ecx+0x1064]
        add esi, eax
        cmp eax, esi
        jae public_6d3ac55
        fld dword ptr ds : [public_6d5f62c]
        push edi
        public_6d3ac18 : nop
        movzx edi, word ptr ds : [eax+4]
        mov dword ptr ss : [ebp+0x10], edi
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx]
        movzx edi, word ptr ds : [eax+2]
        mov dword ptr ss : [ebp+0x10], edi
        add edx, 0x10
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx-0xC]
        movzx edi, word ptr ds : [eax]
        mov dword ptr ss : [ebp+0x10], edi
        add eax, 6
        cmp eax, esi
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx-8]
        fld1 
        fstp dword ptr ds : [edx-4]
        jb public_6d3ac18
        fstp st(0)
        pop edi
        public_6d3ac55 : nop
        cmp dword ptr ds : [ecx+0x10], 0
        pop esi
        je public_6d3ac6d
        mov eax, dword ptr ds : [ecx+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        call public_6d37e98
        public_6d3ac6d : nop
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d3abe5)
    }
}

#undef public_6d3ac18
#undef public_6d3ac55
#undef public_6d3ac6d
