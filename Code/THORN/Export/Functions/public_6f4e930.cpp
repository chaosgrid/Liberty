#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e930);

#define public_6f4e93f _public_6f4e93f
#define public_6f4e963 _public_6f4e963
#define public_6f4e965 _public_6f4e965

PROC_DECLARE(0x6f4e930, internal_6f4e930, public_6f4e930);
extern "C" NAKED register_t __cdecl internal_6f4e930()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xFFFFFFFF
        jne public_6f4e93f
        mov eax, offset public_6f60a08
        ret 
        public_6f4e93f : nop
        test eax, eax
        jl public_6f4e963
        mov ecx, dword ptr ds : [public_6f61e28]
        cmp eax, dword ptr ds : [ecx+0x70]
        jge public_6f4e963
        mov ecx, dword ptr ds : [ecx+0x6C]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ecx+eax*8]
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_6f4e965
        cmp ecx, 1
        je public_6f4e965
        public_6f4e963 : nop
        xor eax, eax
        public_6f4e965 : nop
        ret 
        UNREACHABLE_TRAP(0x6f4e930)
    }
}

#undef public_6f4e93f
#undef public_6f4e963
#undef public_6f4e965
