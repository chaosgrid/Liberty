#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ecd54e _public_6ecd54e

PROC_DECLARE(0x6ecd510, internal_6ecd510, public_6ecd510);
extern "C" NAKED register_t __cdecl internal_6ecd510()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ecd54e
        lea ecx, ss:[esp+4]
        call dword ptr ds : [public_6fb30ac]
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+8]
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx+4]
        push edx
        call dword ptr ds : [public_6fb3408]
        add esp, 8
        public_6ecd54e : nop
        mov al, 1
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ecd510)
    }
}

#undef public_6ecd54e
