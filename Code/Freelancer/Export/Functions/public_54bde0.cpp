#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54bde0);

PROC_DECLARE(0x54bde0, internal_54bde0, public_54bde0);
extern "C" NAKED register_t __cdecl internal_54bde0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_679794], ecx
        mov ecx, offset public_679790
        mov dword ptr ds : [public_6797a8], 0x50
        mov dword ptr ds : [public_6797ac], 0x1E
        call dword ptr ds : [public_5c69a0]
        xor eax, eax
        mov dword ptr ds : [public_6797b0], eax
        mov dword ptr ds : [public_6797b4], eax
        ret 
        UNREACHABLE_TRAP(0x54bde0)
    }
}
