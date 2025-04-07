#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b466f0);

#define public_6b46712 _public_6b46712
#define public_6b46727 _public_6b46727

PROC_DECLARE(0x6b466f0, internal_6b466f0, public_6b466f0);
extern "C" NAKED register_t __cdecl internal_6b466f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x28], eax
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_6b46712
        push eax
        call dword ptr ds : [public_6b6b1dc]
        add esp, 4
        mov dword ptr ds : [esi+0x24], 0
        public_6b46712 : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6b46727
        push eax
        call dword ptr ds : [public_6b6b1b8]
        add esp, 4
        mov dword ptr ds : [esi+0x24], eax
        public_6b46727 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6b466f0)
    }
}

#undef public_6b46712
#undef public_6b46727
