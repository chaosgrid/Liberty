#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad79e5);

#define public_6ad7a02 _public_6ad7a02
#define public_6ad7a0e _public_6ad7a0e
#define public_6ad7a1d _public_6ad7a1d
#define public_6ad7a1f _public_6ad7a1f

PROC_DECLARE(0x6ad79e5, internal_6ad79e5, public_6ad79e5);
extern "C" NAKED register_t __cdecl internal_6ad79e5()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [public_6adfd04]
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [edx+4], esi
        push edi
        mov eax, edx
        je public_6ad7a0e
        lea edi, ds:[ecx+ecx*2]
        lea edi, ds:[edx+edi*4]
        public_6ad7a02 : nop
        add eax, 0xC
        cmp eax, edi
        jae public_6ad7a0e
        cmp dword ptr ds : [eax+4], esi
        jne public_6ad7a02
        public_6ad7a0e : nop
        lea ecx, ds:[ecx+ecx*2]
        lea ecx, ds:[edx+ecx*4]
        cmp eax, ecx
        jae public_6ad7a1d
        cmp dword ptr ds : [eax+4], esi
        je public_6ad7a1f
        public_6ad7a1d : nop
        xor eax, eax
        public_6ad7a1f : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad79e5)
    }
}

#undef public_6ad7a02
#undef public_6ad7a0e
#undef public_6ad7a1d
#undef public_6ad7a1f
