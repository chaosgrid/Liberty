#include "Common-PCH.h"


#define public_62c0325 _public_62c0325
#define public_62c032d _public_62c032d

PROC_DECLARE(0x62c02f0, internal_62c02f0, public_62c02f0);
extern "C" NAKED register_t __cdecl internal_62c02f0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        mov eax, 0xFFFFFFFD
        je public_62c032d
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_62c032d
        mov ecx, dword ptr ds : [ecx+0x1B8]
        test ecx, ecx
        je public_62c0325
        lea eax, ds:[ecx-8]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 4
        public_62c0325 : nop
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        public_62c032d : nop
        ret 4
        UNREACHABLE_TRAP(0x62c02f0)
    }
}

#undef public_62c0325
#undef public_62c032d
