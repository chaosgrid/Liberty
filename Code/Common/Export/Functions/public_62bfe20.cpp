#include "Common-PCH.h"


#define public_62bfe49 _public_62bfe49

PROC_DECLARE(0x62bfe20, internal_62bfe20, public_62bfe20);
extern "C" NAKED register_t __cdecl internal_62bfe20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_62bfe49
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62bfe49
        fld dword ptr ds : [eax+0x198]
        mov edx, dword ptr ss : [esp+4]
        fstp dword ptr ds : [edx]
        xor eax, eax
        ret 4
        public_62bfe49 : nop
        mov eax, 0xFFFFFFFD
        ret 4
        UNREACHABLE_TRAP(0x62bfe20)
    }
}

#undef public_62bfe49
