#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d3a98f _public_6d3a98f
#define public_6d3a9f8 _public_6d3a9f8
#define public_6d3aa10 _public_6d3aa10

PROC_DECLARE(0x6d3a95a, internal_6d3a95a, public_6d3a95a);
extern "C" NAKED register_t __cdecl internal_6d3a95a()
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
        jae public_6d3a9f8
        fld dword ptr ds : [public_6d5f644]
        push esi
        push edi
        public_6d3a98f : nop
        mov esi, dword ptr ds : [eax]
        mov edi, esi
        shr esi, 0x15
        shl si, 5
        sar si, 5
        shr edi, 0xA
        shl di, 5
        sar di, 5
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
        fmul dword ptr ds : [public_6d5f640]
        add eax, 4
        fstp dword ptr ds : [edx]
        add edx, 0x10
        cmp eax, ebx
        fild dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp+0x10], esi
        fmul st, st(1)
        fstp dword ptr ds : [edx-0xC]
        fild dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [edx-8]
        fld1 
        fstp dword ptr ds : [edx-4]
        jb public_6d3a98f
        pop edi
        fstp st(0)
        pop esi
        public_6d3a9f8 : nop
        cmp dword ptr ds : [ecx+0x10], 0
        pop ebx
        je public_6d3aa10
        mov eax, dword ptr ds : [ecx+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        call public_6d37e98
        public_6d3aa10 : nop
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d3a95a)
    }
}

#undef public_6d3a98f
#undef public_6d3a9f8
#undef public_6d3aa10
