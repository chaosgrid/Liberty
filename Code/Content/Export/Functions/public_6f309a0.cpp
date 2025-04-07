#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f03670);
CLANG_FORWARD_PROC_SYMBOL(public_6f309a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f30b60);
CLANG_FORWARD_PROC_SYMBOL(public_6f30fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f309d0 _public_6f309d0
#define public_6f309f7 _public_6f309f7
#define public_6f30a23 _public_6f30a23
#define public_6f30a27 _public_6f30a27
#define public_6f30a47 _public_6f30a47

PROC_DECLARE(0x6f309a0, internal_6f309a0, public_6f309a0);
extern "C" NAKED register_t __cdecl internal_6f309a0()
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
        je public_6f30a23
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6f30a23
        cmp ebx, eax
        jne public_6f30a23
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f309f7
        lea esp, ss:[esp]
        public_6f309d0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f30fc0
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_6f98760
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f309d0
        public_6f309f7 : nop
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
        public_6f30a23 : nop
        cmp ecx, ebx
        je public_6f30a47
        public_6f30a27 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6f03670
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6f30b60
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6f30a27
        public_6f30a47 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f309a0)
    }
}

#undef public_6f309d0
#undef public_6f309f7
#undef public_6f30a23
#undef public_6f30a27
#undef public_6f30a47
