#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62682c0 _public_62682c0
#define public_62682e7 _public_62682e7
#define public_62682f7 _public_62682f7
#define public_626830c _public_626830c
#define public_6268339 _public_6268339

PROC_DECLARE(0x62682b0, internal_62682b0, public_62682b0);
extern "C" NAKED register_t __cdecl internal_62682b0()
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
        je public_62682e7
        mov edi, edi
        public_62682c0 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_62682c0
        public_62682e7 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [eax]
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, dword ptr ss : [esp+0x14]
        je public_6268339
        push ebp
        public_62682f7 : nop
        mov ebp, dword ptr ds : [ebx+4]
        push 0x28
        call public_6391d9c
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_626830c
        mov ebp, eax
        public_626830c : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[esi+8]
        push ecx
        add eax, 8
        push eax
        call public_626c1e0
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_62682f7
        pop ebp
        public_6268339 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x62682b0)
    }
}

#undef public_62682c0
#undef public_62682e7
#undef public_62682f7
#undef public_626830c
#undef public_6268339
