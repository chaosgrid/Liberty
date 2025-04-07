#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6803620);

#define public_680362f _public_680362f
#define public_6803653 _public_6803653
#define public_6803655 _public_6803655

PROC_DECLARE(0x6803620, internal_6803620, public_6803620);
extern "C" NAKED register_t __cdecl internal_6803620()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xFFFFFFFF
        jne public_680362f
        mov eax, offset public_680d968
        ret 
        public_680362f : nop
        test eax, eax
        jl public_6803653
        mov ecx, dword ptr ds : [public_680e604]
        cmp eax, dword ptr ds : [ecx+0x70]
        jge public_6803653
        mov ecx, dword ptr ds : [ecx+0x6C]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ecx+eax*8]
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_6803655
        cmp ecx, 1
        je public_6803655
        public_6803653 : nop
        xor eax, eax
        public_6803655 : nop
        ret 
        UNREACHABLE_TRAP(0x6803620)
    }
}

#undef public_680362f
#undef public_6803653
#undef public_6803655
