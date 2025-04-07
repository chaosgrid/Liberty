#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630bfe0);
CLANG_FORWARD_PROC_SYMBOL(public_632ca20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_630c020 _public_630c020
#define public_630c05c _public_630c05c

PROC_DECLARE(0x630bfe0, internal_630bfe0, public_630bfe0);
extern "C" NAKED register_t __cdecl internal_630bfe0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x58]
        push edi
        push eax
        call public_6391d5a
        xor ebp, ebp
        mov dword ptr ds : [esi+0x58], ebp
        mov dword ptr ds : [esi+0x5C], ebp
        mov dword ptr ds : [esi+0x60], ebp
        mov ecx, dword ptr ds : [esi+0x48]
        push ecx
        call public_6391d5a
        mov dword ptr ds : [esi+0x48], ebp
        mov dword ptr ds : [esi+0x4C], ebp
        mov dword ptr ds : [esi+0x50], ebp
        mov ebx, dword ptr ds : [esi+0x28]
        mov edi, dword ptr ds : [ebx]
        add esp, 8
        cmp edi, ebx
        je public_630c05c
        nop 
        lea esp, ss:[esp]
        public_630c020 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push ebp
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        call public_632ca20
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+0x2C]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+0x2C], ecx
        jne public_630c020
        public_630c05c : nop
        mov eax, dword ptr ds : [esi+0x28]
        push eax
        call public_6391d5a
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+0x28], ebp
        mov dword ptr ds : [esi+0x2C], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x630bfe0)
    }
}

#undef public_630c020
#undef public_630c05c
