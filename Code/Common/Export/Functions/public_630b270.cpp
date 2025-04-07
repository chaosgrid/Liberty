#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630b270);

PROC_DECLARE(0x630b270, internal_630b270, public_630b270);
extern "C" NAKED register_t __cdecl internal_630b270()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov byte ptr ds : [eax], cl
        mov dword ptr ds : [eax+0x80], ecx
        mov dword ptr ds : [eax+0x88], ecx
        mov dword ptr ds : [eax+0x84], ecx
        ret 
        UNREACHABLE_TRAP(0x630b270)
    }
}
