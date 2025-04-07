#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10009880);

PROC_DECLARE(0x10009960, internal_10009960, public_10009960);
extern "C" NAKED register_t __cdecl internal_10009960()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push 0
        push 0
        push eax
        push ecx
        call public_10009880
        ret 8
        UNREACHABLE_TRAP(0x10009960)
    }
}
