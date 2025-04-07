#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec0540);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec694f _public_6ec694f
#define public_6ec6975 _public_6ec6975
#define public_6ec6978 _public_6ec6978

PROC_DECLARE(0x6ec6940, internal_6ec6940, public_6ec6940);
extern "C" NAKED register_t __cdecl internal_6ec6940()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6ec694f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6ec694f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6ec6978
        push esi
        mov esi, dword ptr ds : [ecx+8]
        test esi, esi
        mov dword ptr ds : [ecx+4], 1
        je public_6ec6975
        mov ecx, esi
        call public_6ec0540
        push esi
        call public_6ed0c50
        add esp, 4
        public_6ec6975 : nop
        xor eax, eax
        pop esi
        public_6ec6978 : nop
        ret 4
        UNREACHABLE_TRAP(0x6ec6940)
    }
}

#undef public_6ec694f
#undef public_6ec6975
#undef public_6ec6978
