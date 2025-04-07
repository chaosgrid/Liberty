#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4afd);
CLANG_FORWARD_PROC_SYMBOL(public_6ef78c1);

PROC_DECLARE(0x6ef4afd, internal_6ef4afd, public_6ef4afd);
extern "C" NAKED register_t __cdecl internal_6ef4afd()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 4
        push ebx
        push esi
        push edi
        cld 
        mov dword ptr ss : [ebp-4], eax
        xor eax, eax
        push eax
        push eax
        push eax
        push dword ptr ss : [ebp-4]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6ef78c1
        add esp, 0x20
        mov dword ptr ss : [ebp+0x14], eax
        pop edi
        pop esi
        pop ebx
        mov eax, dword ptr ss : [ebp+0x14]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ef4afd)
    }
}
