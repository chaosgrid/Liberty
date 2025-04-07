#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdcc50);
CLANG_FORWARD_PROC_SYMBOL(public_6becf40);

PROC_DECLARE(0x6bdcc50, internal_6bdcc50, public_6bdcc50);
extern "C" NAKED register_t __cdecl internal_6bdcc50()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6c0bb7c
        jmp public_6becf40
        UNREACHABLE_TRAP(0x6bdcc50)
    }
}
