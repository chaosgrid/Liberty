#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee670);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c730);

#define public_6ce7c90 _public_6ce7c90
#define public_6ce7ca0 _public_6ce7ca0
#define public_6ce7cbc _public_6ce7cbc
#define public_6ce7cbe _public_6ce7cbe
#define public_6ce7cc8 _public_6ce7cc8
#define public_6ce7ce0 _public_6ce7ce0
#define public_6ce7ce2 _public_6ce7ce2
#define public_6ce7ced _public_6ce7ced

PROC_DECLARE(0x6ce7c80, internal_6ce7c80, public_6ce7c80);
extern "C" NAKED register_t __cdecl internal_6ce7c80()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x64]
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6ce7ca0
        lea ecx, ds:[ecx]
        public_6ce7c90 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        push esi
        call public_6d0c730
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0x64]
        jne public_6ce7c90
        public_6ce7ca0 : nop
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6ce7cc8
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6ce7cbc
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6ce7cbe
        public_6ce7cbc : nop
        xor eax, eax
        public_6ce7cbe : nop
        mov ecx, dword ptr ds : [eax+0xB4]
        test ecx, ecx
        jne public_6ce7ced
        public_6ce7cc8 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6ce7ce0
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_6ce7ce2
        public_6ce7ce0 : nop
        xor eax, eax
        public_6ce7ce2 : nop
        mov edx, dword ptr ds : [eax]
        push esi
        mov ecx, eax
        call dword ptr ds : [edx+0xC0]
        public_6ce7ced : nop
        pop edi
        mov ecx, esi
        pop esi
        jmp public_6cee670
        UNREACHABLE_TRAP(0x6ce7c80)
    }
}

#undef public_6ce7c90
#undef public_6ce7ca0
#undef public_6ce7cbc
#undef public_6ce7cbe
#undef public_6ce7cc8
#undef public_6ce7ce0
#undef public_6ce7ce2
#undef public_6ce7ced
