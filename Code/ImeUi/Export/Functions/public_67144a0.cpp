#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67144a0);

#define public_67144bc _public_67144bc

PROC_DECLARE(0x67144a0, internal_67144a0, public_67144a0);
extern "C" NAKED register_t __cdecl internal_67144a0()
{
    __asm
    {
        mov al, byte ptr ds : [public_671cfba]
        test al, al
        je public_67144bc
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_671b510], eax
        mov dword ptr ds : [public_671b514], ecx
        public_67144bc : nop
        ret 
        UNREACHABLE_TRAP(0x67144a0)
    }
}

#undef public_67144bc
