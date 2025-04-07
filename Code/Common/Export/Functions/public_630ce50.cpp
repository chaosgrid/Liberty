#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630ce50);

#define public_630ce66 _public_630ce66
#define public_630ce80 _public_630ce80
#define public_630ceab _public_630ceab

PROC_DECLARE(0x630ce50, internal_630ce50, public_630ce50);
extern "C" NAKED register_t __cdecl internal_630ce50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xFFFFFFFF
        push esi
        mov esi, ecx
        jne public_630ce66
        mov eax, dword ptr ds : [esi+0x84]
        pop esi
        ret 4
        public_630ce66 : nop
        cmp eax, dword ptr ds : [esi+0x84]
        je public_630ce80
        test eax, eax
        jl public_630ce80
        cmp eax, dword ptr ds : [esi+0x88]
        jg public_630ce80
        mov dword ptr ds : [esi+0x84], eax
        public_630ce80 : nop
        mov eax, dword ptr ds : [esi+0x80]
        test eax, eax
        je public_630ceab
        mov ecx, dword ptr ds : [esi+0x84]
        push 0
        push ecx
        push eax
        call dword ptr ds : [public_6399248]
        add esp, 0xC
        test eax, eax
        jne public_630ceab
        mov eax, dword ptr ds : [esi+0x84]
        pop esi
        ret 4
        public_630ceab : nop
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x630ce50)
    }
}

#undef public_630ce66
#undef public_630ce80
#undef public_630ceab
