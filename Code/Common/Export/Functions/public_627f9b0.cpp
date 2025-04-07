#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f9b0);

PROC_DECLARE(0x627f9b0, internal_627f9b0, public_627f9b0);
extern "C" NAKED register_t __cdecl internal_627f9b0()
{
    __asm
    {
        push ecx
        mov dl, byte ptr ss : [esp+3]
        mov eax, ecx
        xor ecx, ecx
        mov byte ptr ds : [eax], 1
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x20], dl
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x627f9b0)
    }
}
