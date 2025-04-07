#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6625c70);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

PROC_DECLARE(0x6625c70, internal_6625c70, public_6625c70);
extern "C" NAKED register_t __cdecl internal_6625c70()
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
        mov dword ptr ds : [esi+4], offset public_66297a0
        push 0x20
        mov byte ptr ds : [esi+0x10], al
        mov byte ptr ds : [esi+0x11], cl
        mov byte ptr ds : [esi+0x1C], bl
        call public_66281dc
        mov cl, 1
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x1C], cl
        mov byte ptr ds : [eax+0x1D], bl
        mov dword ptr ds : [esi+0x18], eax
        mov byte ptr ds : [eax+0x1D], cl
        mov edx, dword ptr ds : [esi+0x18]
        push 0x20
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [eax+8], ebx
        mov edi, dword ptr ds : [esi+0x18]
        call public_66281dc
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x1C], bl
        mov byte ptr ds : [eax+0x1D], bl
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0x14]
        add esp, 8
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov byte ptr ds : [esi+0x2C], bl
        mov dword ptr ds : [esi], offset public_6629780
        mov dword ptr ds : [esi+4], offset public_662974c
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6625c70)
    }
}
