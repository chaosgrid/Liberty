#include "FreeLancer-PCH.h"

PROC_DECLARE(0x564ae0, internal_564ae0, public_564ae0);
extern "C" NAKED register_t __cdecl internal_564ae0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_67bf48], eax
        mov byte ptr ds : [public_67bf4c], al
        ret 
        UNREACHABLE_TRAP(0x564ae0)
    }
}
