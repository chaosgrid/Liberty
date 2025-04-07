#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631d8e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_631d8f4 _public_631d8f4
#define public_631d91b _public_631d91b

PROC_DECLARE(0x631d8e0, internal_631d8e0, public_631d8e0);
extern "C" NAKED register_t __cdecl internal_631d8e0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], offset public_63a3bfc
        mov ebx, dword ptr ds : [edi+0x14]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_631d91b
        public_631d8f4 : nop
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
        mov ecx, dword ptr ds : [edi+0x18]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+0x18], ecx
        jne public_631d8f4
        public_631d91b : nop
        mov eax, dword ptr ds : [edi+0x14]
        push eax
        call public_6391d5a
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+0x14], eax
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x631d8e0)
    }
}

#undef public_631d8f4
#undef public_631d91b
