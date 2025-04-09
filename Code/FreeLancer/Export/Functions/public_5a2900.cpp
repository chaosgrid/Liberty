#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5a2900, internal_5a2900, public_5a2900);
extern "C" NAKED register_t __cdecl internal_5a2900()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_67dd68], eax
        mov dword ptr ds : [public_67dd6c], eax
        mov dword ptr ds : [public_67dd70], eax
        mov dword ptr ds : [public_67dd74], eax
        mov dword ptr ds : [public_67dd78], eax
        mov dword ptr ds : [public_67dd7c], eax
        mov dword ptr ds : [public_67dd80], eax
        mov byte ptr ds : [public_67dd8c], 1
        mov byte ptr ds : [public_67dd8d], al
        ret 
        UNREACHABLE_TRAP(0x5a2900)
    }
}
