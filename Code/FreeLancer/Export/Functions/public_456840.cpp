#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45b3c0);

#define public_456856 _public_456856
#define public_456877 _public_456877
#define public_456879 _public_456879
#define public_45688e _public_45688e

PROC_DECLARE(0x456840, internal_456840, public_456840);
extern "C" NAKED register_t __cdecl internal_456840()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0xF
        push esi
        jne public_45688e
        mov esi, dword ptr ds : [public_66d2d8]
        mov ecx, dword ptr ds : [esi]
        xor dl, dl
        cmp ecx, esi
        je public_45688e
        public_456856 : nop
        mov eax, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [eax+6], 0
        je public_456879
        mov dl, byte ptr ds : [eax+0x2D]
        test dl, dl
        je public_456877
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        je public_456877
        mov byte ptr ds : [eax+0x2E], 1
        mov esi, dword ptr ds : [public_66d2d8]
        public_456877 : nop
        mov dl, 1
        public_456879 : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, esi
        jne public_456856
        test dl, dl
        je public_45688e
        call public_45b3c0
        mov al, 1
        pop esi
        ret 4
        public_45688e : nop
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x456840)
    }
}

#undef public_456856
#undef public_456877
#undef public_456879
#undef public_45688e
