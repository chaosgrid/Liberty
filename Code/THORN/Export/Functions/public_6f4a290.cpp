#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f40ab0);

PROC_DECLARE(0x6f4a290, internal_6f4a290, public_6f4a290);
extern "C" NAKED register_t __cdecl internal_6f4a290()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        lea edx, ds:[ecx+0x84]
        push edx
        call public_6f40ab0
        ret 4
        UNREACHABLE_TRAP(0x6f4a290)
    }
}
