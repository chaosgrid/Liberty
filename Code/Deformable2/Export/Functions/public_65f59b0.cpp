#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f59b0);

PROC_DECLARE(0x65f59b0, internal_65f59b0, public_65f59b0);
extern "C" NAKED register_t __cdecl internal_65f59b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        push ecx
        mov ecx, dword ptr ds : [eax+8]
        push edx
        push ecx
        call dword ptr ds : [eax]
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x65f59b0)
    }
}
