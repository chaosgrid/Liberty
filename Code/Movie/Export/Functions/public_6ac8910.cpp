#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac8910);

#define public_6ac8957 _public_6ac8957
#define public_6ac8960 _public_6ac8960
#define public_6ac8975 _public_6ac8975
#define public_6ac8979 _public_6ac8979
#define public_6ac897a _public_6ac897a
#define public_6ac899c _public_6ac899c
#define public_6ac89b0 _public_6ac89b0
#define public_6ac89b2 _public_6ac89b2

PROC_DECLARE(0x6ac8910, internal_6ac8910, public_6ac8910);
extern "C" NAKED register_t __cdecl internal_6ac8910()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x14]
        sub esp, 0x10
        xor eax, eax
        nop 
        sub ecx, edx
        mov dword ptr ss : [esp+4], ebx
        mov dword ptr ss : [esp+8], edi
        mov dword ptr ss : [esp+0xC], esi
        mov ebx, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x18]
        sub eax, ebx
        mov dword ptr ss : [esp], ebp
        nop 
        lea ebx, ds:[edi+ebx*4]
        lea ebp, ds:[esi+eax+1]
        je public_6ac8979
        sar eax, 1
        mov esi, dword ptr ds : [edx]
        mov edi, dword ptr ds : [edi]
        jae public_6ac8960
        lea edx, ds:[edx+4]
        sub esi, edi
        inc eax
        je public_6ac8975
        public_6ac8957 : nop
        mov dword ptr ds : [edx+ecx-4], esi
        mov esi, dword ptr ds : [edx]
        mov edi, dword ptr ds : [ebx+eax*8]
        public_6ac8960 : nop
        lea edx, ds:[edx+8]
        sbb esi, edi
        mov edi, dword ptr ds : [ebx+eax*8+4]
        mov dword ptr ds : [edx+ecx-8], esi
        mov esi, dword ptr ds : [edx-4]
        sbb esi, edi
        inc eax
        jne public_6ac8957
        public_6ac8975 : nop
        mov dword ptr ds : [edx+ecx-4], esi
        public_6ac8979 : nop
        dec ebp
        public_6ac897a : nop
        je public_6ac89b0
        mov esi, dword ptr ds : [edx]
        lea edx, ds:[edx+4]
        sbb esi, eax
        dec ebp
        mov dword ptr ds : [edx+ecx-4], esi
        jbe public_6ac897a
        test ecx, ecx
        lea edi, ds:[edx+ebp*4-4]
        je public_6ac89b2
        and ebp, 0xFFFFFFFE
        mov esi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx+edi], esi
        je public_6ac89b2
        public_6ac899c : nop
        mov esi, dword ptr ds : [edx]
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+edx], esi
        mov dword ptr ds : [ecx+edx+4], edi
        lea edx, ds:[edx+8]
        sub ebp, 2
        jne public_6ac899c
        public_6ac89b0 : nop
        adc eax, eax
        public_6ac89b2 : nop
        mov ebp, dword ptr ss : [esp]
        mov ebx, dword ptr ss : [esp+4]
        mov edi, dword ptr ss : [esp+8]
        mov esi, dword ptr ss : [esp+0xC]
        add esp, 0x10
        ret 0x14
        UNREACHABLE_TRAP(0x6ac8910)
    }
}

#undef public_6ac8957
#undef public_6ac8960
#undef public_6ac8975
#undef public_6ac8979
#undef public_6ac897a
#undef public_6ac899c
#undef public_6ac89b0
#undef public_6ac89b2
