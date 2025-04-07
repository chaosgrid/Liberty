#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3037);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3038);

PROC_DECLARE(0x6ad3038, internal_6ad3038, public_6ad3038);
/* CHUNK of public_6ad301d */
extern "C" NAKED register_t __cdecl internal_6ad3038()
{
    __asm
    {
        mov byte ptr ss : [ebp-0x90], 2
        fld tbyte ptr ds : [public_6addb80]
        cmp eax, 1
        jne public_6ad3037
        or ch, ch
        je public_6ad3037
        fchs 
        jmp public_6ad3037
        UNREACHABLE_TRAP(0x6ad3038)
    }
}
