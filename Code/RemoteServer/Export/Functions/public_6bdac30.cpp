#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdac30);

#define public_6bdac40 _public_6bdac40
#define public_6bdac4b _public_6bdac4b
#define public_6bdac51 _public_6bdac51

PROC_DECLARE(0x6bdac30, internal_6bdac30, public_6bdac30);
extern "C" NAKED register_t __cdecl internal_6bdac30()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x40]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp eax, ecx
        push esi
        je public_6bdac4b
        mov esi, dword ptr ss : [esp+8]
        public_6bdac40 : nop
        cmp edx, esi
        je public_6bdac51
        mov eax, dword ptr ds : [eax]
        inc edx
        cmp eax, ecx
        jne public_6bdac40
        public_6bdac4b : nop
        xor eax, eax
        pop esi
        ret 4
        public_6bdac51 : nop
        mov eax, dword ptr ds : [eax+8]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bdac30)
    }
}

#undef public_6bdac40
#undef public_6bdac4b
#undef public_6bdac51
