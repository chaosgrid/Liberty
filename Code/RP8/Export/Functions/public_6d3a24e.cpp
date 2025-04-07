#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d3a27b _public_6d3a27b
#define public_6d3a2a4 _public_6d3a2a4
#define public_6d3a2bc _public_6d3a2bc

PROC_DECLARE(0x6d3a24e, internal_6d3a24e, public_6d3a24e);
extern "C" NAKED register_t __cdecl internal_6d3a24e()
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
        mov esi, dword ptr ds : [ecx+0x1058]
        add esi, eax
        cmp eax, esi
        jae public_6d3a2a4
        push edi
        public_6d3a27b : nop
        fldz 
        fstp dword ptr ds : [edx]
        fldz 
        add edx, 0x10
        fstp dword ptr ds : [edx-0xC]
        fldz 
        fstp dword ptr ds : [edx-8]
        movzx edi, byte ptr ds : [eax]
        mov dword ptr ss : [ebp+0x10], edi
        inc eax
        cmp eax, esi
        fild dword ptr ss : [ebp+0x10]
        fmul dword ptr ds : [public_6d5f5cc]
        fstp dword ptr ds : [edx-4]
        jb public_6d3a27b
        pop edi
        public_6d3a2a4 : nop
        cmp dword ptr ds : [ecx+0x10], 0
        pop esi
        je public_6d3a2bc
        mov eax, dword ptr ds : [ecx+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        call public_6d37e98
        public_6d3a2bc : nop
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d3a24e)
    }
}

#undef public_6d3a27b
#undef public_6d3a2a4
#undef public_6d3a2bc
