#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2800);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4140);
CLANG_FORWARD_PROC_SYMBOL(public_6ef42a6);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5187);
CLANG_FORWARD_PROC_SYMBOL(public_6ef52ac);
CLANG_FORWARD_JUMP_SYMBOL(public_6efbc88);

PROC_DECLARE(0x6ef4140, internal_6ef4140, public_6ef4140);
extern "C" NAKED register_t __cdecl internal_6ef4140()
{
    __asm
    {
        mov eax, public_6efbc88
        call public_6ef52ac
        push ecx
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        push edi
        mov esi, ecx
        push ebx
        mov dword ptr ss : [ebp-0x10], esi
        call public_6ef5187
        mov al, byte ptr ds : [ebx+0xC]
        and dword ptr ss : [ebp-4], 0
        add ebx, 0xC
        lea edi, ds:[esi+0xC]
        push 0
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
        UNREACHABLE_TRAP(0x6ef4140)
    }
}
