#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d97ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d97d14 _public_6d97d14

PROC_DECLARE(0x6d97ce0, internal_6d97ce0, public_6d97ce0);
extern "C" NAKED register_t __cdecl internal_6d97ce0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        mov esi, ecx
        je public_6d97d14
        push edi
        call dword ptr ds : [public_6db31ec]
        mov dword ptr ds : [esi+0xD8], eax
        lea eax, ds:[eax+eax+2]
        push eax
        call public_6db1f8a
        push edi
        push eax
        mov dword ptr ds : [esi+0xDC], eax
        call dword ptr ds : [public_6db31fc]
        add esp, 0x10
        public_6d97d14 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d97ce0)
    }
}

#undef public_6d97d14
