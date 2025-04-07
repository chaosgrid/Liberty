#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d3a7e3 _public_6d3a7e3
#define public_6d3a824 _public_6d3a824
#define public_6d3a83c _public_6d3a83c

PROC_DECLARE(0x6d3a7af, internal_6d3a7af, public_6d3a7af);
extern "C" NAKED register_t __cdecl internal_6d3a7af()
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
        jae public_6d3a824
        fld dword ptr ds : [public_6d5f634]
        push edi
        public_6d3a7e3 : nop
        movsx edi, byte ptr ds : [eax]
        mov dword ptr ss : [ebp+0x10], edi
        add eax, 4
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx]
        movsx edi, byte ptr ds : [eax-3]
        mov dword ptr ss : [ebp+0x10], edi
        add edx, 0x10
        cmp eax, esi
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx-0xC]
        fldz 
        fstp dword ptr ds : [edx-8]
        movzx edi, byte ptr ds : [eax-2]
        mov dword ptr ss : [ebp+0x10], edi
        fild dword ptr ss : [ebp+0x10]
        fmul dword ptr ds : [public_6d5f5cc]
        fstp dword ptr ds : [edx-4]
        jb public_6d3a7e3
        fstp st(0)
        pop edi
        public_6d3a824 : nop
        cmp dword ptr ds : [ecx+0x10], 0
        pop esi
        je public_6d3a83c
        mov eax, dword ptr ds : [ecx+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        call public_6d37e98
        public_6d3a83c : nop
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d3a7af)
    }
}

#undef public_6d3a7e3
#undef public_6d3a824
#undef public_6d3a83c
