#include "Alchemy-PCH.h"

PROC_DECLARE(0x623ef40, internal_623ef40, public_623ef40);
extern "C" NAKED register_t __cdecl internal_623ef40()
{
    __asm
    {
        movsx eax, byte ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        xor edx, edx
        mov dl, byte ptr ds : [eax+public_6257168]
        not ecx
        mov eax, ecx
        and eax, 0xFF
        xor edx, eax
        shr ecx, 8
        mov eax, dword ptr ds : [edx*4+public_6256d68]
        xor eax, ecx
        not eax
        ret 
        UNREACHABLE_TRAP(0x623ef40)
    }
}
