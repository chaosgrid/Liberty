#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15d50);

PROC_DECLARE(0x6d15d50, internal_6d15d50, public_6d15d50);
extern "C" NAKED register_t __cdecl internal_6d15d50()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov dword ptr ss : [ebp-0x10], ecx
        mov eax, dword ptr ss : [ebp-0x10]
        fld dword ptr ds : [eax+8]
        fchs 
        fstp dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ss : [ebp-0x10]
        fld dword ptr ds : [ecx+4]
        fchs 
        fstp dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp-0x10]
        fld dword ptr ds : [edx]
        fchs 
        fstp dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d15d50)
    }
}
