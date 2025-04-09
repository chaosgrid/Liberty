#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_564570);
CLANG_FORWARD_PROC_SYMBOL(public_571fc0);
CLANG_FORWARD_PROC_SYMBOL(public_579890);
CLANG_FORWARD_PROC_SYMBOL(public_579a90);

PROC_DECLARE(0x571fc0, internal_571fc0, public_571fc0);
extern "C" NAKED register_t __cdecl internal_571fc0()
{
    __asm
    {
        push ebx
        xor ebx, ebx
        mov al, 0xFC
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xC4]
        mov byte ptr ds : [esi+0x110], 1
        mov dword ptr ds : [esi+0x108], ebx
        mov dword ptr ds : [esi+0x10C], ebx
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xC8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xE8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xD0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xD8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xDC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xCC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0xEC]
        and byte ptr ds : [ecx+0x6C], al
        mov eax, dword ptr ds : [esi+0xB8]
        mov byte ptr ds : [eax+0x498], bl
        mov ecx, dword ptr ds : [esi+0xBC]
        mov byte ptr ds : [ecx+0x498], bl
        mov edx, dword ptr ds : [esi+0xC0]
        mov byte ptr ds : [edx+0x498], bl
        mov eax, dword ptr ds : [esi+0xD4]
        mov byte ptr ds : [eax+0x498], bl
        mov ecx, dword ptr ds : [esi+0xB8]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xBC]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xC0]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0xD4]
        push 1
        call public_579a90
        push 0x1B
        call public_564570
        mov ecx, dword ptr ds : [esi+0xC4]
        add esp, 4
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0xB8]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0xBC]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0xC0]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0xD0]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0xE8]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0xD4]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0xCC]
        push ebx
        call public_579890
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x571fc0)
    }
}
