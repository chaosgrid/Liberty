#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_540b70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_540b80 _public_540b80
#define public_540bb2 _public_540bb2

PROC_DECLARE(0x540b70, internal_540b70, public_540b70);
extern "C" NAKED register_t __cdecl internal_540b70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_678a34]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov edi, eax
        je public_540bb2
        nop 
        public_540b80 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_678a38]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [public_678a38], ecx
        jne public_540b80
        mov eax, dword ptr ds : [public_678a34]
        public_540bb2 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_678a34], eax
        mov dword ptr ds : [public_678a38], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x540b70)
    }
}

#undef public_540b80
#undef public_540bb2
