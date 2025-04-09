#include "FreeLancer-PCH.h"

PROC_DECLARE(0x412620, internal_412620, public_412620);
extern "C" NAKED register_t __cdecl internal_412620()
{
    __asm
    {
        xor al, al
        mov byte ptr ds : [public_616677], al
        mov byte ptr ds : [public_616676], al
        mov byte ptr ds : [public_616675], al
        mov byte ptr ds : [public_616674], al
        mov dword ptr ds : [public_61667c], 0
        mov dword ptr ds : [public_616678], 0
        ret 
        UNREACHABLE_TRAP(0x412620)
    }
}
