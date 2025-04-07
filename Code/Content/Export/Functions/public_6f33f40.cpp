#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33f40);

PROC_DECLARE(0x6f33f40, internal_6f33f40, public_6f33f40);
extern "C" NAKED register_t __cdecl internal_6f33f40()
{
    __asm
    {
        sub esp, 0xC
        xor eax, eax
        push esi
        mov esi, eax
        lea edx, ds:[ecx+0x190]
        mov dword ptr ds : [edx], esi
        mov dword ptr ds : [edx+4], esi
        mov dword ptr ds : [edx+8], esi
        mov dword ptr ds : [ecx+0x188], eax
        mov dword ptr ss : [esp+4], eax
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ds : [ecx+0x19C], eax
        mov dword ptr ds : [ecx+0x18C], eax
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f33f40)
    }
}
