#include "Common-PCH.h"


#define public_630a9a1 _public_630a9a1
#define public_630a9aa _public_630a9aa
#define public_630a9ac _public_630a9ac
#define public_630a9bd _public_630a9bd
#define public_630a9c7 _public_630a9c7

PROC_DECLARE(0x630a990, internal_630a990, public_630a990);
extern "C" NAKED register_t __cdecl internal_630a990()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        xor eax, eax
        xor esi, esi
        xor ecx, ecx
        public_630a9a1 : nop
        test ecx, ecx
        jne public_630a9aa
        mov ecx, dword ptr ds : [ebx+4]
        jmp public_630a9ac
        public_630a9aa : nop
        mov ecx, dword ptr ds : [ecx]
        public_630a9ac : nop
        test ecx, ecx
        je public_630a9bd
        mov edx, dword ptr ds : [ecx+8]
        cmp dword ptr ds : [edx], edi
        jne public_630a9a1
        mov eax, edx
        mov esi, ecx
        jmp public_630a9a1
        public_630a9bd : nop
        mov ecx, dword ptr ss : [esp+0x18]
        test ecx, ecx
        je public_630a9c7
        mov dword ptr ds : [ecx], esi
        public_630a9c7 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x630a990)
    }
}

#undef public_630a9a1
#undef public_630a9aa
#undef public_630a9ac
#undef public_630a9bd
#undef public_630a9c7
