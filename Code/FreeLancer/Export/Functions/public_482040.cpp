#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_47af30);
CLANG_FORWARD_PROC_SYMBOL(public_482040);
CLANG_FORWARD_PROC_SYMBOL(public_4c62b0);
CLANG_FORWARD_PROC_SYMBOL(public_4c6e90);
CLANG_FORWARD_PROC_SYMBOL(public_586b70);

#define public_48211a _public_48211a

PROC_DECLARE(0x482040, internal_482040, public_482040);
extern "C" NAKED register_t __cdecl internal_482040()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x974]
        test eax, eax
        mov byte ptr ds : [esi+0x98C], 0
        je public_48211a
        mov ecx, dword ptr ds : [esi+0x9E4]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0x461
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x9E0]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0x330
        push 3
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x9A0]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0x48A
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x9A8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0x48A
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x974]
        mov ecx, dword ptr ds : [eax+0x348]
        push 1
        push ecx
        call public_4c6e90
        mov edx, dword ptr ds : [esi+0x974]
        add esp, 8
        mov dword ptr ds : [esi+0x9FC], eax
        mov eax, dword ptr ds : [esi+0x348]
        push 1
        lea ecx, ds:[esi+0x34C]
        push ecx
        mov dword ptr ds : [edx+0x348], eax
        mov ecx, dword ptr ds : [esi+0x974]
        add ecx, 0x330
        call public_4c62b0
        mov edx, dword ptr ds : [esi+0x974]
        mov ecx, dword ptr ds : [edx+0x330]
        call public_586b70
        mov ecx, dword ptr ds : [esi+0x974]
        pop esi
        jmp public_47af30
        public_48211a : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x482040)
    }
}

#undef public_48211a
