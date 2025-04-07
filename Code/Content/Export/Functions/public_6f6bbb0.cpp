#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6bbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f6bbe5 _public_6f6bbe5

PROC_DECLARE(0x6f6bbb0, internal_6f6bbb0, public_6f6bbb0);
extern "C" NAKED register_t __cdecl internal_6f6bbb0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fd1cb8]
        mov al, 8
        test al, cl
        jne public_6f6bbe5
        mov dl, cl
        or dl, al
        mov eax, dword ptr ds : [public_6fd1c8c]
        push eax
        mov byte ptr ds : [public_6fd1cb8], dl
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [public_6fd1c8c], eax
        mov dword ptr ds : [public_6fd1c90], eax
        mov dword ptr ds : [public_6fd1c94], eax
        public_6f6bbe5 : nop
        ret 
        UNREACHABLE_TRAP(0x6f6bbb0)
    }
}

#undef public_6f6bbe5
