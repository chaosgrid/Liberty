#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85230);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d85240 _public_6d85240
#define public_6d85267 _public_6d85267

PROC_DECLARE(0x6d85230, internal_6d85230, public_6d85230);
extern "C" NAKED register_t __cdecl internal_6d85230()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6d85267
        mov edi, edi
        public_6d85240 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6db1dc2
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_6d85240
        public_6d85267 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6db1dc2
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d85230)
    }
}

#undef public_6d85240
#undef public_6d85267
