#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f06260);
CLANG_FORWARD_PROC_SYMBOL(public_6f06300);

PROC_DECLARE(0x6f06260, internal_6f06260, public_6f06260);
extern "C" NAKED register_t __cdecl internal_6f06260()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        mov esi, ecx
        push ebp
        mov dword ptr ds : [esi+0x54], eax
        mov ecx, dword ptr ds : [ebx]
        sub esp, 0x10
        mov dword ptr ds : [esi+0x58], ecx
        mov ecx, esp
        mov dword ptr ss : [esp+0x28], esp
        push edx
        call public_6eb35b0
        push edi
        mov ecx, esi
        call public_6f06300
        push ebp
        sub esp, 0x10
        mov dword ptr ds : [esi+0x5C], eax
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, esp
        mov dword ptr ss : [esp+0x28], esp
        push eax
        call public_6eb35b0
        push ebx
        mov ecx, esi
        call public_6f06300
        pop edi
        mov dword ptr ds : [esi+0x60], eax
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f06260)
    }
}
