#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65de7da);

#define public_65de7f7 _public_65de7f7
#define public_65de803 _public_65de803
#define public_65de812 _public_65de812
#define public_65de814 _public_65de814

PROC_DECLARE(0x65de7da, internal_65de7da, public_65de7da);
extern "C" NAKED register_t __cdecl internal_65de7da()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [public_65e5734]
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [edx+4], esi
        push edi
        mov eax, edx
        je public_65de803
        lea edi, ds:[ecx+ecx*2]
        lea edi, ds:[edx+edi*4]
        public_65de7f7 : nop
        add eax, 0xC
        cmp eax, edi
        jae public_65de803
        cmp dword ptr ds : [eax+4], esi
        jne public_65de7f7
        public_65de803 : nop
        lea ecx, ds:[ecx+ecx*2]
        lea ecx, ds:[edx+ecx*4]
        cmp eax, ecx
        jae public_65de812
        cmp dword ptr ds : [eax+4], esi
        je public_65de814
        public_65de812 : nop
        xor eax, eax
        public_65de814 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65de7da)
    }
}

#undef public_65de7f7
#undef public_65de803
#undef public_65de812
#undef public_65de814
