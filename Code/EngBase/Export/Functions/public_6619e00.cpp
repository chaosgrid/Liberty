#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6619e00);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

PROC_DECLARE(0x6619e00, internal_6619e00, public_6619e00);
extern "C" NAKED register_t __cdecl internal_6619e00()
{
    __asm
    {
        push ebx
        push esi
        push edi
        push 0x30
        mov esi, ecx
        call public_66281dc
        xor ebx, ebx
        mov cl, 1
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x2C], cl
        mov byte ptr ds : [eax+0x2D], bl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x2D], cl
        mov eax, dword ptr ds : [esi+8]
        push 0x30
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebx
        mov edi, dword ptr ds : [esi+8]
        call public_66281dc
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x2C], bl
        mov byte ptr ds : [eax+0x2D], bl
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x10], ebx
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6619e00)
    }
}
