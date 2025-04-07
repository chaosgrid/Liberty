#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3bf90);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f3bfa0 _public_6f3bfa0
#define public_6f3bfc7 _public_6f3bfc7

PROC_DECLARE(0x6f3bf90, internal_6f3bf90, public_6f3bf90);
extern "C" NAKED register_t __cdecl internal_6f3bf90()
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
        je public_6f3bfc7
        mov edi, edi
        public_6f3bfa0 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6f57e26
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_6f3bfa0
        public_6f3bfc7 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6f57e26
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f3bf90)
    }
}

#undef public_6f3bfa0
#undef public_6f3bfc7
