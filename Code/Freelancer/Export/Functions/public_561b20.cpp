#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_561b20);
CLANG_FORWARD_PROC_SYMBOL(public_564570);
CLANG_FORWARD_PROC_SYMBOL(public_579890);
CLANG_FORWARD_PROC_SYMBOL(public_579a90);

PROC_DECLARE(0x561b20, internal_561b20, public_561b20);
extern "C" NAKED register_t __cdecl internal_561b20()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x110]
        mov byte ptr ds : [esi+0xE0], 1
        xor ebx, ebx
        mov dword ptr ds : [esi+0xD8], ebx
        mov dword ptr ds : [esi+0xDC], ebx
        mov dl, byte ptr ds : [eax+0x6C]
        mov cl, 0xFC
        and dl, cl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x104]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x11C]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x114]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x118]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x108]
        mov byte ptr ds : [eax+0x498], bl
        mov ecx, dword ptr ds : [esi+0x10C]
        mov byte ptr ds : [ecx+0x498], bl
        mov ecx, dword ptr ds : [esi+0x108]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0x10C]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0x110]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0x108]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0x10C]
        push ebx
        call public_579890
        push 0x1B
        call public_564570
        add esp, 4
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x561b20)
    }
}
