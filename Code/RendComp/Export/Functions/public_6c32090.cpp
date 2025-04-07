#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c32090);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

PROC_DECLARE(0x6c32090, internal_6c32090, public_6c32090);
extern "C" NAKED register_t __cdecl internal_6c32090()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push ebx
        push esi
        mov esi, ecx
        mov cl, byte ptr ss : [esp+0xB]
        mov dword ptr ds : [esi], offset public_6c36570
        push edi
        xor ebx, ebx
        push 0x28
        mov byte ptr ds : [esi+8], al
        mov byte ptr ds : [esi+9], cl
        mov byte ptr ds : [esi+0x14], bl
        call public_6c34eac
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x25], bl
        mov cl, 1
        mov byte ptr ds : [eax+0x24], cl
        mov dword ptr ds : [esi+0x10], eax
        mov byte ptr ds : [eax+0x25], cl
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+8], ebx
        mov edi, dword ptr ds : [esi+0x10]
        push 0x28
        call public_6c34eac
        mov cl, byte ptr ss : [esp+0x17]
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x24], bl
        mov byte ptr ds : [eax+0x25], bl
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x18], ebx
        push 0xC
        mov byte ptr ds : [esi+0x1C], cl
        call public_6c34eac
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x24], ebx
        add esp, 0xC
        mov byte ptr ds : [esi+0x2C], bl
        mov dword ptr ds : [esi+0x28], ebx
        pop edi
        mov dword ptr ds : [esi], offset public_6c367ac
        mov dword ptr ds : [esi+4], offset public_6c36750
        mov eax, esi
        pop esi
        mov dword ptr ds : [public_6c37d4c], ebx
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6c32090)
    }
}
