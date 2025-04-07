#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46f37);

#define public_6d46f48 _public_6d46f48

PROC_DECLARE(0x6d46f37, internal_6d46f37, public_6d46f37);
extern "C" NAKED register_t __cdecl internal_6d46f37()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6d46f48
        push esi
        call dword ptr ds : [eax+0x28]
        pop ecx
        public_6d46f48 : nop
        and dword ptr ds : [esi+4], 0
        and dword ptr ds : [esi+0x10], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d46f37)
    }
}

#undef public_6d46f48
