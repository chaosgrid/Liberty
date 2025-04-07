#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6332620 _public_6332620
#define public_6332647 _public_6332647

PROC_DECLARE(0x6332610, internal_6332610, public_6332610);
extern "C" NAKED register_t __cdecl internal_6332610()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6332647
        mov edi, edi
        public_6332620 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+0xC]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0xC], ecx
        jne public_6332620
        public_6332647 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        call public_6391d5a
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6332610)
    }
}

#undef public_6332620
#undef public_6332647
