#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46e900);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46e912 _public_46e912
#define public_46e931 _public_46e931

PROC_DECLARE(0x46e900, internal_46e900, public_46e900);
extern "C" NAKED register_t __cdecl internal_46e900()
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
        je public_46e931
        public_46e912 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_46e900
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_46e912
        public_46e931 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x46e900)
    }
}

#undef public_46e912
#undef public_46e931
