#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d3a529 _public_6d3a529
#define public_6d3a54e _public_6d3a54e
#define public_6d3a566 _public_6d3a566

PROC_DECLARE(0x6d3a4fc, internal_6d3a4fc, public_6d3a4fc);
extern "C" NAKED register_t __cdecl internal_6d3a4fc()
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
        jae public_6d3a54e
        push edi
        public_6d3a529 : nop
        movzx edi, byte ptr ds : [eax]
        mov dword ptr ss : [ebp+0x10], edi
        inc eax
        fild dword ptr ss : [ebp+0x10]
        fmul dword ptr ds : [public_6d5f5cc]
        fst dword ptr ds : [edx+8]
        fst dword ptr ds : [edx+4]
        fstp dword ptr ds : [edx]
        add edx, 0x10
        cmp eax, esi
        fld1 
        fstp dword ptr ds : [edx-4]
        jb public_6d3a529
        pop edi
        public_6d3a54e : nop
        cmp dword ptr ds : [ecx+0x10], 0
        pop esi
        je public_6d3a566
        mov eax, dword ptr ds : [ecx+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        call public_6d37e98
        public_6d3a566 : nop
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d3a4fc)
    }
}

#undef public_6d3a529
#undef public_6d3a54e
#undef public_6d3a566
