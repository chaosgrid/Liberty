#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54c320);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_54c33a _public_54c33a

PROC_DECLARE(0x54c320, internal_54c320, public_54c320);
extern "C" NAKED register_t __cdecl internal_54c320()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6797a4]
        sub esp, 0x30
        test eax, eax
        push esi
        push edi
        mov esi, ecx
        jne public_54c33a
        call public_5b73e0
        mov dword ptr ds : [public_6797a4], eax
        public_54c33a : nop
        mov edx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        push edx
        push esi
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, 0xC
        lea esi, ss:[esp+8]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x54c320)
    }
}

#undef public_54c33a
