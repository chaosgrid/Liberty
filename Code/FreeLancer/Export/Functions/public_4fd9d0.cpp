#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f79f0);
CLANG_FORWARD_PROC_SYMBOL(public_4fd9d0);

PROC_DECLARE(0x4fd9d0, internal_4fd9d0, public_4fd9d0);
extern "C" NAKED register_t __cdecl internal_4fd9d0()
{
    __asm
    {
        push esi
        push 0x2E
        mov esi, ecx
        call public_4f79f0
        mov al, byte ptr ss : [esp+8]
        mov byte ptr ds : [esi+0x80], al
        mov dword ptr ds : [esi+0x98], 0
        mov dword ptr ds : [esi], offset public_5da3f8
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4fd9d0)
    }
}
