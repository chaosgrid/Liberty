#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3f0f0);

#define public_6d3f103 _public_6d3f103
#define public_6d3f10b _public_6d3f10b
#define public_6d3f112 _public_6d3f112

PROC_DECLARE(0x6d3f0f0, internal_6d3f0f0, public_6d3f0f0);
extern "C" NAKED register_t __cdecl internal_6d3f0f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6d3f112
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+4]
        push esi
        public_6d3f103 : nop
        test eax, eax
        je public_6d3f10b
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        public_6d3f10b : nop
        add eax, 4
        dec ecx
        jne public_6d3f103
        pop esi
        public_6d3f112 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6d3f0f0)
    }
}

#undef public_6d3f103
#undef public_6d3f10b
#undef public_6d3f112
