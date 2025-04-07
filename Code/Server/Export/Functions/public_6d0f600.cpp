#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f600);

PROC_DECLARE(0x6d0f600, internal_6d0f600, public_6d0f600);
extern "C" NAKED register_t __cdecl internal_6d0f600()
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
        UNREACHABLE_TRAP(0x6d0f600)
    }
}
