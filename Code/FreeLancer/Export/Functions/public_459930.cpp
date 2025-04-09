#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_459210);
CLANG_FORWARD_PROC_SYMBOL(public_459930);

#define public_459944 _public_459944

PROC_DECLARE(0x459930, internal_459930, public_459930);
extern "C" NAKED register_t __cdecl internal_459930()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_66d334]
        test ecx, ecx
        je public_459944
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_459210
        public_459944 : nop
        ret 
        UNREACHABLE_TRAP(0x459930)
    }
}

#undef public_459944
