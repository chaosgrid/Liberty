#include "RP8-PCH.h"

PROC_DECLARE(0x6d28090, internal_6d28090, public_6d28090);
extern "C" NAKED register_t __cdecl internal_6d28090()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp-4]
        mov al, byte ptr ds : [eax+0x1C]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d28090)
    }
}
