#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4b33);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4b87);
CLANG_FORWARD_PROC_SYMBOL(public_6ef80c0);

PROC_DECLARE(0x6ef4b33, internal_6ef4b33, public_6ef4b33);
extern "C" NAKED register_t __cdecl internal_6ef4b33()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov eax, dword ptr ss : [ebp+0xC]
        and dword ptr ss : [ebp-0x14], 0
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0xC], eax
        mov eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp-0x10], offset _public_6ef4b87
        inc eax
        mov dword ptr ss : [ebp-8], ecx
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr fs : [0]
        mov dword ptr ss : [ebp-0x14], eax
        lea eax, ss:[ebp-0x14]
        mov dword ptr fs : [0], eax
        push dword ptr ss : [ebp+0x18]
        push ecx
        push dword ptr ss : [ebp+0x10]
        call public_6ef80c0
        mov ecx, eax
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr fs : [0], eax
        mov eax, ecx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef4b33)
    }
}
