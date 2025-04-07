#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37335);
CLANG_FORWARD_PROC_SYMBOL(public_6d37ac6);

#define public_6d394de _public_6d394de
#define public_6d3951c _public_6d3951c
#define public_6d3957e _public_6d3957e

PROC_DECLARE(0x6d394ba, internal_6d394ba, public_6d394ba);
extern "C" NAKED register_t __cdecl internal_6d394ba()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        push ebx
        xor ebx, ebx
        push esi
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ds : [ecx+0x1048], ebx
        push edi
        je public_6d394de
        push dword ptr ss : [ebp+0x10]
        call public_6d37335
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0x10], eax
        public_6d394de : nop
        mov edx, dword ptr ds : [ecx+0x1050]
        mov eax, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [ecx+0x1054]
        imul edx, eax
        mov esi, dword ptr ss : [ebp+0xC]
        imul edi, esi
        add edx, edi
        add edx, dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ds : [ecx+0x2C]
        and eax, 3
        and esi, 3
        lea eax, ds:[esi+eax*8]
        lea edi, ds:[ecx+eax*4]
        call public_6d37ac6
        mov eax, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [eax+0x1058], ebx
        jbe public_6d3957e
        xor esi, esi
        public_6d3951c : nop
        mov eax, ebx
        and eax, 3
        fld dword ptr ds : [edi+eax*4]
        mov eax, dword ptr ss : [ebp+0x10]
        fst dword ptr ss : [ebp-0x10]
        fld dword ptr ds : [esi+eax]
        fmul dword ptr ds : [public_6d5f60c]
        fadd st, st(1)
        fstp dword ptr ss : [ebp-8]
        fstp st(0)
        fld dword ptr ss : [ebp-8]
        fistp dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [esi+eax+4]
        mov ecx, dword ptr ss : [ebp-0xC]
        fmul dword ptr ds : [public_6d5f60c]
        fadd dword ptr ss : [ebp-0x10]
        fstp dword ptr ss : [ebp-0x10]
        fld dword ptr ss : [ebp-0x10]
        fistp dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp-0x14]
        shl eax, 0x10
        and ecx, 0xFFFF
        or eax, ecx
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [ebp-4]
        add edx, 4
        inc ebx
        add esi, 0x10
        cmp ebx, dword ptr ds : [eax+0x1058]
        jb public_6d3951c
        public_6d3957e : nop
        mov eax, dword ptr ds : [public_6d72920]
        mov dword ptr ss : [ebp-0x14], eax
        fldcw word ptr ss : [ebp-0x14]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d394ba)
    }
}

#undef public_6d394de
#undef public_6d3951c
#undef public_6d3957e
