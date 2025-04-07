#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d3a90b _public_6d3a90b
#define public_6d3a93e _public_6d3a93e
#define public_6d3a956 _public_6d3a956

PROC_DECLARE(0x6d3a8d7, internal_6d3a8d7, public_6d3a8d7);
extern "C" NAKED register_t __cdecl internal_6d3a8d7()
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
        jae public_6d3a93e
        fld dword ptr ds : [public_6d5f63c]
        push edi
        public_6d3a90b : nop
        movsx edi, word ptr ds : [eax]
        mov dword ptr ss : [ebp+0x10], edi
        add eax, 4
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx]
        movsx edi, word ptr ds : [eax-2]
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
        jb public_6d3a90b
        fstp st(0)
        pop edi
        public_6d3a93e : nop
        cmp dword ptr ds : [ecx+0x10], 0
        pop esi
        je public_6d3a956
        mov eax, dword ptr ds : [ecx+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        call public_6d37e98
        public_6d3a956 : nop
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d3a8d7)
    }
}

#undef public_6d3a90b
#undef public_6d3a93e
#undef public_6d3a956
