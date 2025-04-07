#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2fe10);
CLANG_FORWARD_PROC_SYMBOL(public_6c30200);
CLANG_FORWARD_PROC_SYMBOL(public_6c304a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c30820);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34b60);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c2f933 _public_6c2f933
#define public_6c2f93b _public_6c2f93b
#define public_6c2f970 _public_6c2f970
#define public_6c2f97f _public_6c2f97f
#define public_6c2f9a1 _public_6c2f9a1
#define public_6c2f9ca _public_6c2f9ca
#define public_6c2f9ee _public_6c2f9ee
#define public_6c2f9f2 _public_6c2f9f2
#define public_6c2fa12 _public_6c2fa12

PROC_DECLARE(0x6c2f900, internal_6c2f900, public_6c2f900);
extern "C" NAKED register_t __cdecl internal_6c2f900()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x1C]
        lea esi, ds:[edi+4]
        push eax
        mov ecx, esi
        call public_6c34ab0
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_6c2f933
        mov edx, dword ptr ss : [esp+0x1C]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6c2f933
        lea eax, ss:[esp+0x18]
        jmp public_6c2f93b
        public_6c2f933 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6c2f93b : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+8]
        je public_6c2fa12
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_6c34b60
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        mov edi, eax
        call public_6c34ab0
        mov ebx, eax
        cmp ebx, edi
        mov dword ptr ss : [esp+0x18], ebx
        je public_6c2f97f
        lea ebx, ds:[ebx]
        public_6c2f970 : nop
        lea ecx, ss:[esp+0x18]
        call public_6c304a0
        cmp dword ptr ss : [esp+0x18], edi
        jne public_6c2f970
        public_6c2f97f : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov eax, ebx
        mov dword ptr ss : [esp+0xC], eax
        je public_6c2f9ee
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx]
        jne public_6c2f9ee
        cmp edi, ecx
        jne public_6c2f9ee
        mov ebx, dword ptr ds : [ecx+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6c2f9ca
        public_6c2f9a1 : nop
        mov edx, dword ptr ds : [edi+8]
        push edx
        mov ecx, esi
        call public_6c30200
        mov edi, dword ptr ds : [edi]
        push 0
        lea ecx, ds:[ebx+0xC]
        call public_6c30820
        push ebx
        call public_6c34ea0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6c2f9a1
        public_6c2f9ca : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebx
        add esp, 8
        ret 8
        public_6c2f9ee : nop
        cmp ebx, edi
        je public_6c2fa12
        public_6c2f9f2 : nop
        lea ecx, ss:[esp+0xC]
        mov ebx, eax
        call public_6c304a0
        push ebx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_6c2fe10
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jne public_6c2f9f2
        public_6c2fa12 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6c2f900)
    }
}

#undef public_6c2f933
#undef public_6c2f93b
#undef public_6c2f970
#undef public_6c2f97f
#undef public_6c2f9a1
#undef public_6c2f9ca
#undef public_6c2f9ee
#undef public_6c2f9f2
#undef public_6c2fa12
