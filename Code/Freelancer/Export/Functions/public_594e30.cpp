#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dd9a0);
CLANG_FORWARD_PROC_SYMBOL(public_594e30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_594e42 _public_594e42
#define public_594e69 _public_594e69

PROC_DECLARE(0x594e30, internal_594e30, public_594e30);
extern "C" NAKED register_t __cdecl internal_594e30()
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
        je public_594e69
        public_594e42 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_594e30
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_4dd9a0
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_594e42
        public_594e69 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x594e30)
    }
}

#undef public_594e42
#undef public_594e69
