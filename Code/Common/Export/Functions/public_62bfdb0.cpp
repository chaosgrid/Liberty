#include "Common-PCH.h"


#define public_62bfde5 _public_62bfde5
#define public_62bfdf4 _public_62bfdf4

PROC_DECLARE(0x62bfdb0, internal_62bfdb0, public_62bfdb0);
extern "C" NAKED register_t __cdecl internal_62bfdb0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        mov eax, 0xFFFFFFFD
        je public_62bfdf4
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 3
        cmp dl, 3
        jne public_62bfdf4
        mov ecx, dword ptr ds : [ecx+0xA4]
        test ecx, ecx
        je public_62bfde5
        mov eax, dword ptr ds : [ecx]
        push esi
        xor esi, esi
        call dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        mov eax, esi
        pop esi
        ret 4
        public_62bfde5 : nop
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFE
        public_62bfdf4 : nop
        ret 4
        UNREACHABLE_TRAP(0x62bfdb0)
    }
}

#undef public_62bfde5
#undef public_62bfdf4
