#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66186e0);
CLANG_FORWARD_PROC_SYMBOL(public_6618740);
CLANG_FORWARD_PROC_SYMBOL(public_6618ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6619ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6619c20);
CLANG_FORWARD_PROC_SYMBOL(public_6619c30);
CLANG_FORWARD_PROC_SYMBOL(public_6619d80);
CLANG_FORWARD_PROC_SYMBOL(public_661a130);
CLANG_FORWARD_PROC_SYMBOL(public_6627050);
CLANG_FORWARD_PROC_SYMBOL(public_66276c0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6619ace _public_6619ace
#define public_6619b8c _public_6619b8c
#define public_6619b9e _public_6619b9e
#define public_6619bcf _public_6619bcf
#define public_6619bd9 _public_6619bd9
#define public_6619c0e _public_6619c0e

PROC_DECLARE(0x6619ab0, internal_6619ab0, public_6619ab0);
extern "C" NAKED register_t __cdecl internal_6619ab0()
{
    __asm
    {
        sub esp, 0x1C
        mov eax, dword ptr ds : [ecx+8]
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        push edi
        cmp ebx, eax
        mov dword ptr ss : [esp+0x14], ecx
        mov edi, ebx
        je public_6619c0e
        push ebp
        push esi
        xor ebp, ebp
        public_6619ace : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        call public_6619ab0
        mov eax, dword ptr ds : [ebx+0x14]
        mov edi, dword ptr ds : [edi]
        lea esi, ds:[ebx+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], eax
        call public_66276c0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0x10]
        add esp, 4
        cmp eax, ebp
        mov dword ptr ss : [esp+0x30], ecx
        je public_6619b8c
        lea edx, ss:[esp+0x20]
        mov ecx, esi
        push edx
        call public_6627050
        push eax
        lea ecx, ss:[esp+0x34]
        call public_6618740
        test al, al
        je public_6619b8c
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x14]
        push eax
        call public_661a130
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_6618740
        test al, al
        je public_6619b8c
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6619c20
        mov eax, dword ptr ds : [eax]
        add esp, 4
        mov ecx, esi
        push eax
        call public_6619d80
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6619c20
        mov edx, dword ptr ds : [esi+8]
        xor ebp, ebp
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ds : [esi+4]
        push eax
        mov dword ptr ds : [esi+0x10], ebp
        call public_66276c0
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6619c30
        mov ecx, dword ptr ds : [esi+4]
        add esp, 0xC
        lea edx, ss:[esp+0x18]
        mov dword ptr ds : [eax], ecx
        push edx
        mov ecx, esi
        call public_6627050
        jmp public_6619bd9
        public_6619b8c : nop
        lea eax, ss:[esp+0x10]
        lea ecx, ss:[esp+0x30]
        push eax
        call public_6618740
        test al, al
        jne public_6619bcf
        public_6619b9e : nop
        lea ecx, ss:[esp+0x24]
        push 0
        push ecx
        lea ecx, ss:[esp+0x38]
        call public_66186e0
        mov edx, dword ptr ds : [eax]
        lea eax, ss:[esp+0x28]
        push edx
        push eax
        mov ecx, esi
        call public_6618ad0
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x34]
        call public_6618740
        test al, al
        je public_6619b9e
        public_6619bcf : nop
        mov edx, dword ptr ss : [esp+0x30]
        xor ebp, ebp
        mov dword ptr ss : [esp+0x18], edx
        public_6619bd9 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_66281d0
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], ebp
        push ecx
        mov dword ptr ds : [esi+0x10], ebp
        call public_66281d0
        push ebx
        mov dword ptr ds : [esi+8], ebp
        call public_66281d0
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 0xC
        mov ebx, edi
        cmp edi, dword ptr ds : [ecx+8]
        jne public_6619ace
        pop esi
        pop ebp
        public_6619c0e : nop
        pop edi
        pop ebx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x6619ab0)
    }
}

#undef public_6619ace
#undef public_6619b8c
#undef public_6619b9e
#undef public_6619bcf
#undef public_6619bd9
#undef public_6619c0e
