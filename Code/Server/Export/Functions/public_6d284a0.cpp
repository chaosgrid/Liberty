#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d284a0);

PROC_DECLARE(0x6d284a0, internal_6d284a0, public_6d284a0);
extern "C" NAKED register_t __cdecl internal_6d284a0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax], dl
        mov byte ptr ds : [ecx], 0
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ecx
        ret 4
        UNREACHABLE_TRAP(0x6d284a0)
    }
}
