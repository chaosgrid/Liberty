#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfec0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f57840);
CLANG_FORWARD_PROC_SYMBOL(public_6f57b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);

#define public_6f57888 _public_6f57888
#define public_6f578a9 _public_6f578a9
#define public_6f578d1 _public_6f578d1
#define public_6f578f2 _public_6f578f2
#define public_6f57930 _public_6f57930
#define public_6f57952 _public_6f57952
#define public_6f5796f _public_6f5796f
#define public_6f57985 _public_6f57985
#define public_6f579a5 _public_6f579a5

PROC_DECLARE(0x6f57840, internal_6f57840, public_6f57840);
extern "C" NAKED register_t __cdecl internal_6f57840()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x14
        push ebp
        mov ebp, ecx
        push esi
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [ebp+0x168], eax
        call dword ptr ds : [public_6fb31b4]
        mov edx, dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        call dword ptr ds : [public_6fb3408]
        add esp, 8
        lea eax, ss:[esp+0x24]
        lea esi, ss:[ebp+0x158]
        push eax
        mov ecx, esi
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, dword ptr ds : [esi+4]
        je public_6f578a9
        public_6f57888 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, dword ptr ds : [esi+4]
        jne public_6f57888
        public_6f578a9 : nop
        mov ecx, esi
        call public_6ecfec0
        mov ecx, dword ptr ss : [ebp+0x15C]
        lea edx, ss:[esp+0x24]
        mov dword ptr ss : [ebp+0x164], ecx
        push edx
        mov ecx, esi
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, dword ptr ds : [esi+4]
        je public_6f578f2
        public_6f578d1 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        push 0
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, dword ptr ds : [esi+4]
        jne public_6f578d1
        public_6f578f2 : nop
        push ebx
        mov ecx, esi
        call public_6ecfec0
        mov ebx, dword ptr ss : [esp+0x24]
        cmp esi, ebx
        je public_6f5796f
        push edi
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, esi
        call public_6f1df30
        mov edi, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x2C]
        push eax
        mov ecx, ebx
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, edi
        mov ebx, dword ptr ds : [ebx+4]
        je public_6f57952
        mov ecx, dword ptr ss : [esp+0x2C]
        lea ecx, ds:[ecx]
        public_6f57930 : nop
        cmp ecx, ebx
        je public_6f57952
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edx]
        cmp eax, edi
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x28], eax
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x2C], ecx
        jne public_6f57930
        public_6f57952 : nop
        push edi
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6fa8370
        mov eax, dword ptr ss : [esp+0x2C]
        push ebx
        push eax
        push edi
        mov ecx, esi
        call public_6ed0230
        pop edi
        public_6f5796f : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [esi+4]
        pop ebx
        je public_6f579a5
        public_6f57985 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        push 0
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x10]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [esi+4]
        jne public_6f57985
        public_6f579a5 : nop
        mov ecx, dword ptr ss : [ebp+0x15C]
        mov dword ptr ss : [ebp+0x164], ecx
        mov ecx, ebp
        call public_6f57b00
        pop esi
        pop ebp
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6f57840)
    }
}

#undef public_6f57888
#undef public_6f578a9
#undef public_6f578d1
#undef public_6f578f2
#undef public_6f57930
#undef public_6f57952
#undef public_6f5796f
#undef public_6f57985
#undef public_6f579a5
