#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801080);

#define public_6801b0f _public_6801b0f
#define public_6801b36 _public_6801b36
#define public_6801b39 _public_6801b39

PROC_DECLARE(0x6801b00, internal_6801b00, public_6801b00);
extern "C" NAKED register_t __cdecl internal_6801b00()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_6801b0f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_6801b0f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6801b39
        push esi
        mov esi, dword ptr ds : [ecx+8]
        test esi, esi
        mov dword ptr ds : [ecx+4], 1
        je public_6801b36
        mov ecx, esi
        call public_6801080
        push esi
        call dword ptr ds : [public_680c018]
        add esp, 4
        public_6801b36 : nop
        xor eax, eax
        pop esi
        public_6801b39 : nop
        ret 4
        UNREACHABLE_TRAP(0x6801b00)
    }
}

#undef public_6801b0f
#undef public_6801b36
#undef public_6801b39
