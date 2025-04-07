#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7260);
CLANG_FORWARD_PROC_SYMBOL(public_6cf73d0);

#define public_6cf73f8 _public_6cf73f8
#define public_6cf73fa _public_6cf73fa
#define public_6cf7410 _public_6cf7410
#define public_6cf741d _public_6cf741d
#define public_6cf742a _public_6cf742a
#define public_6cf7435 _public_6cf7435

PROC_DECLARE(0x6cf73d0, internal_6cf73d0, public_6cf73d0);
extern "C" NAKED register_t __cdecl internal_6cf73d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        push edi
        mov edi, ecx
        je public_6cf7435
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6cf7435
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6cf73f8
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6cf73fa
        public_6cf73f8 : nop
        xor eax, eax
        public_6cf73fa : nop
        mov edx, dword ptr ds : [eax+0xB4]
        cmp edx, dword ptr ds : [edi+0x38]
        je public_6cf7435
        mov edx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_6cf741d
        mov edi, edi
        public_6cf7410 : nop
        mov ecx, dword ptr ds : [eax+8]
        cmp dword ptr ds : [ecx], esi
        je public_6cf742a
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_6cf7410
        public_6cf741d : nop
        push esi
        mov ecx, edi
        call public_6cf7260
        pop edi
        pop esi
        ret 4
        public_6cf742a : nop
        mov al, byte ptr ds : [ecx+0x2F0]
        pop edi
        pop esi
        ret 4
        public_6cf7435 : nop
        pop edi
        pop esi
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x6cf73d0)
    }
}

#undef public_6cf73f8
#undef public_6cf73fa
#undef public_6cf7410
#undef public_6cf741d
#undef public_6cf742a
#undef public_6cf7435
