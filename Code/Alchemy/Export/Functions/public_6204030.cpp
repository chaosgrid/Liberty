#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6204030);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

PROC_DECLARE(0x6204030, internal_6204030, public_6204030);
extern "C" NAKED register_t __cdecl internal_6204030()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [eax]
        push edi
        push 0x18
        mov byte ptr ds : [esi], cl
        mov al, byte ptr ds : [edx]
        mov cl, byte ptr ss : [esp+0x18]
        mov byte ptr ds : [esi+1], al
        mov byte ptr ds : [esi+0xC], cl
        call public_624612c
        xor ebx, ebx
        mov cl, 1
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x14], cl
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x15], cl
        mov edx, dword ptr ds : [esi+8]
        push 0x18
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ebx
        mov edi, dword ptr ds : [esi+8]
        call public_624612c
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x14], bl
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x10], ebx
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6204030)
    }
}
