#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac8500);

#define public_6ac8547 _public_6ac8547
#define public_6ac8550 _public_6ac8550
#define public_6ac8565 _public_6ac8565
#define public_6ac8569 _public_6ac8569
#define public_6ac856a _public_6ac856a
#define public_6ac858c _public_6ac858c
#define public_6ac85a0 _public_6ac85a0
#define public_6ac85a2 _public_6ac85a2

PROC_DECLARE(0x6ac8500, internal_6ac8500, public_6ac8500);
extern "C" NAKED register_t __cdecl internal_6ac8500()
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
        mov ebx, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0xC], esi
        mov esi, dword ptr ss : [esp+0x18]
        sub eax, ebx
        mov dword ptr ss : [esp], ebp
        nop 
        lea ebx, ds:[edi+ebx*4]
        lea ebp, ds:[esi+eax+1]
        je public_6ac8569
        sar eax, 1
        mov esi, dword ptr ds : [edx]
        mov edi, dword ptr ds : [edi]
        jae public_6ac8550
        lea edx, ds:[edx+4]
        add esi, edi
        inc eax
        je public_6ac8565
        public_6ac8547 : nop
        mov dword ptr ds : [edx+ecx-4], esi
        mov esi, dword ptr ds : [edx]
        mov edi, dword ptr ds : [ebx+eax*8]
        public_6ac8550 : nop
        lea edx, ds:[edx+8]
        adc esi, edi
        mov edi, dword ptr ds : [ebx+eax*8+4]
        mov dword ptr ds : [edx+ecx-8], esi
        mov esi, dword ptr ds : [edx-4]
        adc esi, edi
        inc eax
        jne public_6ac8547
        public_6ac8565 : nop
        mov dword ptr ds : [edx+ecx-4], esi
        public_6ac8569 : nop
        dec ebp
        public_6ac856a : nop
        je public_6ac85a0
        mov esi, dword ptr ds : [edx]
        lea edx, ds:[edx+4]
        adc esi, eax
        dec ebp
        mov dword ptr ds : [edx+ecx-4], esi
        jbe public_6ac856a
        test ecx, ecx
        lea edi, ds:[edx+ebp*4-4]
        je public_6ac85a2
        and ebp, 0xFFFFFFFE
        mov esi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx+edi], esi
        je public_6ac85a2
        public_6ac858c : nop
        mov esi, dword ptr ds : [edx]
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+edx], esi
        mov dword ptr ds : [ecx+edx+4], edi
        lea edx, ds:[edx+8]
        sub ebp, 2
        jne public_6ac858c
        public_6ac85a0 : nop
        adc eax, eax
        public_6ac85a2 : nop
        mov ebp, dword ptr ss : [esp]
        mov ebx, dword ptr ss : [esp+4]
        mov edi, dword ptr ss : [esp+8]
        mov esi, dword ptr ss : [esp+0xC]
        add esp, 0x10
        ret 0x14
        UNREACHABLE_TRAP(0x6ac8500)
    }
}

#undef public_6ac8547
#undef public_6ac8550
#undef public_6ac8565
#undef public_6ac8569
#undef public_6ac856a
#undef public_6ac858c
#undef public_6ac85a0
#undef public_6ac85a2
