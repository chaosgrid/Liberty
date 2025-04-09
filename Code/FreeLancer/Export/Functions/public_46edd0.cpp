#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46edd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46ee05 _public_46ee05

PROC_DECLARE(0x46edd0, internal_46edd0, public_46edd0);
extern "C" NAKED register_t __cdecl internal_46edd0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_66dab8]
        mov al, 1
        test al, cl
        jne public_46ee05
        mov dl, cl
        or dl, al
        mov eax, dword ptr ds : [public_66dac0]
        push eax
        mov byte ptr ds : [public_66dab8], dl
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [public_66dac0], eax
        mov dword ptr ds : [public_66dac4], eax
        mov dword ptr ds : [public_66dac8], eax
        public_46ee05 : nop
        ret 
        UNREACHABLE_TRAP(0x46edd0)
    }
}

#undef public_46ee05
