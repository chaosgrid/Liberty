#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b73cf0, internal_6b73cf0, public_6b73cf0);
extern "C" NAKED register_t __cdecl internal_6b73cf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x234]
        mov dword ptr ss : [esp+4], eax
        mov ecx, dword ptr ds : [eax]
        jmp dword ptr ds : [ecx+0xA0]
        UNREACHABLE_TRAP(0x6b73cf0)
    }
}
