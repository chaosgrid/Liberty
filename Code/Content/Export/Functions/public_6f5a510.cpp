#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5a510);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f5a545 _public_6f5a545

PROC_DECLARE(0x6f5a510, internal_6f5a510, public_6f5a510);
extern "C" NAKED register_t __cdecl internal_6f5a510()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fd0e50]
        mov al, 1
        test al, cl
        jne public_6f5a545
        mov dl, cl
        or dl, al
        mov eax, dword ptr ds : [public_6fd0e58]
        push eax
        mov byte ptr ds : [public_6fd0e50], dl
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [public_6fd0e58], eax
        mov dword ptr ds : [public_6fd0e5c], eax
        mov dword ptr ds : [public_6fd0e60], eax
        public_6f5a545 : nop
        ret 
        UNREACHABLE_TRAP(0x6f5a510)
    }
}

#undef public_6f5a545
