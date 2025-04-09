#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57f780);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_57f792 _public_57f792
#define public_57f7b1 _public_57f7b1

PROC_DECLARE(0x57f780, internal_57f780, public_57f780);
extern "C" NAKED register_t __cdecl internal_57f780()
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
        je public_57f7b1
        public_57f792 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_57f780
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_57f792
        public_57f7b1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x57f780)
    }
}

#undef public_57f792
#undef public_57f7b1
