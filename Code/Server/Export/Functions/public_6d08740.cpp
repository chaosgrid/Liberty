#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d08740);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d08753 _public_6d08753
#define public_6d08760 _public_6d08760
#define public_6d08788 _public_6d08788
#define public_6d08790 _public_6d08790
#define public_6d08799 _public_6d08799
#define public_6d0879b _public_6d0879b
#define public_6d087b4 _public_6d087b4
#define public_6d087b6 _public_6d087b6
#define public_6d087e0 _public_6d087e0

PROC_DECLARE(0x6d08740, internal_6d08740, public_6d08740);
extern "C" NAKED register_t __cdecl internal_6d08740()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_6d08788
        public_6d08753 : nop
        cmp dword ptr ds : [esi+0x40], ebx
        je public_6d08760
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6d08753
        jmp public_6d08788
        public_6d08760 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        mov edx, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [edx]
        push esi
        call public_6d5ffb0
        mov eax, dword ptr ss : [ebp+0x10]
        add esp, 4
        dec eax
        mov dword ptr ss : [ebp+0x10], eax
        public_6d08788 : nop
        xor esi, esi
        lea ebx, ds:[ebx]
        public_6d08790 : nop
        test esi, esi
        jne public_6d08799
        mov esi, dword ptr ss : [ebp+0x38]
        jmp public_6d0879b
        public_6d08799 : nop
        mov esi, dword ptr ds : [esi]
        public_6d0879b : nop
        test esi, esi
        je public_6d087e0
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6d087b4
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6d087b6
        public_6d087b4 : nop
        xor eax, eax
        public_6d087b6 : nop
        cmp dword ptr ds : [eax+0xB4], ebx
        jne public_6d08790
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x160]
        test al, al
        jne public_6d08790
        mov ecx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [ecx]
        call dword ptr ds : [edi+0x20]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        push 0
        call dword ptr ds : [edi+0x158]
        jmp public_6d08790
        public_6d087e0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d08740)
    }
}

#undef public_6d08753
#undef public_6d08760
#undef public_6d08788
#undef public_6d08790
#undef public_6d08799
#undef public_6d0879b
#undef public_6d087b4
#undef public_6d087b6
#undef public_6d087e0
