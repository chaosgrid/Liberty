#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3f970);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b3f9a4 _public_6b3f9a4

PROC_DECLARE(0x6b3f970, internal_6b3f970, public_6b3f970);
extern "C" NAKED register_t __cdecl internal_6b3f970()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        mov esi, ecx
        je public_6b3f9a4
        push edi
        call dword ptr ds : [public_6b6b1e4]
        mov dword ptr ds : [esi+0xD8], eax
        lea eax, ds:[eax+eax+2]
        push eax
        call public_6b6a134
        push edi
        push eax
        mov dword ptr ds : [esi+0xDC], eax
        call dword ptr ds : [public_6b6b1ec]
        add esp, 0x10
        public_6b3f9a4 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b3f970)
    }
}

#undef public_6b3f9a4
