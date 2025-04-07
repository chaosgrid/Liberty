#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c23dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6c24c60);
CLANG_FORWARD_PROC_SYMBOL(public_6c27780);
CLANG_FORWARD_PROC_SYMBOL(public_6c278b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c27910);
CLANG_FORWARD_PROC_SYMBOL(public_6c29000);
CLANG_FORWARD_PROC_SYMBOL(public_6c29040);
CLANG_FORWARD_PROC_SYMBOL(public_6c29190);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c277d4 _public_6c277d4
#define public_6c277e4 _public_6c277e4
#define public_6c27825 _public_6c27825
#define public_6c27828 _public_6c27828
#define public_6c27836 _public_6c27836
#define public_6c2784e _public_6c2784e
#define public_6c27855 _public_6c27855
#define public_6c27857 _public_6c27857
#define public_6c27892 _public_6c27892
#define public_6c2789d _public_6c2789d

PROC_DECLARE(0x6c27780, internal_6c27780, public_6c27780);
extern "C" NAKED register_t __cdecl internal_6c27780()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+0x18]
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr ds : [ebx+0x1C]
        push eax
        push ecx
        mov ecx, esi
        call public_6c278b0
        mov edx, dword ptr ds : [ebx+0x24]
        mov eax, dword ptr ds : [ebx+0x20]
        mov ecx, dword ptr ds : [ebx+0x28]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call public_6c27910
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [esi+0x10], eax
        mov ecx, dword ptr ds : [ebx+0x14]
        mov dword ptr ds : [esi+0x14], ecx
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [esi+8]
        xor ebp, ebp
        cmp eax, ebp
        je public_6c277d4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ebp
        public_6c277d4 : nop
        mov eax, dword ptr ds : [ebx+8]
        cmp eax, ebp
        mov dword ptr ds : [esi+8], eax
        je public_6c277e4
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_6c277e4 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [ebx+0x30]
        mov dword ptr ds : [esi+0x30], ecx
        mov edx, dword ptr ds : [ebx+0x3C]
        mov dword ptr ds : [esi+0x3C], edx
        mov eax, dword ptr ds : [ebx+0x2C]
        cmp eax, dword ptr ds : [ebx+0x30]
        je public_6c27825
        push 0x70
        call public_6c34eac
        mov edi, eax
        mov dword ptr ds : [esi+0x2C], edi
        xor eax, eax
        mov ecx, 0x1C
        rep stosd
        mov eax, dword ptr ds : [esi+0x2C]
        mov ecx, dword ptr ds : [ebx+0x2C]
        push eax
        push ecx
        call public_6c29190
        add esp, 0xC
        jmp public_6c27828
        public_6c27825 : nop
        mov dword ptr ds : [esi+0x2C], eax
        public_6c27828 : nop
        cmp dword ptr ds : [ebx+0x38], ebp
        mov eax, dword ptr ds : [esi+0x38]
        je public_6c27892
        cmp eax, ebp
        je public_6c2784e
        xor edi, edi
        public_6c27836 : nop
        mov edx, dword ptr ds : [esi+0x38]
        add edx, edi
        push edx
        call public_6c23dc0
        add edi, 0x14
        add esp, 4
        cmp edi, 0x50
        jl public_6c27836
        jmp public_6c27855
        public_6c2784e : nop
        mov ecx, esi
        call public_6c29000
        public_6c27855 : nop
        xor edi, edi
        public_6c27857 : nop
        mov eax, dword ptr ds : [ebx+0x34]
        mov edx, dword ptr ds : [edi+eax]
        mov ecx, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [edi+ecx], edx
        mov eax, dword ptr ds : [ebx+0x34]
        mov ecx, dword ptr ds : [edi+eax]
        mov edx, dword ptr ds : [esi+0x38]
        mov eax, dword ptr ds : [ebx+0x38]
        push ecx
        add edx, ebp
        push edx
        add eax, ebp
        push eax
        call public_6c24c60
        add edi, 4
        add esp, 0xC
        add ebp, 0x14
        cmp edi, 0x10
        jl public_6c27857
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6c27892 : nop
        cmp eax, ebp
        je public_6c2789d
        mov ecx, esi
        call public_6c29040
        public_6c2789d : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6c27780)
    }
}

#undef public_6c277d4
#undef public_6c277e4
#undef public_6c27825
#undef public_6c27828
#undef public_6c27836
#undef public_6c2784e
#undef public_6c27855
#undef public_6c27857
#undef public_6c27892
#undef public_6c2789d
