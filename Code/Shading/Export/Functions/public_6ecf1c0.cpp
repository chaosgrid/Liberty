#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecbe70);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ecf1cf _public_6ecf1cf
#define public_6ecf1f5 _public_6ecf1f5
#define public_6ecf1f8 _public_6ecf1f8

PROC_DECLARE(0x6ecf1c0, internal_6ecf1c0, public_6ecf1c0);
extern "C" NAKED register_t __cdecl internal_6ecf1c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6ecf1cf
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6ecf1cf : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6ecf1f8
        push esi
        mov esi, dword ptr ds : [ecx+8]
        test esi, esi
        mov dword ptr ds : [ecx+4], 1
        je public_6ecf1f5
        mov ecx, esi
        call public_6ecbe70
        push esi
        call public_6ed0c50
        add esp, 4
        public_6ecf1f5 : nop
        xor eax, eax
        pop esi
        public_6ecf1f8 : nop
        ret 4
        UNREACHABLE_TRAP(0x6ecf1c0)
    }
}

#undef public_6ecf1cf
#undef public_6ecf1f5
#undef public_6ecf1f8
