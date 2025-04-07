#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2bd86);

PROC_DECLARE(0x6d2bd86, internal_6d2bd86, public_6d2bd86);
extern "C" NAKED register_t __cdecl internal_6d2bd86()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov al, byte ptr ss : [ebp-1]
        mov byte ptr ds : [public_6d728f0], al
        mov dword ptr ds : [public_6d728f4], 0
        mov dword ptr ds : [public_6d728f8], 0
        mov dword ptr ds : [public_6d728fc], 0
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2bd86)
    }
}
