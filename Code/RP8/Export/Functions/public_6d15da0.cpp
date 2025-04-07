#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15da0);

PROC_DECLARE(0x6d15da0, internal_6d15da0, public_6d15da0);
extern "C" NAKED register_t __cdecl internal_6d15da0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+8]
        fstp dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [edx+4]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [ebp-8]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+0x10]
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [edx]
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
        ret 
        UNREACHABLE_TRAP(0x6d15da0)
    }
}
