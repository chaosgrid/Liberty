#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_626f9d4 _public_626f9d4
#define public_626f9ed _public_626f9ed
#define public_626f9f3 _public_626f9f3
#define public_626fa1e _public_626fa1e
#define public_626fa24 _public_626fa24
#define public_626fa39 _public_626fa39
#define public_626fa65 _public_626fa65

PROC_DECLARE(0x626f9b0, internal_626f9b0, public_626f9b0);
extern "C" NAKED register_t __cdecl internal_626f9b0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ebx, ecx
        push esi
        push edi
        je public_626fa65
        mov esi, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], ecx
        je public_626f9ed
        public_626f9d4 : nop
        cmp ebp, ecx
        je public_626f9ed
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebp, dword ptr ss : [ebp]
        jne public_626f9d4
        public_626f9ed : nop
        cmp eax, esi
        mov edi, eax
        je public_626fa1e
        public_626f9f3 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, esi
        mov dword ptr ds : [ebx+8], ecx
        jne public_626f9f3
        mov ecx, dword ptr ss : [esp+0x14]
        public_626fa1e : nop
        cmp ebp, ecx
        mov edi, ebp
        je public_626fa65
        public_626fa24 : nop
        mov ebp, dword ptr ds : [esi+4]
        push 0x10
        call public_6391d9c
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_626fa39
        mov ebp, eax
        public_626fa39 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[edi+8]
        push ecx
        add eax, 8
        push eax
        call public_62bee40
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        inc ecx
        mov dword ptr ds : [ebx+8], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_626fa24
        public_626fa65 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x626f9b0)
    }
}

#undef public_626f9d4
#undef public_626f9ed
#undef public_626f9f3
#undef public_626fa1e
#undef public_626fa24
#undef public_626fa39
#undef public_626fa65
