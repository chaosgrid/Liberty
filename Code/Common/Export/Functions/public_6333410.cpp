#include "Common-PCH.h"

PROC_DECLARE(0x6333410, internal_6333410, public_6333410);
extern "C" NAKED register_t __cdecl internal_6333410()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push 0
        push eax
        call dword ptr ds : [edx]
        ret 8
        UNREACHABLE_TRAP(0x6333410)
    }
}
