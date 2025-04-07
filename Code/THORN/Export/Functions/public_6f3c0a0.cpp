#include "THORN-PCH.h"

PROC_DECLARE(0x6f3c0a0, internal_6f3c0a0, public_6f3c0a0);
extern "C" NAKED register_t __cdecl internal_6f3c0a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax-8]
        add eax, 0xFFFFFFF8
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x68]
        UNREACHABLE_TRAP(0x6f3c0a0)
    }
}
