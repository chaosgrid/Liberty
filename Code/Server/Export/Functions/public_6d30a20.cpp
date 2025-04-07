#include "Server-PCH.h"


#define public_6d30a42 _public_6d30a42
#define public_6d30a4e _public_6d30a4e

PROC_DECLARE(0x6d30a20, internal_6d30a20, public_6d30a20);
extern "C" NAKED register_t __cdecl internal_6d30a20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x18], eax
        push esi
        mov esi, dword ptr ds : [edx+0x10]
        mov ax, word ptr ds : [esi]
        test ax, ax
        je public_6d30a4e
        cmp ax, word ptr ds : [ecx+8]
        je public_6d30a42
        cmp ax, word ptr ds : [ecx+0xE]
        jne public_6d30a4e
        public_6d30a42 : nop
        add esi, 2
        mov dword ptr ds : [edx+0x10], esi
        mov al, 1
        pop esi
        ret 4
        public_6d30a4e : nop
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d30a20)
    }
}

#undef public_6d30a42
#undef public_6d30a4e
