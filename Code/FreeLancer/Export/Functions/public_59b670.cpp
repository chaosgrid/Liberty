#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59b670);

PROC_DECLARE(0x59b670, internal_59b670, public_59b670);
extern "C" NAKED register_t __cdecl internal_59b670()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push eax
        mov dword ptr ds : [esi], eax
        call dword ptr ds : [public_5c6d14]
        mov dword ptr ds : [esi+4], eax
        add esp, 4
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x59b670)
    }
}
