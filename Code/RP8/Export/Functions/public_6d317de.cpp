#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d317de);

PROC_DECLARE(0x6d317de, internal_6d317de, public_6d317de);
extern "C" NAKED register_t __cdecl internal_6d317de()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [eax+0x20]
        mov dword ptr ds : [eax+4], ecx
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6d317de)
    }
}
