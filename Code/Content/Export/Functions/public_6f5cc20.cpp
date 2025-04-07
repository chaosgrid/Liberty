#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5cc20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f5cc55 _public_6f5cc55

PROC_DECLARE(0x6f5cc20, internal_6f5cc20, public_6f5cc20);
extern "C" NAKED register_t __cdecl internal_6f5cc20()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fd1bc4]
        mov al, 4
        test al, cl
        jne public_6f5cc55
        mov dl, cl
        or dl, al
        mov eax, dword ptr ds : [public_6fd1bac]
        push eax
        mov byte ptr ds : [public_6fd1bc4], dl
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [public_6fd1bac], eax
        mov dword ptr ds : [public_6fd1bb0], eax
        mov dword ptr ds : [public_6fd1bb4], eax
        public_6f5cc55 : nop
        ret 
        UNREACHABLE_TRAP(0x6f5cc20)
    }
}

#undef public_6f5cc55
