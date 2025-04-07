#include "RendComp-PCH.h"


#define public_6c30d21 _public_6c30d21
#define public_6c30d2e _public_6c30d2e

PROC_DECLARE(0x6c30d10, internal_6c30d10, public_6c30d10);
extern "C" NAKED register_t __cdecl internal_6c30d10()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jge public_6c30d21
        or eax, 0xFFFFFFFF
        ret 0xC
        public_6c30d21 : nop
        mov edx, dword ptr ss : [esp+8]
        dec edx
        je public_6c30d2e
        or eax, 0xFFFFFFFF
        ret 0xC
        public_6c30d2e : nop
        mov edx, dword ptr ds : [ecx+0x18]
        movzx edx, word ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [ecx+0x14]
        lea eax, ds:[edx+eax+2]
        mov edx, dword ptr ds : [ecx+0x34]
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ds:[eax+eax*2]
        movzx eax, word ptr ds : [edx+eax*4]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6c30d10)
    }
}

#undef public_6c30d21
#undef public_6c30d2e
