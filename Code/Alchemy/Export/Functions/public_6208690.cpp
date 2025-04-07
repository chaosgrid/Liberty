#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208690);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);

#define public_62086a9 _public_62086a9

PROC_DECLARE(0x6208690, internal_6208690, public_6208690);
extern "C" NAKED register_t __cdecl internal_6208690()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6257978]
        sub esp, 0xC
        test eax, eax
        push esi
        mov esi, ecx
        jne public_62086a9
        call public_623e830
        mov dword ptr ds : [public_6257978], eax
        public_62086a9 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+8]
        push esi
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+4]
        mov ecx, eax
        pop esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6208690)
    }
}

#undef public_62086a9
