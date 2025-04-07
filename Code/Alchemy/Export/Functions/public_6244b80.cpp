#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244b80);

#define public_6244bb1 _public_6244bb1
#define public_6244bbc _public_6244bbc

PROC_DECLARE(0x6244b80, internal_6244b80, public_6244b80);
extern "C" NAKED register_t __cdecl internal_6244b80()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, ecx
        je public_6244bbc
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0xFFFFFFFF
        je public_6244bb1
        mov ecx, dword ptr ds : [public_6257bbc]
        test ecx, ecx
        je public_6244bb1
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x40]
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        public_6244bb1 : nop
        mov dword ptr ds : [esi], 0
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi], eax
        public_6244bbc : nop
        pop edi
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6244b80)
    }
}

#undef public_6244bb1
#undef public_6244bbc
