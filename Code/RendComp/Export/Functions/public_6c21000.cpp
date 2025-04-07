#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21000);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

PROC_DECLARE(0x6c21000, internal_6c21000, public_6c21000);
extern "C" NAKED register_t __cdecl internal_6c21000()
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
        mov byte ptr ds : [esi+0xC], al
        mov byte ptr ds : [esi+0xD], cl
        mov byte ptr ds : [esi+0x18], bl
        call public_6c34eac
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+0x14], eax
        mov byte ptr ds : [eax+0x15], 1
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax+8], ebx
        mov edi, dword ptr ds : [esi+0x14]
        push 0x18
        call public_6c34eac
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x14], bl
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x1C], ebx
        add esp, 8
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ds : [esi+0x28], bl
        pop edi
        mov dword ptr ds : [esi+0x30], 1
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6c21000)
    }
}
