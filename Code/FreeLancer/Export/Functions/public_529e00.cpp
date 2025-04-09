#include "FreeLancer-PCH.h"

PROC_DECLARE(0x529e00, internal_529e00, public_529e00);
extern "C" NAKED register_t __cdecl internal_529e00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dd184]
        mov dword ptr ds : [public_675414], eax
        ret 
        UNREACHABLE_TRAP(0x529e00)
    }
}
