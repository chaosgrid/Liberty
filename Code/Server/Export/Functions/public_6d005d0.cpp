#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d005d0);

#define public_6d005f9 _public_6d005f9
#define public_6d005fb _public_6d005fb
#define public_6d00620 _public_6d00620

PROC_DECLARE(0x6d005d0, internal_6d005d0, public_6d005d0);
extern "C" NAKED register_t __cdecl internal_6d005d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d8d8ec]
        test eax, eax
        je public_6d00620
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_6d00620
        add eax, 0xC
        test eax, eax
        je public_6d005f9
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6d005f9
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6d005fb
        public_6d005f9 : nop
        xor eax, eax
        public_6d005fb : nop
        mov edx, dword ptr ds : [eax+0xB0]
        mov eax, dword ptr ss : [esp+4]
        cmp edx, dword ptr ds : [eax]
        jne public_6d00620
        push 0
        mov ecx, offset public_6d8d8ec
        call dword ptr ds : [public_6d6447c]
        mov dword ptr ds : [public_6d8d92c], 0
        public_6d00620 : nop
        ret 
        UNREACHABLE_TRAP(0x6d005d0)
    }
}

#undef public_6d005f9
#undef public_6d005fb
#undef public_6d00620
