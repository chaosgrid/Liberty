#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285df0);

PROC_DECLARE(0x6285df0, internal_6285df0, public_6285df0);
extern "C" NAKED register_t __cdecl internal_6285df0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+8], cl
        mov dword ptr ds : [eax], offset public_639baac
        ret 
        UNREACHABLE_TRAP(0x6285df0)
    }
}
