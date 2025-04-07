#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f18d0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65f24cf _public_65f24cf
#define public_65f24f5 _public_65f24f5
#define public_65f24f8 _public_65f24f8

PROC_DECLARE(0x65f24c0, internal_65f24c0, public_65f24c0);
extern "C" NAKED register_t __cdecl internal_65f24c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_65f24cf
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_65f24cf : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_65f24f8
        push esi
        mov esi, dword ptr ds : [ecx+8]
        test esi, esi
        mov dword ptr ds : [ecx+4], 1
        je public_65f24f5
        mov ecx, esi
        call public_65f18d0
        push esi
        call public_6600bb0
        add esp, 4
        public_65f24f5 : nop
        xor eax, eax
        pop esi
        public_65f24f8 : nop
        ret 4
        UNREACHABLE_TRAP(0x65f24c0)
    }
}

#undef public_65f24cf
#undef public_65f24f5
#undef public_65f24f8
