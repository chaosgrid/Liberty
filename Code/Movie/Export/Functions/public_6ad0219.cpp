#include "Movie-PCH.h"

PROC_DECLARE(0x6ad0219, internal_6ad0219, public_6ad0219);
extern "C" NAKED register_t __cdecl internal_6ad0219()
{
    __asm
    {
        push ebx
        mul ecx
        mov ebx, eax
        mov eax, dword ptr ss : [esp+8]
        mul dword ptr ss : [esp+0x14]
        add ebx, eax
        mov eax, dword ptr ss : [esp+8]
        mul ecx
        add edx, ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ad0219)
    }
}
