#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4a30);

PROC_DECLARE(0x4c4a30, internal_4c4a30, public_4c4a30);
extern "C" NAKED register_t __cdecl internal_4c4a30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_6732e4], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [public_6732e8], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [public_6732ec], eax
        ret 
        UNREACHABLE_TRAP(0x4c4a30)
    }
}
