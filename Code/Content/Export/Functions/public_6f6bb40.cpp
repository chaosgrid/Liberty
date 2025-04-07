#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6bb40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f6bb75 _public_6f6bb75

PROC_DECLARE(0x6f6bb40, internal_6f6bb40, public_6f6bb40);
extern "C" NAKED register_t __cdecl internal_6f6bb40()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fd1cb8]
        mov al, 4
        test al, cl
        jne public_6f6bb75
        mov dl, cl
        or dl, al
        mov eax, dword ptr ds : [public_6fd1c9c]
        push eax
        mov byte ptr ds : [public_6fd1cb8], dl
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [public_6fd1c9c], eax
        mov dword ptr ds : [public_6fd1ca0], eax
        mov dword ptr ds : [public_6fd1ca4], eax
        public_6f6bb75 : nop
        ret 
        UNREACHABLE_TRAP(0x6f6bb40)
    }
}

#undef public_6f6bb75
