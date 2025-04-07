#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eca5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

PROC_DECLARE(0x6eca5d0, internal_6eca5d0, public_6eca5d0);
extern "C" NAKED register_t __cdecl internal_6eca5d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x80]
        push eax
        call public_6ed0c50
        xor eax, eax
        mov dword ptr ds : [esi+0x80], eax
        mov dword ptr ds : [esi+0x84], eax
        mov dword ptr ds : [esi+0x88], eax
        mov dword ptr ds : [esi+0x8C], eax
        add esp, 4
        mov dword ptr ds : [public_6ed57f8], eax
        mov dword ptr ds : [public_6ed57fc], eax
        mov dword ptr ds : [public_6ed5800], eax
        mov dword ptr ds : [public_6ed5804], eax
        mov dword ptr ds : [public_6ed5808], eax
        mov dword ptr ds : [public_6ed580c], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eca5d0)
    }
}
