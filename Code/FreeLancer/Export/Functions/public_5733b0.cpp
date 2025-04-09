#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53f330);
CLANG_FORWARD_PROC_SYMBOL(public_564570);
CLANG_FORWARD_PROC_SYMBOL(public_579890);
CLANG_FORWARD_PROC_SYMBOL(public_579a90);

#define public_57343a _public_57343a

PROC_DECLARE(0x5733b0, internal_5733b0, public_5733b0);
extern "C" NAKED register_t __cdecl internal_5733b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xF
        push esi
        mov esi, ecx
        jne public_57343a
        mov eax, dword ptr ds : [esi+0x68]
        push ebx
        xor ebx, ebx
        mov byte ptr ds : [esi+0x40], 1
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov byte ptr ds : [eax+0x498], bl
        mov ecx, dword ptr ds : [esi+0x64]
        mov byte ptr ds : [ecx+0x498], bl
        mov ecx, dword ptr ds : [esi+0x68]
        push 1
        call public_579a90
        mov ecx, dword ptr ds : [esi+0x64]
        push 1
        call public_579a90
        mov eax, dword ptr ds : [esi+0x60]
        mov dl, byte ptr ds : [eax+0x6C]
        mov cl, 0xFC
        and dl, cl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x6C]
        mov dl, byte ptr ds : [eax+0x6C]
        and dl, cl
        push 0x1B
        mov byte ptr ds : [eax+0x6C], dl
        call public_564570
        mov ecx, dword ptr ds : [esi+0x60]
        add esp, 4
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0x64]
        push ebx
        call public_579890
        mov ecx, dword ptr ds : [esi+0x68]
        push ebx
        call public_579890
        pop ebx
        mov dword ptr ds : [esi+0x44], 0xFFFFFFFF
        mov al, 1
        pop esi
        ret 4
        public_57343a : nop
        push eax
        mov ecx, esi
        call public_53f330
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5733b0)
    }
}

#undef public_57343a
