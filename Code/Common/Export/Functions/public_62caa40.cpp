#include "Common-PCH.h"


#define public_62caa59 _public_62caa59

PROC_DECLARE(0x62caa40, internal_62caa40, public_62caa40);
extern "C" NAKED register_t __cdecl internal_62caa40()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x23C]
        test al, al
        je public_62caa59
        mov edx, dword ptr ds : [ecx+0x2C]
        lea eax, ds:[ecx+0x2C]
        mov ecx, dword ptr ds : [ecx+0x1C]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+8]
        public_62caa59 : nop
        ret 
        UNREACHABLE_TRAP(0x62caa40)
    }
}

#undef public_62caa59
