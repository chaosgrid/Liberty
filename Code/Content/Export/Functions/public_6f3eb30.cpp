#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3eb30);
CLANG_FORWARD_PROC_SYMBOL(public_6f40d20);
CLANG_FORWARD_PROC_SYMBOL(public_6f45400);
CLANG_FORWARD_PROC_SYMBOL(public_6f467d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f3eb60 _public_6f3eb60
#define public_6f3eb7f _public_6f3eb7f
#define public_6f3ebab _public_6f3ebab
#define public_6f3ebb0 _public_6f3ebb0
#define public_6f3ebd0 _public_6f3ebd0

PROC_DECLARE(0x6f3eb30, internal_6f3eb30, public_6f3eb30);
extern "C" NAKED register_t __cdecl internal_6f3eb30()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        je public_6f3ebab
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6f3ebab
        cmp ebx, eax
        jne public_6f3ebab
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f3eb7f
        lea esp, ss:[esp]
        public_6f3eb60 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f40d20
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f3eb60
        public_6f3eb7f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        public_6f3ebab : nop
        cmp ecx, ebx
        je public_6f3ebd0
        nop 
        public_6f3ebb0 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6f467d0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6f45400
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6f3ebb0
        public_6f3ebd0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f3eb30)
    }
}

#undef public_6f3eb60
#undef public_6f3eb7f
#undef public_6f3ebab
#undef public_6f3ebb0
#undef public_6f3ebd0
