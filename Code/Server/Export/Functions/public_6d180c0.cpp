#include "Server-PCH.h"

PROC_DECLARE(0x6d180c0, internal_6d180c0, public_6d180c0);
extern "C" NAKED register_t __cdecl internal_6d180c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_6d647b8]
        mov ecx, eax
        call dword ptr ds : [public_6d647cc]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d180c0)
    }
}
