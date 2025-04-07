#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf3e9);

PROC_DECLARE(0x6acf3e9, internal_6acf3e9, public_6acf3e9);
extern "C" NAKED register_t __cdecl internal_6acf3e9()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+0xC]
        add eax, 0xC
        mov dword ptr ss : [ebp-4], eax
        mov ebx, dword ptr fs : [0]
        mov eax, dword ptr ds : [ebx]
        mov dword ptr fs : [0], eax
        mov eax, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ss : [ebp+0xC]
        mov esp, dword ptr ds : [ebx-4]
        mov ebp, dword ptr ss : [ebp-4]
        jmp eax
        UNREACHABLE_TRAP(0x6acf3e9)
    }
}
