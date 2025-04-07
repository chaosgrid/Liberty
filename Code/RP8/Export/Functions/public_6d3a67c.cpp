#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d3a6b0 _public_6d3a6b0
#define public_6d3a6e2 _public_6d3a6e2
#define public_6d3a6fa _public_6d3a6fa

PROC_DECLARE(0x6d3a67c, internal_6d3a67c, public_6d3a67c);
extern "C" NAKED register_t __cdecl internal_6d3a67c()
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
        lea esi, ds:[eax+edx*2]
        cmp eax, esi
        mov edx, dword ptr ss : [ebp+0x10]
        jae public_6d3a6e2
        fld dword ptr ds : [public_6d5f634]
        push edi
        public_6d3a6b0 : nop
        movsx edi, byte ptr ds : [eax]
        mov dword ptr ss : [ebp+0x10], edi
        inc eax
        inc eax
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx]
        movsx edi, byte ptr ds : [eax-1]
        mov dword ptr ss : [ebp+0x10], edi
        add edx, 0x10
        cmp eax, esi
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx-0xC]
        fldz 
        fstp dword ptr ds : [edx-8]
        fld1 
        fstp dword ptr ds : [edx-4]
        jb public_6d3a6b0
        fstp st(0)
        pop edi
        public_6d3a6e2 : nop
        cmp dword ptr ds : [ecx+0x10], 0
        pop esi
        je public_6d3a6fa
        mov eax, dword ptr ds : [ecx+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        call public_6d37e98
        public_6d3a6fa : nop
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d3a67c)
    }
}

#undef public_6d3a6b0
#undef public_6d3a6e2
#undef public_6d3a6fa
