#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f601f0);

#define public_6f60201 _public_6f60201
#define public_6f6020c _public_6f6020c
#define public_6f60213 _public_6f60213

PROC_DECLARE(0x6f601f0, internal_6f601f0, public_6f601f0);
extern "C" NAKED register_t __cdecl internal_6f601f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        je public_6f6020c
        mov eax, dword ptr ss : [esp+0xC]
        public_6f60201 : nop
        cmp dword ptr ds : [ecx+0xC], eax
        je public_6f60213
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_6f60201
        public_6f6020c : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 
        public_6f60213 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 
        UNREACHABLE_TRAP(0x6f601f0)
    }
}

#undef public_6f60201
#undef public_6f6020c
#undef public_6f60213
