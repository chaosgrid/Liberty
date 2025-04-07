#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee670);

#define public_6cee693 _public_6cee693
#define public_6cee695 _public_6cee695
#define public_6cee69f _public_6cee69f
#define public_6cee6b1 _public_6cee6b1
#define public_6cee6b3 _public_6cee6b3
#define public_6cee6c1 _public_6cee6c1

PROC_DECLARE(0x6cee670, internal_6cee670, public_6cee670);
extern "C" NAKED register_t __cdecl internal_6cee670()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov byte ptr ds : [esi+0x40], 1
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6cee69f
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6cee693
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6cee695
        public_6cee693 : nop
        xor eax, eax
        public_6cee695 : nop
        mov ecx, dword ptr ds : [eax+0xB4]
        test ecx, ecx
        jne public_6cee6c1
        public_6cee69f : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6cee6b1
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6cee6b3
        public_6cee6b1 : nop
        xor eax, eax
        public_6cee6b3 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x94]
        public_6cee6c1 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cee670)
    }
}

#undef public_6cee693
#undef public_6cee695
#undef public_6cee69f
#undef public_6cee6b1
#undef public_6cee6b3
#undef public_6cee6c1
