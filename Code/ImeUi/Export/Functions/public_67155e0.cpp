#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67155e0);

#define public_67155fc _public_67155fc

PROC_DECLARE(0x67155e0, internal_67155e0, public_67155e0);
extern "C" NAKED register_t __cdecl internal_67155e0()
{
    __asm
    {
        mov al, byte ptr ds : [public_671cfba]
        test al, al
        je public_67155fc
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_671bac8], eax
        mov dword ptr ds : [public_671b7b0], ecx
        public_67155fc : nop
        ret 
        UNREACHABLE_TRAP(0x67155e0)
    }
}

#undef public_67155fc
