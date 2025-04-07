#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2ba02);

PROC_DECLARE(0x6d2ba02, internal_6d2ba02, public_6d2ba02);
extern "C" NAKED register_t __cdecl internal_6d2ba02()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+0x1400], 0
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+0x1404]
        add edx, 1
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+0x1404], edx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2ba02)
    }
}
