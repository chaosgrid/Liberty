#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6211850);

PROC_DECLARE(0x6211850, internal_6211850, public_6211850);
extern "C" NAKED register_t __cdecl internal_6211850()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x6211850)
    }
}
