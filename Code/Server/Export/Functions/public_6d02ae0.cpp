#include "Server-PCH.h"

PROC_DECLARE(0x6d02ae0, internal_6d02ae0, public_6d02ae0);
extern "C" NAKED register_t __cdecl internal_6d02ae0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xB4]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6d02ae0)
    }
}
