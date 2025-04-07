#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dd21f);

#define public_65dd237 _public_65dd237

PROC_DECLARE(0x65dd21f, internal_65dd21f, public_65dd21f);
extern "C" NAKED register_t __cdecl internal_65dd21f()
{
    __asm
    {
        push esi
        push 1
        pop esi
        push dword ptr ss : [esp+0xC]
        push dword ptr ss : [esp+0xC]
        call dword ptr ds : [public_65e10d8]
        test eax, eax
        je public_65dd237
        xor esi, esi
        public_65dd237 : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65dd21f)
    }
}

#undef public_65dd237
