#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_466770);
CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_46d6d0);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb83c);

#define public_4667e2 _public_4667e2
#define public_4667e4 _public_4667e4
#define public_466817 _public_466817
#define public_466824 _public_466824
#define public_466848 _public_466848
#define public_4668b7 _public_4668b7
#define public_4668cd _public_4668cd
#define public_466907 _public_466907

PROC_DECLARE(0x466770, internal_466770, public_466770);
extern "C" NAKED register_t __cdecl internal_466770()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bb83c @0x466772*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb83c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], edi
        call public_432240
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, eax
        jne public_466907
        push ebp
        push esi
        push 0xC
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        xor ebp, ebp
        cmp esi, ebp
        mov dword ptr ss : [esp+0x44], ebp
        je public_4667e2
        mov dl, byte ptr ss : [esp+0x4C]
        push ebp
        push ebp
        mov ecx, esi
        mov byte ptr ds : [esi], dl
        call public_42a7e0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ebp
        jmp public_4667e4
        public_4667e2 : nop
        xor esi, esi
        public_4667e4 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        push eax
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        call dword ptr ds : [public_5c6094]
        add esp, 4
        cmp eax, ebp
        je public_466817
        mov edx, dword ptr ds : [eax]
        push esi
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        call public_57da40
        add esp, 8
        test al, al
        jne public_4668cd
        public_466817 : nop
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov dword ptr ss : [esp+0xC], eax
        je public_466848
        public_466824 : nop
        push ebp
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x14]
        call public_53ab20
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_46d680
        cmp dword ptr ss : [esp+0xC], edi
        jne public_466824
        public_466848 : nop
        push 0xFFFFFFFF
/*FIXUP push offset public_5ceee8 @0x46684a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ceee8
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_5c62f8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0xC], eax
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov ecx, esi
        mov byte ptr ss : [esp+0x4C], 2
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0xC]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, ebp
        mov byte ptr ss : [esp+0x44], 1
        je public_4668b7
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0xC], ebp
        public_4668b7 : nop
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call dword ptr ds : [public_5c62f4]
        mov edi, dword ptr ss : [esp+0x14]
        public_4668cd : nop
        mov eax, dword ptr ss : [esp+0x4C]
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], ebp
        call public_46d6d0
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+0x10], esi
        mov eax, esi
        pop esi
        pop ebp
        pop edi
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 4
        public_466907 : nop
        mov eax, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ss : [esp+0x34]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x466770)
    }
}

#undef public_4667e2
#undef public_4667e4
#undef public_466817
#undef public_466824
#undef public_466848
#undef public_4668b7
#undef public_4668cd
#undef public_466907
