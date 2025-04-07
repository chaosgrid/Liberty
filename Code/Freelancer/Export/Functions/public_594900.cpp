#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_594900);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_594912 _public_594912
#define public_594931 _public_594931

PROC_DECLARE(0x594900, internal_594900, public_594900);
extern "C" NAKED register_t __cdecl internal_594900()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_594931
        public_594912 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_594900
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_594912
        public_594931 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x594900)
    }
}

#undef public_594912
#undef public_594931
