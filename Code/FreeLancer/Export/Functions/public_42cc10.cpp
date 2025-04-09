#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42cc10);

PROC_DECLARE(0x42cc10, internal_42cc10, public_42cc10);
extern "C" NAKED register_t __cdecl internal_42cc10()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov byte ptr ds : [eax+0x10], cl
        ret 
        UNREACHABLE_TRAP(0x42cc10)
    }
}
