#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41b030);
CLANG_FORWARD_PROC_SYMBOL(public_4348b0);

#define public_4348c0 _public_4348c0
#define public_4348ed _public_4348ed
#define public_4348f0 _public_4348f0

PROC_DECLARE(0x4348b0, internal_4348b0, public_4348b0);
extern "C" NAKED register_t __cdecl internal_4348b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x800]
        push edi
        xor edi, edi
        test eax, eax
        jle public_4348ed
        public_4348c0 : nop
        lea eax, ds:[esi+edi*4+0x400]
        push eax
        call public_41b030
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+edi*4]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        push ecx
        push eax
        call dword ptr ds : [edx+0x3C]
        mov eax, dword ptr ds : [esi+0x800]
        inc edi
        cmp edi, eax
        jl public_4348c0
        public_4348ed : nop
        xor eax, eax
        nop 
        public_4348f0 : nop
        mov dword ptr ds : [esi+eax*4], 0xFFFFFFFF
        mov dword ptr ds : [esi+eax*4+0x400], 0
        inc eax
        cmp eax, 0x100
        jl public_4348f0
        pop edi
        mov dword ptr ds : [esi+0x800], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4348b0)
    }
}

#undef public_4348c0
#undef public_4348ed
#undef public_4348f0
