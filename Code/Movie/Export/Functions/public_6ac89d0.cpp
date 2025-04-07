#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac89d0);

#define public_6ac8a0a _public_6ac8a0a
#define public_6ac8a13 _public_6ac8a13
#define public_6ac8a28 _public_6ac8a28
#define public_6ac8a2e _public_6ac8a2e

PROC_DECLARE(0x6ac89d0, internal_6ac89d0, public_6ac89d0);
extern "C" NAKED register_t __cdecl internal_6ac89d0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        sub esp, 0xC
        xor eax, eax
        nop 
        sub ecx, edx
        mov dword ptr ss : [esp], ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+4], edi
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+8], esi
        sub eax, ebx
        lea ebx, ds:[edi+ebx*4]
        je public_6ac8a2e
        sar eax, 1
        mov esi, dword ptr ds : [edx]
        mov edi, dword ptr ds : [edi]
        jae public_6ac8a13
        lea edx, ds:[edx+4]
        sub esi, edi
        inc eax
        je public_6ac8a28
        public_6ac8a0a : nop
        mov dword ptr ds : [edx+ecx-4], esi
        mov esi, dword ptr ds : [edx]
        mov edi, dword ptr ds : [ebx+eax*8]
        public_6ac8a13 : nop
        lea edx, ds:[edx+8]
        sbb esi, edi
        mov edi, dword ptr ds : [ebx+eax*8+4]
        mov dword ptr ds : [edx+ecx-8], esi
        mov esi, dword ptr ds : [edx-4]
        sbb esi, edi
        inc eax
        jne public_6ac8a0a
        public_6ac8a28 : nop
        adc eax, eax
        mov dword ptr ds : [edx+ecx-4], esi
        public_6ac8a2e : nop
        mov ebx, dword ptr ss : [esp]
        mov edi, dword ptr ss : [esp+4]
        mov esi, dword ptr ss : [esp+8]
        add esp, 0xC
        ret 0x10
        UNREACHABLE_TRAP(0x6ac89d0)
    }
}

#undef public_6ac8a0a
#undef public_6ac8a13
#undef public_6ac8a28
#undef public_6ac8a2e
