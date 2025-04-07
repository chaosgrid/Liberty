#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_487c30);
CLANG_FORWARD_PROC_SYMBOL(public_488be0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_488bf0 _public_488bf0
#define public_488bfe _public_488bfe

PROC_DECLARE(0x488be0, internal_488be0, public_488be0);
extern "C" NAKED register_t __cdecl internal_488be0()
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
        je public_488bfe
        nop 
        public_488bf0 : nop
        mov ecx, esi
        call public_487c30
        add esi, 0x24
        cmp esi, ebx
        jne public_488bf0
        public_488bfe : nop
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
        UNREACHABLE_TRAP(0x488be0)
    }
}

#undef public_488bf0
#undef public_488bfe
