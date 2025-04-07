#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33070);

PROC_DECLARE(0x6f33070, internal_6f33070, public_6f33070);
extern "C" NAKED register_t __cdecl internal_6f33070()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        ret 4
        UNREACHABLE_TRAP(0x6f33070)
    }
}
