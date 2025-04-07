#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b74b20);
CLANG_FORWARD_PROC_SYMBOL(public_6b782ac);

PROC_DECLARE(0x6b74b20, internal_6b74b20, public_6b74b20);
extern "C" NAKED register_t __cdecl internal_6b74b20()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push ebx
        push esi
        mov esi, ecx
        mov cl, byte ptr ss : [esp+0xB]
        xor ebx, ebx
        push edi
        mov dword ptr ds : [esi+0x120], ebx
        push 0x28
        mov byte ptr ds : [esi+0x134], al
        mov byte ptr ds : [esi+0x135], cl
        mov byte ptr ds : [esi+0x140], bl
        call public_6b782ac
        mov cl, 1
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x24], cl
        mov byte ptr ds : [eax+0x25], bl
        mov dword ptr ds : [esi+0x13C], eax
        mov byte ptr ds : [eax+0x25], cl
        mov edx, dword ptr ds : [esi+0x13C]
        push 0x28
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [esi+0x13C]
        mov dword ptr ds : [eax+8], ebx
        mov edi, dword ptr ds : [esi+0x13C]
        call public_6b782ac
        mov cl, byte ptr ss : [esp+0x17]
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x24], bl
        mov byte ptr ds : [eax+0x25], bl
        mov dword ptr ds : [esi+0x138], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0x138]
        push 0xC
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x144], ebx
        mov byte ptr ds : [esi+0x148], cl
        call public_6b782ac
        add esp, 0xC
        lea edx, ds:[esi+0x154]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x14C], eax
        mov dword ptr ds : [esi+0x150], ebx
        push edx
        mov byte ptr ds : [esi+0xD], 0x5C
        mov byte ptr ds : [esi+0xE], bl
        mov dword ptr ds : [esi+0x130], 0xFFFFFFFF
        call dword ptr ds : [public_6b79040]
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6b74b20)
    }
}
