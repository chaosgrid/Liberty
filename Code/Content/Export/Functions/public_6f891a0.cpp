#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f891a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

PROC_DECLARE(0x6f891a0, internal_6f891a0, public_6f891a0);
extern "C" NAKED register_t __cdecl internal_6f891a0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push ebx
        push esi
        mov esi, ecx
        mov cl, byte ptr ss : [esp+0xB]
        push edi
        xor ebx, ebx
        push 0x18
        mov byte ptr ds : [esi+4], al
        mov byte ptr ds : [esi+5], cl
        mov byte ptr ds : [esi+0x10], bl
        call public_6fa912a
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x15], bl
        mov cl, 1
        mov byte ptr ds : [eax+0x14], cl
        mov dword ptr ds : [esi+0xC], eax
        mov byte ptr ds : [eax+0x15], cl
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+8], ebx
        mov edi, dword ptr ds : [esi+0xC]
        push 0x18
        call public_6fa912a
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x14], bl
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x14], ebx
        pop edi
        mov dword ptr ds : [esi], offset public_6fbc6cc
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f891a0)
    }
}
