#include "Common-PCH.h"

PROC_DECLARE(0x63296a0, internal_63296a0, public_63296a0);
extern "C" NAKED register_t __cdecl internal_63296a0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        test edx, edx
        setne al
        mov dword ptr ds : [ecx], eax
        ret 4
        UNREACHABLE_TRAP(0x63296a0)
    }
}
