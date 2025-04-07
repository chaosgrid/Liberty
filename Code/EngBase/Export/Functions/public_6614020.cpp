#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6614020);

PROC_DECLARE(0x6614020, internal_6614020, public_6614020);
extern "C" NAKED register_t __cdecl internal_6614020()
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
        UNREACHABLE_TRAP(0x6614020)
    }
}
