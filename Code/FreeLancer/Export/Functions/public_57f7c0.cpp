#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57f7c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x57f7c0, internal_57f7c0, public_57f7c0);
extern "C" NAKED register_t __cdecl internal_57f7c0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        push 0x10
        mov esi, ecx
        call public_5b7e84
        xor ebx, ebx
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0xF], bl
        mov cl, 1
        mov byte ptr ds : [eax+0xE], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0xF], cl
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebx
        mov edi, dword ptr ds : [esi+8]
        push 0x10
        call public_5b7e84
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0xE], bl
        mov byte ptr ds : [eax+0xF], bl
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
        UNREACHABLE_TRAP(0x57f7c0)
    }
}
