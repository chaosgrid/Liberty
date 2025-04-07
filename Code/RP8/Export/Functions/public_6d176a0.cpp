#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d176a0);

PROC_DECLARE(0x6d176a0, internal_6d176a0, public_6d176a0);
extern "C" NAKED register_t __cdecl internal_6d176a0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ss : [ebp-4]
        mov al, byte ptr ss : [ebp+0x18]
        mov byte ptr ds : [edx+0x10], al
        mov esp, ebp
        pop ebp
        ret 0x14
        UNREACHABLE_TRAP(0x6d176a0)
    }
}
