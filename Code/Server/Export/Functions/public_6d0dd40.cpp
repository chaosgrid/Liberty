#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0c840);

PROC_DECLARE(0x6d0dd40, internal_6d0dd40, public_6d0dd40);
extern "C" NAKED register_t __cdecl internal_6d0dd40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], edx
        jmp public_6d0c840
        UNREACHABLE_TRAP(0x6d0dd40)
    }
}
