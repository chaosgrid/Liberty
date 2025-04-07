#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f60d60);
CLANG_FORWARD_PROC_SYMBOL(public_6f60da0);

#define public_6f0ad73 _public_6f0ad73
#define public_6f0ad9e _public_6f0ad9e

PROC_DECLARE(0x6f0ad60, internal_6f0ad60, public_6f0ad60);
extern "C" NAKED register_t __cdecl internal_6f0ad60()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6f0ad73
        push eax
        call public_6f60da0
        add esp, 4
        public_6f0ad73 : nop
        mov ecx, dword ptr ds : [esi+0x2C]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+8], edi
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [esi+0x30]
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+0x14]
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        pop edi
        je public_6f0ad9e
        push esi
        call public_6f60d60
        add esp, 4
        public_6f0ad9e : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f0ad60)
    }
}

#undef public_6f0ad73
#undef public_6f0ad9e
