#include "THORN-PCH.h"

PROC_DECLARE(0x6f3c080, internal_6f3c080, public_6f3c080);
extern "C" NAKED register_t __cdecl internal_6f3c080()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax-8]
        add eax, 0xFFFFFFF8
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x58]
        UNREACHABLE_TRAP(0x6f3c080)
    }
}
