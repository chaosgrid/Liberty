#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efec10);
CLANG_FORWARD_PROC_SYMBOL(public_6f33f20);

PROC_DECLARE(0x6f33f20, internal_6f33f20, public_6f33f20);
extern "C" NAKED register_t __cdecl internal_6f33f20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6efec10
        fstp qword ptr ds : [esi+0x1A8]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x1A0], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f33f20)
    }
}
