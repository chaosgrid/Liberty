#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6711a00);
CLANG_FORWARD_PROC_SYMBOL(public_67169d0);

#define public_6711a0e _public_6711a0e
#define public_6711a35 _public_6711a35

PROC_DECLARE(0x6711a00, internal_6711a00, public_6711a00);
extern "C" NAKED register_t __cdecl internal_6711a00()
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
        je public_6711a35
        public_6711a0e : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        call public_67169d0
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_6711a0e
        public_6711a35 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_67169d0
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6711a00)
    }
}

#undef public_6711a0e
#undef public_6711a35
