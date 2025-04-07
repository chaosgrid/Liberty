#include "RP8-PCH.h"

PROC_DECLARE(0x6d27ff0, internal_6d27ff0, public_6d27ff0);
extern "C" NAKED register_t __cdecl internal_6d27ff0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [eax+0x18]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d27ff0)
    }
}
