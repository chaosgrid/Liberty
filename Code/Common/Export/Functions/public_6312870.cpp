#include "Common-PCH.h"

PROC_DECLARE(0x6312870, internal_6312870, public_6312870);
extern "C" NAKED register_t __cdecl internal_6312870()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+0xC], edx
        mov dword ptr ds : [ecx+0x10], eax
        mov byte ptr ds : [ecx+0x14], al
        ret 8
        UNREACHABLE_TRAP(0x6312870)
    }
}
