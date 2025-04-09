#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_429840);

#define public_42a38e _public_42a38e

PROC_DECLARE(0x42a350, internal_42a350, public_42a350);
extern "C" NAKED register_t __cdecl internal_42a350()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_42a38e
        cmp eax, 0xFFFFFFFF
        je public_42a38e
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0xA0]
        test al, al
        jne public_42a38e
        mov ecx, dword ptr ds : [public_5c6d48]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x30]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        cmp eax, 4
        je public_42a38e
        test eax, eax
        je public_42a38e
        mov ecx, esi
        pop esi
        jmp public_429840
        public_42a38e : nop
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x42a350)
    }
}

#undef public_42a38e
