#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46d660);

PROC_DECLARE(0x46d660, internal_46d660, public_46d660);
extern "C" NAKED register_t __cdecl internal_46d660()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax+4], dl
        ret 8
        UNREACHABLE_TRAP(0x46d660)
    }
}
