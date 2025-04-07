#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37335);
CLANG_FORWARD_PROC_SYMBOL(public_6d37ac6);

#define public_6d396be _public_6d396be
#define public_6d3970b _public_6d3970b
#define public_6d397be _public_6d397be

PROC_DECLARE(0x6d3969a, internal_6d3969a, public_6d3969a);
extern "C" NAKED register_t __cdecl internal_6d3969a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x28
        push ebx
        push esi
        push edi
        xor edi, edi
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ds : [ecx+0x1048], edi
        je public_6d396be
        push dword ptr ss : [ebp+0x10]
        call public_6d37335
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0x10], eax
        public_6d396be : nop
        mov edx, dword ptr ds : [ecx+0x1050]
        mov eax, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [ecx+0x1054]
        imul edx, eax
        mov esi, dword ptr ss : [ebp+0xC]
        imul ebx, esi
        and eax, 3
        add edx, ebx
        add edx, dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ds : [ecx+0x2C]
        and esi, 3
        lea eax, ds:[esi+eax*8]
        lea eax, ds:[ecx+eax*4]
        mov dword ptr ss : [ebp-0x10], eax
        call public_6d37ac6
        mov eax, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [eax+0x1058], edi
        mov dword ptr ss : [ebp-8], edi
        jbe public_6d397be
        xor ecx, ecx
        mov esi, 0x3FF
        public_6d3970b : nop
        mov eax, dword ptr ss : [ebp-8]
        mov edi, dword ptr ss : [ebp-0x10]
        and eax, 3
        fld dword ptr ds : [edi+eax*4]
        mov eax, dword ptr ss : [ebp+0x10]
        fst dword ptr ss : [ebp-0xC]
        fld dword ptr ds : [ecx+eax]
        fmul dword ptr ds : [public_6d5f614]
        fadd st, st(1)
        fstp dword ptr ss : [ebp-0x14]
        fstp st(0)
        fld dword ptr ss : [ebp-0x14]
        fistp dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [ecx+eax+4]
        mov edi, dword ptr ss : [ebp-0x18]
        fmul dword ptr ds : [public_6d5f614]
        fadd dword ptr ss : [ebp-0xC]
        fstp dword ptr ss : [ebp-0x14]
        fld dword ptr ss : [ebp-0x14]
        fistp dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0x28], eax
        mov eax, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [ecx+eax+8]
        fmul dword ptr ds : [public_6d5f614]
        fadd dword ptr ss : [ebp-0xC]
        fstp dword ptr ss : [ebp-0x14]
        fld dword ptr ss : [ebp-0x14]
        fistp dword ptr ss : [ebp-0x20]
        mov ebx, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [ecx+ebx+0xC]
        mov eax, dword ptr ss : [ebp-0x20]
        fadd st(0), st
        fadd dword ptr ss : [ebp-0xC]
        fstp dword ptr ss : [ebp-0x14]
        fld dword ptr ss : [ebp-0x14]
        fistp dword ptr ss : [ebp-0x24]
        mov ebx, dword ptr ss : [ebp-0x24]
        and eax, esi
        shl ebx, 0xA
        or eax, ebx
        mov ebx, dword ptr ss : [ebp-0x28]
        shl eax, 0xA
        and ebx, esi
        or eax, ebx
        shl eax, 0xA
        and edi, esi
        or eax, edi
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [ebp-4]
        add edx, 4
        inc dword ptr ss : [ebp-8]
        mov edi, dword ptr ss : [ebp-8]
        add ecx, 0x10
        cmp edi, dword ptr ds : [eax+0x1058]
        jb public_6d3970b
        public_6d397be : nop
        mov eax, dword ptr ds : [public_6d72920]
        mov dword ptr ss : [ebp-0x28], eax
        fldcw word ptr ss : [ebp-0x28]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d3969a)
    }
}

#undef public_6d396be
#undef public_6d3970b
#undef public_6d397be
