#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac85c0);

#define public_6ac85fa _public_6ac85fa
#define public_6ac8603 _public_6ac8603
#define public_6ac8618 _public_6ac8618
#define public_6ac861e _public_6ac861e

PROC_DECLARE(0x6ac85c0, internal_6ac85c0, public_6ac85c0);
extern "C" NAKED register_t __cdecl internal_6ac85c0()
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
        je public_6ac861e
        sar eax, 1
        mov esi, dword ptr ds : [edx]
        mov edi, dword ptr ds : [edi]
        jae public_6ac8603
        lea edx, ds:[edx+4]
        add esi, edi
        inc eax
        je public_6ac8618
        public_6ac85fa : nop
        mov dword ptr ds : [edx+ecx-4], esi
        mov esi, dword ptr ds : [edx]
        mov edi, dword ptr ds : [ebx+eax*8]
        public_6ac8603 : nop
        lea edx, ds:[edx+8]
        adc esi, edi
        mov edi, dword ptr ds : [ebx+eax*8+4]
        mov dword ptr ds : [edx+ecx-8], esi
        mov esi, dword ptr ds : [edx-4]
        adc esi, edi
        inc eax
        jne public_6ac85fa
        public_6ac8618 : nop
        adc eax, eax
        mov dword ptr ds : [edx+ecx-4], esi
        public_6ac861e : nop
        mov ebx, dword ptr ss : [esp]
        mov edi, dword ptr ss : [esp+4]
        mov esi, dword ptr ss : [esp+8]
        add esp, 0xC
        ret 0x10
        UNREACHABLE_TRAP(0x6ac85c0)
    }
}

#undef public_6ac85fa
#undef public_6ac8603
#undef public_6ac8618
#undef public_6ac861e
