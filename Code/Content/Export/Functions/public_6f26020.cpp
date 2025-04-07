#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f26020);

PROC_DECLARE(0x6f26020, internal_6f26020, public_6f26020);
extern "C" NAKED register_t __cdecl internal_6f26020()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x118], 0
        mov byte ptr ds : [ecx+0x11C], al
        ret 4
        UNREACHABLE_TRAP(0x6f26020)
    }
}
