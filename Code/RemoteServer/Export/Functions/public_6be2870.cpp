#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be2870);
CLANG_FORWARD_PROC_SYMBOL(public_6becf40);

PROC_DECLARE(0x6be2870, internal_6be2870, public_6be2870);
extern "C" NAKED register_t __cdecl internal_6be2870()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6c0bd34
        jmp public_6becf40
        UNREACHABLE_TRAP(0x6be2870)
    }
}
