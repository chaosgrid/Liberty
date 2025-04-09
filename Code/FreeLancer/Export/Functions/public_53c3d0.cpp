#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a8e40);

PROC_DECLARE(0x53c3d0, internal_53c3d0, public_53c3d0);
extern "C" NAKED register_t __cdecl internal_53c3d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x20]
        lea edx, ds:[eax+ecx*8+0x34]
        push edx
        lea ecx, ds:[eax+0x34]
        push ecx
        push eax
        call public_4a8e40
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x53c3d0)
    }
}
