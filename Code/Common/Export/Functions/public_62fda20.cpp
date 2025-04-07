#include "Common-PCH.h"


#define public_62fda3e _public_62fda3e
#define public_62fda4f _public_62fda4f

PROC_DECLARE(0x62fda20, internal_62fda20, public_62fda20);
extern "C" NAKED register_t __cdecl internal_62fda20()
{
    __asm
    {
        mov dl, byte ptr ds : [ecx+0x28]
        mov eax, 2
        test al, dl
        jne public_62fda3e
        mov dl, byte ptr ds : [ecx+0x29]
        test dl, dl
        je public_62fda4f
        mov eax, 3
        mov dword ptr ds : [ecx+0xC], eax
        ret 4
        public_62fda3e : nop
        mov al, byte ptr ds : [ecx+0x29]
        test al, al
        mov eax, 3
        jne public_62fda4f
        mov eax, 1
        public_62fda4f : nop
        mov dword ptr ds : [ecx+0xC], eax
        ret 4
        UNREACHABLE_TRAP(0x62fda20)
    }
}

#undef public_62fda3e
#undef public_62fda4f
