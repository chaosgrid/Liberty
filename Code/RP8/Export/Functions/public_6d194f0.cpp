#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d194f0);

PROC_DECLARE(0x6d194f0, internal_6d194f0, public_6d194f0);
extern "C" NAKED register_t __cdecl internal_6d194f0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx], 0
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+0xC], 0
        mov ecx, dword ptr ss : [ebp-4]
        mov byte ptr ds : [ecx+0x10], 0
        mov eax, dword ptr ss : [ebp-4]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d194f0)
    }
}
