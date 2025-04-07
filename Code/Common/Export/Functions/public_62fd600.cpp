#include "Common-PCH.h"

PROC_DECLARE(0x62fd600, internal_62fd600, public_62fd600);
extern "C" NAKED register_t __cdecl internal_62fd600()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a2270]
        mov dword ptr ds : [public_63fcb3c], eax
        ret 
        UNREACHABLE_TRAP(0x62fd600)
    }
}
