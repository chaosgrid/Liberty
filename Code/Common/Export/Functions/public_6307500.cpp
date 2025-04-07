#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_630751a _public_630751a

PROC_DECLARE(0x6307500, internal_6307500, public_6307500);
extern "C" NAKED register_t __cdecl internal_6307500()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fceb8]
        sub esp, 0x24
        test eax, eax
        push esi
        push edi
        mov esi, ecx
        jne public_630751a
        call public_6391cf0
        mov dword ptr ds : [public_63fceb8], eax
        public_630751a : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        push edx
        add esi, 0xC
        push esi
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, 9
        lea esi, ss:[esp+8]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x6307500)
    }
}

#undef public_630751a
