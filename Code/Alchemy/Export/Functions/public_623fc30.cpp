#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623fc30);

#define public_623fc5b _public_623fc5b
#define public_623fc7c _public_623fc7c

PROC_DECLARE(0x623fc30, internal_623fc30, public_623fc30);
extern "C" NAKED register_t __cdecl internal_623fc30()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        mov eax, dword ptr ds : [edi+0x80]
        mov ecx, dword ptr ds : [eax+0x48]
        mov dword ptr ds : [esi+0x88], ecx
        mov eax, dword ptr ds : [esi+0x7C]
        test eax, eax
        je public_623fc5b
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x7C], 0
        public_623fc5b : nop
        mov eax, dword ptr ds : [edi+0x7C]
        test eax, eax
        mov dword ptr ds : [esi+0x7C], eax
        je public_623fc7c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+0x80]
        pop edi
        mov dword ptr ds : [esi+0x80], edx
        pop esi
        ret 4
        public_623fc7c : nop
        mov eax, dword ptr ds : [edi+0x80]
        pop edi
        mov dword ptr ds : [esi+0x80], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x623fc30)
    }
}

#undef public_623fc5b
#undef public_623fc7c
