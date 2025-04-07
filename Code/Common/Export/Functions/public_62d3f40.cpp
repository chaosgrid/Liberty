#include "Common-PCH.h"


#define public_62d3f58 _public_62d3f58
#define public_62d3f7d _public_62d3f7d

PROC_DECLARE(0x62d3f40, internal_62d3f40, public_62d3f40);
extern "C" NAKED register_t __cdecl internal_62d3f40()
{
    __asm
    {
        mov eax, ecx
        mov cl, byte ptr ds : [eax+0xBC]
        test cl, cl
        mov ecx, dword ptr ss : [esp+4]
        je public_62d3f58
        cmp ecx, dword ptr ds : [eax+0xC0]
        jne public_62d3f7d
        public_62d3f58 : nop
        mov edx, 2
        shl edx, cl
        test dword ptr ds : [eax+0xB8], edx
        jne public_62d3f7d
        mov ecx, dword ptr ds : [eax+ecx*4+0x174]
        mov eax, dword ptr ds : [eax+0xDC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [edx+0x18]
        public_62d3f7d : nop
        mov eax, 2
        ret 4
        UNREACHABLE_TRAP(0x62d3f40)
    }
}

#undef public_62d3f58
#undef public_62d3f7d
