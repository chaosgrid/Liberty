#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc560);
CLANG_FORWARD_PROC_SYMBOL(public_6becf40);

PROC_DECLARE(0x6bdc560, internal_6bdc560, public_6bdc560);
extern "C" NAKED register_t __cdecl internal_6bdc560()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6c0bb5c
        jmp public_6becf40
        UNREACHABLE_TRAP(0x6bdc560)
    }
}
