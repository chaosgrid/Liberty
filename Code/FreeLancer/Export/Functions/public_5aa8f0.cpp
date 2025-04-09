#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a89b0);
CLANG_FORWARD_PROC_SYMBOL(public_5aa8f0);
CLANG_FORWARD_PROC_SYMBOL(public_5af6a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5aa908 _public_5aa908
#define public_5aa918 _public_5aa918
#define public_5aa924 _public_5aa924
#define public_5aa926 _public_5aa926
#define public_5aa941 _public_5aa941
#define public_5aa946 _public_5aa946
#define public_5aa951 _public_5aa951
#define public_5aa96d _public_5aa96d
#define public_5aa976 _public_5aa976
#define public_5aa97a _public_5aa97a

PROC_DECLARE(0x5aa8f0, internal_5aa8f0, public_5aa8f0);
extern "C" NAKED register_t __cdecl internal_5aa8f0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_67ecd0]
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        push edi
        mov edi, ecx
        jne public_5aa908
        pop edi
        xor eax, eax
        pop ebx
        pop ecx
        ret 4
        public_5aa908 : nop
        push esi
        lea eax, ds:[edi+0x1D4]
        mov dword ptr ss : [esp+0xC], eax
        mov byte ptr ds : [eax], bl
        xor esi, esi
        push ebp
        public_5aa918 : nop
        cmp esi, ebx
        jne public_5aa924
        mov esi, dword ptr ds : [edi+0x1B8]
        jmp public_5aa926
        public_5aa924 : nop
        mov esi, dword ptr ds : [esi]
        public_5aa926 : nop
        cmp esi, ebx
        je public_5aa946
        mov ebp, dword ptr ds : [esi+8]
        cmp ebp, ebx
        je public_5aa941
        mov ecx, ebp
        call public_5af6a0
        push ebp
        call public_5b7e1d
        add esp, 4
        public_5aa941 : nop
        mov dword ptr ds : [esi+8], ebx
        jmp public_5aa918
        public_5aa946 : nop
        mov esi, dword ptr ds : [edi+0x1B8]
        cmp esi, ebx
        pop ebp
        je public_5aa97a
        public_5aa951 : nop
        cmp byte ptr ds : [edi+0x1C0], bl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_5aa96d
        mov ecx, dword ptr ds : [edi+0x1C4]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [edi+0x1C4], eax
        jmp public_5aa976
        public_5aa96d : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5aa976 : nop
        cmp esi, ebx
        jne public_5aa951
        public_5aa97a : nop
        mov dword ptr ds : [edi+0x1BC], ebx
        mov dword ptr ds : [edi+0x1B8], ebx
        mov eax, dword ptr ds : [public_673344]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        call dword ptr ds : [edx+0x5C]
        mov ecx, dword ptr ss : [esp+0xC]
        push 0x42700000
        push 0x40A00000
        push ecx
        call public_5a89b0
        add esp, 0xC
        pop esi
        pop edi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x5aa8f0)
    }
}

#undef public_5aa908
#undef public_5aa918
#undef public_5aa924
#undef public_5aa926
#undef public_5aa941
#undef public_5aa946
#undef public_5aa951
#undef public_5aa96d
#undef public_5aa976
#undef public_5aa97a
