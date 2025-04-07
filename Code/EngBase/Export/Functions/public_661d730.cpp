#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661d730);

PROC_DECLARE(0x661d730, internal_661d730, public_661d730);
extern "C" NAKED register_t __cdecl internal_661d730()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax], offset public_662952c
        inc dword ptr ds : [public_662b10c]
        ret 
        UNREACHABLE_TRAP(0x661d730)
    }
}
