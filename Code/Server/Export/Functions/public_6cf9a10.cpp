#include "Server-PCH.h"

PROC_DECLARE(0x6cf9a10, internal_6cf9a10, public_6cf9a10);
extern "C" NAKED register_t __cdecl internal_6cf9a10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [public_6d644d4]
        mov edx, dword ptr ss : [esp+0xC]
        xor ecx, ecx
        add esp, 4
        test eax, eax
        setne cl
        mov dword ptr ds : [edx], eax
        dec ecx
        and ecx, 0xFFFFFFFE
        mov eax, ecx
        ret 
        UNREACHABLE_TRAP(0x6cf9a10)
    }
}
