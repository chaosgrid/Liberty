#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f40900);

PROC_DECLARE(0x6f49fd0, internal_6f49fd0, public_6f49fd0);
extern "C" NAKED register_t __cdecl internal_6f49fd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        lea edx, ds:[ecx+0x84]
        push edx
        call public_6f40900
        ret 4
        UNREACHABLE_TRAP(0x6f49fd0)
    }
}
