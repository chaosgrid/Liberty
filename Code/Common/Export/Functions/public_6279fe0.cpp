#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6279fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

PROC_DECLARE(0x6279fe0, internal_6279fe0, public_6279fe0);
extern "C" NAKED register_t __cdecl internal_6279fe0()
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
        push 0x20
        mov byte ptr ds : [esi+4], al
        mov byte ptr ds : [esi+5], cl
        mov byte ptr ds : [esi+0x10], bl
        call public_6391d9c
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x1D], bl
        mov cl, 1
        mov byte ptr ds : [eax+0x1C], cl
        mov dword ptr ds : [esi+0xC], eax
        mov byte ptr ds : [eax+0x1D], cl
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+8], ebx
        mov edi, dword ptr ds : [esi+0xC]
        push 0x20
        call public_6391d9c
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x1C], bl
        mov byte ptr ds : [eax+0x1D], bl
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        mov dword ptr ds : [eax+8], eax
        pop edi
        mov dword ptr ds : [esi+0x14], ebx
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6279fe0)
    }
}
