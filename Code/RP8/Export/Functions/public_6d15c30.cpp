#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15c30);

PROC_DECLARE(0x6d15c30, internal_6d15c30, public_6d15c30);
extern "C" NAKED register_t __cdecl internal_6d15c30()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+0x20], 0x3F800000
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+0x10], 0x3F800000
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx], 0x3F800000
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+0x1C], 0
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+0x14], 0
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+0xC], 0
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-4]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d15c30)
    }
}
