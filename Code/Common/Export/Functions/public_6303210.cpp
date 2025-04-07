#include "Common-PCH.h"

PROC_DECLARE(0x6303210, internal_6303210, public_6303210);
extern "C" NAKED register_t __cdecl internal_6303210()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        test al, al
        sete al
        mov byte ptr ds : [public_63ed17c], al
        ret 
        UNREACHABLE_TRAP(0x6303210)
    }
}
