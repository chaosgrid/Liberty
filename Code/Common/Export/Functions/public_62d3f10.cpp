#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d3f10);

#define public_62d3f20 _public_62d3f20
#define public_62d3f2a _public_62d3f2a

PROC_DECLARE(0x62d3f10, internal_62d3f10, public_62d3f10);
extern "C" NAKED register_t __cdecl internal_62d3f10()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        lea eax, ds:[ecx+0xFC]
        mov ecx, 5
        nop 
        public_62d3f20 : nop
        cmp dword ptr ds : [eax], edx
        jne public_62d3f2a
        mov dword ptr ds : [eax], 0
        public_62d3f2a : nop
        add eax, 4
        dec ecx
        jne public_62d3f20
        ret 4
        UNREACHABLE_TRAP(0x62d3f10)
    }
}

#undef public_62d3f20
#undef public_62d3f2a
