#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);

PROC_DECLARE(0x6fa6e80, internal_6fa6e80, public_6fa6e80);
extern "C" NAKED register_t __cdecl internal_6fa6e80()
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
        UNREACHABLE_TRAP(0x6fa6e80)
    }
}
