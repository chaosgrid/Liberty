#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418c20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_418c32 _public_418c32
#define public_418c51 _public_418c51

PROC_DECLARE(0x418c20, internal_418c20, public_418c20);
extern "C" NAKED register_t __cdecl internal_418c20()
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
        je public_418c51
        public_418c32 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_418c20
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_418c32
        public_418c51 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x418c20)
    }
}

#undef public_418c32
#undef public_418c51
