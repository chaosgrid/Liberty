#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661acd0);
CLANG_FORWARD_PROC_SYMBOL(public_661acf0);

#define public_661ad1d _public_661ad1d

PROC_DECLARE(0x661acf0, internal_661acf0, public_661acf0);
extern "C" NAKED register_t __cdecl internal_661acf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], 2
        mov dword ptr ds : [esi+0x14], 0xFFFFFFFF
        mov dword ptr ds : [esi+0xC], ecx
        mov dword ptr ds : [esi+0x10], ecx
        mov dword ptr ds : [esi+0x24], eax
        je public_661ad1d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_661ad1d : nop
        mov ecx, esi
        mov dword ptr ds : [esi], offset public_66294ac
        call public_661acd0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x661acf0)
    }
}

#undef public_661ad1d
