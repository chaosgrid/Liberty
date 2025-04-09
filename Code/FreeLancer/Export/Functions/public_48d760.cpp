#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48d760);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x48d760, internal_48d760, public_48d760);
extern "C" NAKED register_t __cdecl internal_48d760()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67204c]
        push eax
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [public_67204c], eax
        mov dword ptr ds : [public_672050], eax
        mov dword ptr ds : [public_672054], eax
        ret 
        UNREACHABLE_TRAP(0x48d760)
    }
}
