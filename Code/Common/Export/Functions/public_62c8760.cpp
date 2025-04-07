#include "Common-PCH.h"


#define public_62c8775 _public_62c8775
#define public_62c8777 _public_62c8777
#define public_62c877e _public_62c877e

PROC_DECLARE(0x62c8760, internal_62c8760, public_62c8760);
extern "C" NAKED register_t __cdecl internal_62c8760()
{
    __asm
    {
        mov dl, byte ptr ds : [ecx+0x28]
        mov eax, 2
        test al, dl
        mov dl, byte ptr ds : [ecx+0x29]
        je public_62c8775
        xor eax, eax
        cmp dl, al
        jmp public_62c8777
        public_62c8775 : nop
        test dl, dl
        public_62c8777 : nop
        je public_62c877e
        mov eax, 3
        public_62c877e : nop
        mov dword ptr ds : [ecx+0xC], eax
        ret 4
        UNREACHABLE_TRAP(0x62c8760)
    }
}

#undef public_62c8775
#undef public_62c8777
#undef public_62c877e
