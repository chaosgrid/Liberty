#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_408a70);

#define public_408a91 _public_408a91
#define public_408a99 _public_408a99
#define public_408ab7 _public_408ab7

PROC_DECLARE(0x408a70, internal_408a70, public_408a70);
extern "C" NAKED register_t __cdecl internal_408a70()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x78]
        test ecx, ecx
        je public_408ab7
        mov eax, dword ptr ds : [esi+0x7C]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_408ab7
        mov eax, ecx
        test eax, eax
        push edi
        jne public_408a91
        xor edi, edi
        jmp public_408a99
        public_408a91 : nop
        mov edi, dword ptr ds : [esi+0x7C]
        sub edi, eax
        sar edi, 2
        public_408a99 : nop
        call dword ptr ds : [public_5c71dc]
        imul eax, edi
        mov ecx, dword ptr ds : [esi+0x78]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        mov eax, dword ptr ds : [ecx+eax*4]
        pop edi
        pop esi
        ret 
        public_408ab7 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x408a70)
    }
}

#undef public_408a91
#undef public_408a99
#undef public_408ab7
