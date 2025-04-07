#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eeba10);

PROC_DECLARE(0x6eeba10, internal_6eeba10, public_6eeba10);
/* CHUNK of public_6f5cf60 */
extern "C" NAKED register_t __cdecl internal_6eeba10()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        test al, al
        sete al
        mov byte ptr ds : [public_6fce368], al
        ret 
        UNREACHABLE_TRAP(0x6eeba10)
    }
}
