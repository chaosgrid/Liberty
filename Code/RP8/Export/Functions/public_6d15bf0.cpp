#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc30);

PROC_DECLARE(0x6d15bf0, internal_6d15bf0, public_6d15bf0);
extern "C" NAKED register_t __cdecl internal_6d15bf0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov dword ptr ss : [ebp-0xC], ecx
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, 0x10
        mov dword ptr ss : [ebp-4], eax
        push 0
        call public_6d5cc30
        add esp, 4
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, 0x14
        mov dword ptr ss : [ebp-8], edx
        push 0
        call public_6d5cc30
        add esp, 4
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [ebp-0xC]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d15bf0)
    }
}
