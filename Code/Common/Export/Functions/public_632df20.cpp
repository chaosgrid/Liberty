#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e270);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);

#define public_632df37 _public_632df37
#define public_632df4e _public_632df4e
#define public_632df60 _public_632df60

PROC_DECLARE(0x632df20, internal_632df20, public_632df20);
extern "C" NAKED register_t __cdecl internal_632df20()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x118]
        push edi
        xor edi, edi
        test eax, eax
        jle public_632df4e
        lea ebx, ds:[esi+0x98]
        public_632df37 : nop
        push ebx
        call public_6334430
        mov eax, dword ptr ds : [esi+0x118]
        add esp, 4
        inc edi
        add ebx, 4
        cmp edi, eax
        jl public_632df37
        public_632df4e : nop
        lea edi, ds:[esi+0x11C]
        mov ebx, 0x20
        lea esp, ss:[esp]
        public_632df60 : nop
        push edi
        call public_6334430
        add esp, 4
        add edi, 4
        dec ebx
        jne public_632df60
        lea ecx, ds:[esi+0x22C]
        call public_630e270
        pop edi
        lea ecx, ds:[esi+0x244]
        pop esi
        pop ebx
        jmp public_630e270
        UNREACHABLE_TRAP(0x632df20)
    }
}

#undef public_632df37
#undef public_632df4e
#undef public_632df60
