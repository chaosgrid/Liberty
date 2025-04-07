#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d06e40);

PROC_DECLARE(0x6d06e40, internal_6d06e40, public_6d06e40);
extern "C" NAKED register_t __cdecl internal_6d06e40()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0xC], 1
        mov dword ptr ds : [eax], offset public_6d67ce4
        ret 
        UNREACHABLE_TRAP(0x6d06e40)
    }
}
