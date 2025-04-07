#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f37e00);

#define public_6f3f76f _public_6f3f76f
#define public_6f3f796 _public_6f3f796
#define public_6f3f799 _public_6f3f799

PROC_DECLARE(0x6f3f760, internal_6f3f760, public_6f3f760);
extern "C" NAKED register_t __cdecl internal_6f3f760()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6f3f76f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6f3f76f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f3f799
        push esi
        mov esi, dword ptr ds : [ecx+8]
        test esi, esi
        mov dword ptr ds : [ecx+4], 1
        je public_6f3f796
        mov ecx, esi
        call public_6f37e00
        push esi
        call dword ptr ds : [public_6f5a090]
        add esp, 4
        public_6f3f796 : nop
        xor eax, eax
        pop esi
        public_6f3f799 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f3f760)
    }
}

#undef public_6f3f76f
#undef public_6f3f796
#undef public_6f3f799
