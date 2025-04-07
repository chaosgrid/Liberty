#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec5570);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

PROC_DECLARE(0x6ec5570, internal_6ec5570, public_6ec5570);
extern "C" NAKED register_t __cdecl internal_6ec5570()
{
    __asm
    {
        push ebx
        push esi
        push edi
        push 0x28
        mov esi, ecx
        call public_6ed0c5c
        xor ebx, ebx
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x25], bl
        mov cl, 1
        mov byte ptr ds : [eax+0x24], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x25], cl
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebx
        mov edi, dword ptr ds : [esi+8]
        push 0x28
        call public_6ed0c5c
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x24], bl
        mov byte ptr ds : [eax+0x25], bl
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        pop edi
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ec5570)
    }
}
