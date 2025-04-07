#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21af0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2fbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ab0);

#define public_6c2fa53 _public_6c2fa53
#define public_6c2fa5b _public_6c2fa5b
#define public_6c2fa9e _public_6c2fa9e
#define public_6c2faae _public_6c2faae

PROC_DECLARE(0x6c2fa20, internal_6c2fa20, public_6c2fa20);
extern "C" NAKED register_t __cdecl internal_6c2fa20()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push esi
        push edi
        lea eax, ss:[esp+0x28]
        lea esi, ds:[ebx+4]
        push eax
        mov ecx, esi
        call public_6c34ab0
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        je public_6c2fa53
        mov edx, dword ptr ss : [esp+0x28]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6c2fa53
        lea eax, ss:[esp+0x20]
        jmp public_6c2fa5b
        public_6c2fa53 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6c2fa5b : nop
        mov edi, dword ptr ds : [eax]
        cmp edi, dword ptr ds : [ebx+8]
        je public_6c2faae
        mov eax, dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0x18]
        xor ebx, ebx
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ebx
        call public_6c2fbb0
        mov esi, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x10]
        call public_6c21af0
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        je public_6c2fa9e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x10], ebx
        public_6c2fa9e : nop
        mov eax, dword ptr ds : [edi+0x10]
        cmp eax, ebx
        mov dword ptr ds : [esi+0x10], eax
        je public_6c2faae
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_6c2faae : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6c2fa20)
    }
}

#undef public_6c2fa53
#undef public_6c2fa5b
#undef public_6c2fa9e
#undef public_6c2faae
