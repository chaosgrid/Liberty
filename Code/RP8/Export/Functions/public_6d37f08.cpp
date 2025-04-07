#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37335);
CLANG_FORWARD_PROC_SYMBOL(public_6d37ac6);

#define public_6d37f28 _public_6d37f28
#define public_6d37f6a _public_6d37f6a
#define public_6d37fe3 _public_6d37fe3

PROC_DECLARE(0x6d37f08, internal_6d37f08, public_6d37f08);
extern "C" NAKED register_t __cdecl internal_6d37f08()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ds : [ecx+0x1048], 0
        je public_6d37f28
        push dword ptr ss : [ebp+0x10]
        call public_6d37335
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp+0x10], eax
        public_6d37f28 : nop
        mov edx, dword ptr ds : [ecx+0x1050]
        mov eax, dword ptr ss : [ebp+8]
        push esi
        imul edx, eax
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ds : [ecx+0x1054]
        imul edi, esi
        add edx, edi
        add edx, dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ds : [ecx+0x2C]
        and eax, 3
        and esi, 3
        lea eax, ds:[esi+eax*8]
        lea edi, ds:[ecx+eax*4]
        call public_6d37ac6
        mov ecx, dword ptr ss : [ebp-4]
        xor eax, eax
        xor esi, esi
        cmp dword ptr ds : [ecx+0x1058], eax
        jbe public_6d37fe3
        public_6d37f6a : nop
        mov ecx, esi
        and ecx, 3
        fld dword ptr ds : [edi+ecx*4]
        mov ecx, dword ptr ss : [ebp+0x10]
        fst dword ptr ss : [ebp-8]
        fld dword ptr ds : [eax+ecx+8]
        fmul dword ptr ds : [public_6d5f5e0]
        fadd st, st(1)
        fstp dword ptr ss : [ebp-0xC]
        fstp st(0)
        fld dword ptr ss : [ebp-0xC]
        fistp dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov byte ptr ds : [edx], cl
        mov ecx, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [eax+ecx+4]
        fmul dword ptr ds : [public_6d5f5e0]
        fadd dword ptr ss : [ebp-8]
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp-0xC]
        fistp dword ptr ss : [ebp-0x14]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov byte ptr ds : [edx+1], cl
        mov ecx, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [eax+ecx]
        fmul dword ptr ds : [public_6d5f5e0]
        fadd dword ptr ss : [ebp-8]
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp-0xC]
        fistp dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp-0x18]
        mov byte ptr ds : [edx+2], cl
        mov ecx, dword ptr ss : [ebp-4]
        add edx, 3
        inc esi
        add eax, 0x10
        cmp esi, dword ptr ds : [ecx+0x1058]
        jb public_6d37f6a
        public_6d37fe3 : nop
        mov eax, dword ptr ds : [public_6d72920]
        mov dword ptr ss : [ebp-0x18], eax
        fldcw word ptr ss : [ebp-0x18]
        pop edi
        pop esi
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d37f08)
    }
}

#undef public_6d37f28
#undef public_6d37f6a
#undef public_6d37fe3
