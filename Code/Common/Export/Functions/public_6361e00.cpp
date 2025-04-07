#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356920);
CLANG_FORWARD_PROC_SYMBOL(public_6361e00);

PROC_DECLARE(0x6361e00, internal_6361e00, public_6361e00);
extern "C" NAKED register_t __cdecl internal_6361e00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push eax
        mov dword ptr ds : [esi], offset public_63a57e8
        call public_6356920
        mov dword ptr ds : [esi+4], eax
        add esp, 4
        mov dword ptr ds : [esi+8], 0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6361e00)
    }
}
