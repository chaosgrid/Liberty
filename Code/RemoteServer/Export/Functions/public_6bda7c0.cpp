#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6becf40);

PROC_DECLARE(0x6bda7c0, internal_6bda7c0, public_6bda7c0);
extern "C" NAKED register_t __cdecl internal_6bda7c0()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6c0badc
        jmp public_6becf40
        UNREACHABLE_TRAP(0x6bda7c0)
    }
}
