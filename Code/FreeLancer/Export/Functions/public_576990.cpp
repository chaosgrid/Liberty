#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_576990);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5769a0 _public_5769a0
#define public_5769dc _public_5769dc

PROC_DECLARE(0x576990, internal_576990, public_576990);
extern "C" NAKED register_t __cdecl internal_576990()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_67c258]
        push edi
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_5769dc
        push esi
        nop 
        public_5769a0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_52d3f0
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_67c25c]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [public_67c25c], ecx
        jne public_5769a0
        mov ebx, dword ptr ds : [public_67c258]
        pop esi
        public_5769dc : nop
        push ebx
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_67c258], eax
        mov dword ptr ds : [public_67c25c], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x576990)
    }
}

#undef public_5769a0
#undef public_5769dc
