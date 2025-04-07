#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce8940 _public_6ce8940
#define public_6ce894e _public_6ce894e
#define public_6ce8958 _public_6ce8958
#define public_6ce8961 _public_6ce8961
#define public_6ce8988 _public_6ce8988

PROC_DECLARE(0x6ce8930, internal_6ce8930, public_6ce8930);
extern "C" NAKED register_t __cdecl internal_6ce8930()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x74]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6ce8958
        xor ebx, ebx
        public_6ce8940 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_6ce894e
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+4]
        public_6ce894e : nop
        mov dword ptr ds : [esi+8], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x74]
        jne public_6ce8940
        public_6ce8958 : nop
        mov ebx, dword ptr ds : [edi+0x74]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6ce8988
        public_6ce8961 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ds : [edi+0x78]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0x78], ecx
        jne public_6ce8961
        public_6ce8988 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ce8930)
    }
}

#undef public_6ce8940
#undef public_6ce894e
#undef public_6ce8958
#undef public_6ce8961
#undef public_6ce8988
