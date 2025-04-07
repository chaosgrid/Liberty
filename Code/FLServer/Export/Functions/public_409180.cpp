#include "FLServer-PCH.h"

PROC_DECLARE(0x409180, internal_409180, public_409180);
extern "C" NAKED register_t __cdecl internal_409180()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_426b9c], ax
        mov byte ptr ds : [public_426b9e], al
        ret 
        UNREACHABLE_TRAP(0x409180)
    }
}
