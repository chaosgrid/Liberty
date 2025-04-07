#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4a73);

PROC_DECLARE(0x6ef4a73, internal_6ef4a73, public_6ef4a73);
extern "C" NAKED register_t __cdecl internal_6ef4a73()
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
        pop edi
        pop esi
        pop ebx
        leave 
        ret 8
        UNREACHABLE_TRAP(0x6ef4a73)
    }
}
