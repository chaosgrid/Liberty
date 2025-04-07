#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d3a874 _public_6d3a874
#define public_6d3a8bb _public_6d3a8bb
#define public_6d3a8d3 _public_6d3a8d3

PROC_DECLARE(0x6d3a840, internal_6d3a840, public_6d3a840);
extern "C" NAKED register_t __cdecl internal_6d3a840()
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
        jae public_6d3a8bb
        fld dword ptr ds : [public_6d5f634]
        push edi
        public_6d3a874 : nop
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
        movsx edi, byte ptr ds : [eax-2]
        mov dword ptr ss : [ebp+0x10], edi
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx-8]
        movsx edi, byte ptr ds : [eax-1]
        mov dword ptr ss : [ebp+0x10], edi
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx-4]
        jb public_6d3a874
        fstp st(0)
        pop edi
        public_6d3a8bb : nop
        cmp dword ptr ds : [ecx+0x10], 0
        pop esi
        je public_6d3a8d3
        mov eax, dword ptr ds : [ecx+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        call public_6d37e98
        public_6d3a8d3 : nop
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d3a840)
    }
}

#undef public_6d3a874
#undef public_6d3a8bb
#undef public_6d3a8d3
