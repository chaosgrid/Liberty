#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eed7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f29630);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d6c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e250);
CLANG_FORWARD_PROC_SYMBOL(public_6f69d00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f2d6f0 _public_6f2d6f0
#define public_6f2d717 _public_6f2d717
#define public_6f2d743 _public_6f2d743
#define public_6f2d747 _public_6f2d747
#define public_6f2d767 _public_6f2d767

PROC_DECLARE(0x6f2d6c0, internal_6f2d6c0, public_6f2d6c0);
extern "C" NAKED register_t __cdecl internal_6f2d6c0()
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
        je public_6f2d743
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6f2d743
        cmp ebx, eax
        jne public_6f2d743
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f2d717
        lea esp, ss:[esp]
        public_6f2d6f0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f2e250
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_6f29630
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f2d6f0
        public_6f2d717 : nop
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
        public_6f2d743 : nop
        cmp ecx, ebx
        je public_6f2d767
        public_6f2d747 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6f69d00
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6eed7f0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6f2d747
        public_6f2d767 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f2d6c0)
    }
}

#undef public_6f2d6f0
#undef public_6f2d717
#undef public_6f2d743
#undef public_6f2d747
#undef public_6f2d767
