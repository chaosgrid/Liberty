#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62cb540);
CLANG_FORWARD_PROC_SYMBOL(public_62d20d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d21d0);
CLANG_FORWARD_PROC_SYMBOL(public_62e9030);
CLANG_FORWARD_PROC_SYMBOL(public_62e9120);

#define public_62cb5c4 _public_62cb5c4

PROC_DECLARE(0x62cb540, internal_62cb540, public_62cb540);
extern "C" NAKED register_t __cdecl internal_62cb540()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        call public_62d20d0
        mov ecx, dword ptr ds : [esi+0x24]
        xor ebx, ebx
        push ebx
        add ecx, 0x18
        mov byte ptr ds : [esi+0x285], bl
        mov dword ptr ds : [esi+0x288], ebx
        mov byte ptr ds : [esi+0x281], bl
        mov byte ptr ds : [esi+0x280], bl
        call public_62e9030
        mov ecx, dword ptr ds : [esi+0x24]
        push ebx
        add ecx, 0x18
        call public_62e9120
        push 3
        push 1
        mov ecx, esi
        call public_62d21d0
        mov eax, dword ptr ds : [esi+0x20]
        mov byte ptr ds : [esi+0x282], bl
        mov ecx, dword ptr ds : [eax+0x190]
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [esi+0x278], ecx
        mov byte ptr ds : [esi+0x284], bl
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62cb5c4
        mov byte ptr ds : [esi+0x283], 1
        public_62cb5c4 : nop
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [eax+0x17C]
        mov dword ptr ds : [esi+0x27C], ecx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62cb540)
    }
}

#undef public_62cb5c4
