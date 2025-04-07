#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6beeca0);

PROC_DECLARE(0x6beeca0, internal_6beeca0, public_6beeca0);
extern "C" NAKED register_t __cdecl internal_6beeca0()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6c0c8a8
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6beeca0)
    }
}
