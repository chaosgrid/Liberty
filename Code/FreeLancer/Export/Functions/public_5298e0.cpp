#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_528d00);
CLANG_FORWARD_PROC_SYMBOL(public_5298e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5298f0 _public_5298f0
#define public_5298fe _public_5298fe

PROC_DECLARE(0x5298e0, internal_5298e0, public_5298e0);
extern "C" NAKED register_t __cdecl internal_5298e0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_5298fe
        nop 
        public_5298f0 : nop
        mov ecx, esi
        call public_528d00
        add esi, 0xC
        cmp esi, ebx
        jne public_5298f0
        public_5298fe : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5298e0)
    }
}

#undef public_5298f0
#undef public_5298fe
