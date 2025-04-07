#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd9cd0);

#define public_6bd98b6 _public_6bd98b6

PROC_DECLARE(0x6bd98a0, internal_6bd98a0, public_6bd98a0);
extern "C" NAKED register_t __cdecl internal_6bd98a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6bd98b6
        mov dword ptr ss : [esp+4], eax
        mov ecx, offset public_6c13a08
        jmp public_6bd9cd0
        public_6bd98b6 : nop
        ret 8
        UNREACHABLE_TRAP(0x6bd98a0)
    }
}

#undef public_6bd98b6
