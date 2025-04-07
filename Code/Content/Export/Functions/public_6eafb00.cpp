#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eafb00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

PROC_DECLARE(0x6eafb00, internal_6eafb00, public_6eafb00);
extern "C" NAKED register_t __cdecl internal_6eafb00()
{
    __asm
    {
        push ebx
        push esi
        push edi
        push 0x38
        mov esi, ecx
        call public_6fa912a
        xor ebx, ebx
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x35], bl
        mov cl, 1
        mov byte ptr ds : [eax+0x34], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x35], cl
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebx
        mov edi, dword ptr ds : [esi+8]
        push 0x38
        call public_6fa912a
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x34], bl
        mov byte ptr ds : [eax+0x35], bl
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
        UNREACHABLE_TRAP(0x6eafb00)
    }
}
