#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_564570);
CLANG_FORWARD_PROC_SYMBOL(public_56ad40);
CLANG_FORWARD_PROC_SYMBOL(public_579890);
CLANG_FORWARD_PROC_SYMBOL(public_579a90);

PROC_DECLARE(0x56ad40, internal_56ad40, public_56ad40);
extern "C" NAKED register_t __cdecl internal_56ad40()
{
    __asm
    {
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2C0]
        mov byte ptr ds : [esi+0x5F0], 1
        mov dword ptr ds : [esi+0x5E8], ebx
        mov dword ptr ds : [esi+0x5EC], ebx
        mov byte ptr ds : [eax+0x498], bl
        mov ecx, dword ptr ds : [esi+0x2C4]
        mov byte ptr ds : [ecx+0x498], bl
        mov edx, dword ptr ds : [esi+0x2C8]
        mov byte ptr ds : [edx+0x498], bl
        mov eax, dword ptr ds : [esi+0x2CC]
        mov byte ptr ds : [eax+0x498], bl
        mov ecx, dword ptr ds : [esi+0x2D0]
        mov byte ptr ds : [ecx+0x498], bl
        mov ecx, dword ptr ds : [esi+0x2C0]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0x2C4]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0x2C8]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0x2CC]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0x2D0]
        push 1
        call public_579a90
        mov eax, dword ptr ds : [esi+0x2E4]
        mov dl, byte ptr ds : [eax+0x6C]
        mov cl, 0xFC
        and dl, cl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x2E8]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x2E0]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x2B8]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x2BC]
        mov dl, byte ptr ds : [eax+0x6C]
        and dl, cl
        push 0x1B
        mov byte ptr ds : [eax+0x6C], dl
        call public_564570
        mov ecx, dword ptr ds : [esi+0x2C0]
        add esp, 4
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0x2C4]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0x2C8]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0x2CC]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0x2D0]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0x2E4]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0x2E8]
        push ebx
        call public_579890
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x56ad40)
    }
}
