#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50c620);
CLANG_FORWARD_PROC_SYMBOL(public_51c9e0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_51ca20 _public_51ca20
#define public_51ca34 _public_51ca34

PROC_DECLARE(0x51c9e0, internal_51c9e0, public_51c9e0);
extern "C" NAKED register_t __cdecl internal_51c9e0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        push 0x25
        mov ebx, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51ca34
        push 0x24
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51ca34
        push 0x28
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51ca34
        call public_50c620
        mov edi, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_51ca34
        lea ecx, ds:[ecx]
        public_51ca20 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        push 0x3F800000
        push ebx
        call dword ptr ds : [eax+0x14]
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_51ca20
        public_51ca34 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x51c9e0)
    }
}

#undef public_51ca20
#undef public_51ca34
