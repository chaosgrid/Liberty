#include "DebugLib-PCH.h"

PROC_DECLARE(0x65d1820, internal_65d1820, public_65d1820);
extern "C" NAKED register_t __cdecl internal_65d1820()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        lea edx, ss:[esp+4]
        add eax, 4
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        ret 8
        UNREACHABLE_TRAP(0x65d1820)
    }
}
