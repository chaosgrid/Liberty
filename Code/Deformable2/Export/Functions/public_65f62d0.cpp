#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f62d0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

PROC_DECLARE(0x65f62d0, internal_65f62d0, public_65f62d0);
extern "C" NAKED register_t __cdecl internal_65f62d0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        push 0x1C
        mov esi, ecx
        call public_6600bb6
        xor ebx, ebx
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x19], bl
        mov cl, 1
        mov byte ptr ds : [eax+0x18], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x19], cl
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebx
        mov edi, dword ptr ds : [esi+8]
        push 0x1C
        call public_6600bb6
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x18], bl
        mov byte ptr ds : [eax+0x19], bl
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
        UNREACHABLE_TRAP(0x65f62d0)
    }
}
