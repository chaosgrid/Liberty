#include "Alchemy-PCH.h"


#define public_62024a4 _public_62024a4
#define public_62024a7 _public_62024a7

PROC_DECLARE(0x6202480, internal_6202480, public_6202480);
extern "C" NAKED register_t __cdecl internal_6202480()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        lea eax, ds:[eax+eax*2]
        mov edx, dword ptr ds : [eax*4+public_62578b8]
        lea eax, ds : [eax*4+public_62578b4]
        test edx, edx
        mov dword ptr ds : [eax+4], ecx
        jne public_62024a4
        mov dword ptr ds : [eax], ecx
        jmp public_62024a7
        public_62024a4 : nop
        mov dword ptr ds : [edx+8], ecx
        public_62024a7 : nop
        mov dword ptr ds : [ecx+8], 0
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+8]
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6202480)
    }
}

#undef public_62024a4
#undef public_62024a7
