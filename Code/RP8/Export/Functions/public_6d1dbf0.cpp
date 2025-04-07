#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1dbf0);

PROC_DECLARE(0x6d1dbf0, internal_6d1dbf0, public_6d1dbf0);
extern "C" NAKED register_t __cdecl internal_6d1dbf0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+8], 0
        mov eax, dword ptr ss : [ebp-4]
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d1dbf0)
    }
}
