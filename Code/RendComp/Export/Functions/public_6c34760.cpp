#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c31e80);
CLANG_FORWARD_PROC_SYMBOL(public_6c34760);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c34772 _public_6c34772
#define public_6c34799 _public_6c34799

PROC_DECLARE(0x6c34760, internal_6c34760, public_6c34760);
extern "C" NAKED register_t __cdecl internal_6c34760()
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
        je public_6c34799
        public_6c34772 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6c34760
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0x10]
        call public_6c31e80
        push edi
        call public_6c34ea0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6c34772
        public_6c34799 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6c34760)
    }
}

#undef public_6c34772
#undef public_6c34799
