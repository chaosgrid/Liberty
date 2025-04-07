#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ec650);

#define public_62ec669 _public_62ec669

PROC_DECLARE(0x62ec650, internal_62ec650, public_62ec650);
extern "C" NAKED register_t __cdecl internal_62ec650()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor edx, edx
        cmp eax, edx
        jne public_62ec669
        mov dword ptr ds : [ecx+0xB0], edx
        mov byte ptr ds : [ecx+0xBE], dl
        ret 4
        public_62ec669 : nop
        mov dword ptr ds : [ecx+0xB0], eax
        mov byte ptr ds : [ecx+0xBE], 1
        ret 4
        UNREACHABLE_TRAP(0x62ec650)
    }
}

#undef public_62ec669
