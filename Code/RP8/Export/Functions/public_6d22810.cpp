#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22810);

PROC_DECLARE(0x6d22810, internal_6d22810, public_6d22810);
extern "C" NAKED register_t __cdecl internal_6d22810()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr ss : [ebp-8], ecx
        mov al, byte ptr ss : [ebp-1]
        mov ecx, dword ptr ss : [ebp-8]
        mov byte ptr ds : [ecx], al
        mov edx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx+0xC], 0
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edx+0x10], eax
        mov eax, dword ptr ss : [ebp-8]
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d22810)
    }
}
