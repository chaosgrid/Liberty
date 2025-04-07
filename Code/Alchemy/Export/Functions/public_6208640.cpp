#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208640);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);

#define public_620865a _public_620865a

PROC_DECLARE(0x6208640, internal_6208640, public_6208640);
extern "C" NAKED register_t __cdecl internal_6208640()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6257978]
        sub esp, 0x30
        test eax, eax
        push esi
        push edi
        mov esi, ecx
        jne public_620865a
        call public_623e830
        mov dword ptr ds : [public_6257978], eax
        public_620865a : nop
        mov edx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0xC]
        push esi
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
        UNREACHABLE_TRAP(0x6208640)
    }
}

#undef public_620865a
