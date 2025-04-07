#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2800);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4096);
CLANG_FORWARD_PROC_SYMBOL(public_6ef42a6);
CLANG_FORWARD_PROC_SYMBOL(public_6ef514a);
CLANG_FORWARD_PROC_SYMBOL(public_6ef52ac);
CLANG_FORWARD_JUMP_SYMBOL(public_6efbc74);

PROC_DECLARE(0x6ef4096, internal_6ef4096, public_6ef4096);
extern "C" NAKED register_t __cdecl internal_6ef4096()
{
    __asm
    {
        mov eax, public_6efbc74
        call public_6ef52ac
        push ecx
        push ecx
        push ebx
        push esi
        lea eax, ss:[ebp-0x10]
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [ebp-0x14], esi
        mov dword ptr ss : [ebp-0x10], offset public_6efc2a0
        call public_6ef514a
        mov ebx, dword ptr ss : [ebp+8]
        and dword ptr ss : [ebp-4], 0
        lea edi, ds:[esi+0xC]
        push 0
        mov al, byte ptr ds : [ebx]
        mov ecx, edi
        mov byte ptr ds : [edi], al
        call public_6ef2800
        push dword ptr ds : [public_6efc29c]
        mov ecx, edi
        push 0
        push ebx
        call public_6ef42a6
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [esi], offset public_6efc290
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        leave 
        ret 4
        UNREACHABLE_TRAP(0x6ef4096)
    }
}
