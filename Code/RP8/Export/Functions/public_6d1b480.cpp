#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b480);

PROC_DECLARE(0x6d1b480, internal_6d1b480, public_6d1b480);
extern "C" NAKED register_t __cdecl internal_6d1b480()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp+8]
        or eax, 8
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+0xC], 0
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+0x10], 0
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [edx+0x20], 0
        mov eax, dword ptr ss : [ebp-4]
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d1b480)
    }
}
