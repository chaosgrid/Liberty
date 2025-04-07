#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41b00);

PROC_DECLARE(0x6d41b00, internal_6d41b00, public_6d41b00);
extern "C" NAKED register_t __cdecl internal_6d41b00()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        mov dx, word ptr ds : [ecx]
        mov word ptr ds : [eax+4], dx
        ret 8
        UNREACHABLE_TRAP(0x6d41b00)
    }
}
