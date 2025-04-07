#include "Common-PCH.h"

PROC_DECLARE(0x630a950, internal_630a950, public_630a950);
extern "C" NAKED register_t __cdecl internal_630a950()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a3480]
        mov dword ptr ds : [public_63fcf20], eax
        ret 
        UNREACHABLE_TRAP(0x630a950)
    }
}
