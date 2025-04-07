#include "FLServer-PCH.h"

PROC_DECLARE(0x418500, internal_418500, public_418500);
extern "C" NAKED register_t __cdecl internal_418500()
{
    __asm
    {
        movsx eax, byte ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        xor edx, edx
        mov dl, byte ptr ds : [eax+public_425dd8]
        not ecx
        mov eax, ecx
        and eax, 0xFF
        xor edx, eax
        shr ecx, 8
        mov eax, dword ptr ds : [edx*4+public_4259d8]
        xor eax, ecx
        not eax
        ret 
        UNREACHABLE_TRAP(0x418500)
    }
}
