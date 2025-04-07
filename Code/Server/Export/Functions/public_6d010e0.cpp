#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7d00);
CLANG_FORWARD_PROC_SYMBOL(public_6d010e0);

PROC_DECLARE(0x6d010e0, internal_6d010e0, public_6d010e0);
extern "C" NAKED register_t __cdecl internal_6d010e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ce7d00
        mov eax, dword ptr ss : [esp+8]
        mov cx, word ptr ds : [eax]
        mov word ptr ds : [esi+0xC4], cx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0xB4], edx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d010e0)
    }
}
