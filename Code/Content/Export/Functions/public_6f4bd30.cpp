#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f003e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f48ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bd30);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);

#define public_6f4bd54 _public_6f4bd54
#define public_6f4bde2 _public_6f4bde2
#define public_6f4be19 _public_6f4be19
#define public_6f4be21 _public_6f4be21
#define public_6f4be2b _public_6f4be2b
#define public_6f4be30 _public_6f4be30
#define public_6f4be32 _public_6f4be32
#define public_6f4be3a _public_6f4be3a
#define public_6f4be57 _public_6f4be57

PROC_DECLARE(0x6f4bd30, internal_6f4bd30, public_6f4bd30);
extern "C" NAKED register_t __cdecl internal_6f4bd30()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        lea eax, ss:[esp+0x20]
        push ebp
        push eax
        mov ebx, ecx
        call public_6f49b00
        mov ecx, dword ptr ds : [ebx+0xC]
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 4
        cmp ecx, eax
        jne public_6f4bd54
        mov dword ptr ds : [ebx+8], ebp
        public_6f4bd54 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        push esi
        push edi
        push 0
        push 0
        push edx
        lea eax, ds:[ebx+4]
        push eax
        mov ecx, ebp
        call public_6f48ba0
        mov ecx, dword ptr ss : [esp+0x2C]
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        lea ecx, ds:[ebx+0x20C]
        mov dword ptr ss : [esp+0x1C], 0
        call public_6f003e0
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x28]
        call public_6fa6e80
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+0x10], ebp
        mov ecx, dword ptr ds : [ebx+0x200]
        mov eax, dword ptr ds : [ebx+0x204]
        lea edi, ds:[ebx+0x1FC]
        push ecx
        push eax
        push eax
        call public_6f6a640
        mov ecx, dword ptr ds : [edi+8]
        add esp, 0xC
        push ecx
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6ea1490
        mov dword ptr ds : [edi+8], esi
        mov eax, dword ptr ds : [ebx+0x210]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f4be3a
        public_6f4bde2 : nop
        lea edx, ds:[esi+0xC]
        push edx
        call public_6f49b00
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ecx
        mov ecx, edi
        call public_6f937c0
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6f4be19
        push eax
        call public_6ed1d10
        add esp, 4
        jmp public_6f4be30
        public_6f4be19 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f4be2b
        public_6f4be21 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6f4be21
        public_6f4be2b : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6f4be32
        public_6f4be30 : nop
        mov esi, eax
        public_6f4be32 : nop
        cmp esi, dword ptr ds : [ebx+0x210]
        jne public_6f4bde2
        public_6f4be3a : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ebx]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0xC]
        test eax, eax
        pop edi
        pop esi
        je public_6f4be57
        mov dword ptr ds : [eax+0x20], ebp
        mov edx, dword ptr ds : [ebx]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x10]
        public_6f4be57 : nop
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6f4bd30)
    }
}

#undef public_6f4bd54
#undef public_6f4bde2
#undef public_6f4be19
#undef public_6f4be21
#undef public_6f4be2b
#undef public_6f4be30
#undef public_6f4be32
#undef public_6f4be3a
#undef public_6f4be57
