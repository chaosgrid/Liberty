#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206c70);

PROC_DECLARE(0x6206c70, internal_6206c70, public_6206c70);
extern "C" NAKED register_t __cdecl internal_6206c70()
{
    __asm
    {
        mov eax, ecx
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax], ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        ret 
        UNREACHABLE_TRAP(0x6206c70)
    }
}
