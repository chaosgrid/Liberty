#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_630a477 _public_630a477
#define public_630a48f _public_630a48f
#define public_630a4bd _public_630a4bd

PROC_DECLARE(0x630a460, internal_630a460, public_630a460);
extern "C" NAKED register_t __cdecl internal_630a460()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov ebx, ecx
        mov dword ptr ss : [esp+0xC], eax
        je public_630a4bd
        push ebp
        push edi
        public_630a477 : nop
        mov edi, dword ptr ds : [ebx+4]
        mov ebp, dword ptr ds : [edi+4]
        push 0x28
        call public_6391d9c
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_630a48f
        mov ebp, eax
        public_630a48f : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[esi+8]
        push ecx
        add eax, 8
        push eax
        call public_626c1e0
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        inc ecx
        mov dword ptr ds : [ebx+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_630a477
        pop edi
        pop ebp
        public_630a4bd : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x630a460)
    }
}

#undef public_630a477
#undef public_630a48f
#undef public_630a4bd
