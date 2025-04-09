#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417d50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x417d50, internal_417d50, public_417d50);
extern "C" NAKED register_t __cdecl internal_417d50()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov cl, byte ptr ss : [esp+0xB]
        mov dword ptr ds : [esi], offset public_5c8e1c
        mov dword ptr ds : [esi+4], ebx
        mov byte ptr ds : [esi+8], bl
        mov dword ptr ds : [esi+0x48], ebx
        mov byte ptr ds : [esi+0x4C], bl
        mov dword ptr ds : [esi+0x8C], ebx
        mov byte ptr ds : [esi+0x90], bl
        push edi
        push 0x18
        mov byte ptr ds : [esi+0x15C], al
        mov byte ptr ds : [esi+0x15D], cl
        mov byte ptr ds : [esi+0x168], bl
        call public_5b7e84
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x15], bl
        mov cl, 1
        mov byte ptr ds : [eax+0x14], cl
        mov dword ptr ds : [esi+0x164], eax
        mov byte ptr ds : [eax+0x15], cl
        mov edx, dword ptr ds : [esi+0x164]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [esi+0x164]
        mov dword ptr ds : [eax+8], ebx
        mov edi, dword ptr ds : [esi+0x164]
        push 0x18
        call public_5b7e84
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x14], bl
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+0x160], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0x160]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x16C], ebx
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+0x118], ebx
        mov dword ptr ds : [esi+0x11C], ebx
        mov dword ptr ds : [esi+0xD8], ebx
        mov dword ptr ds : [esi+0xD0], ebx
        mov dword ptr ds : [esi+0xD4], ebx
        mov dword ptr ds : [esi+0x158], ebx
        mov dword ptr ds : [esi], offset public_5c8dec
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x417d50)
    }
}
