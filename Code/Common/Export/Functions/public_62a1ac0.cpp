#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626ba00);
CLANG_FORWARD_PROC_SYMBOL(public_62a01e0);
CLANG_FORWARD_PROC_SYMBOL(public_62a02a0);
CLANG_FORWARD_PROC_SYMBOL(public_62a02b0);
CLANG_FORWARD_PROC_SYMBOL(public_62a0450);
CLANG_FORWARD_PROC_SYMBOL(public_62a06b0);
CLANG_FORWARD_PROC_SYMBOL(public_62a1ac0);
CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62a1af0 _public_62a1af0
#define public_62a1b30 _public_62a1b30
#define public_62a1b44 _public_62a1b44
#define public_62a1bd3 _public_62a1bd3
#define public_62a1bf0 _public_62a1bf0
#define public_62a1c09 _public_62a1c09

PROC_DECLARE(0x62a1ac0, internal_62a1ac0, public_62a1ac0);
extern "C" NAKED register_t __cdecl internal_62a1ac0()
{
    __asm
    {
        sub esp, 0xC
        push edi
        mov edi, ecx
        lea eax, ss:[esp+4]
        lea ecx, ds:[edi+4]
        push eax
        mov dword ptr ss : [esp+0xC], edi
        call public_632c410
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], ecx
        je public_62a1c09
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push esi
        public_62a1af0 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ecx+4]
        mov ax, word ptr ds : [eax+4]
        cmp ax, word ptr ds : [edx+4]
        je public_62a1bf0
        call public_62a02a0
        push eax
        mov ecx, ebx
        call public_62a02b0
        test al, al
        je public_62a1bf0
        mov ecx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, 2
        je public_62a1b30
        cmp eax, 3
        jne public_62a1b44
        public_62a1b30 : nop
        push esi
        mov ecx, edi
        call public_62a1ac0
        mov ecx, esi
        call public_62a0450
        jmp public_62a1bf0
        public_62a1b44 : nop
        mov ecx, esi
        call public_62a06b0
        mov esi, dword ptr ds : [eax]
        mov ecx, ebx
        call public_62a06b0
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_6399028]
        push esi
        push edx
        push 0x146
/*FIXUP push offset public_639d9e0 @0x62a1b62*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d9e0
        mov ecx, 0x100002
/*FIXUP push offset public_639db38 @0x62a1b6c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639db38
        push ecx
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov ax, word ptr ds : [edx+4]
        movzx eax, ax
        add esp, 0x18
        push eax
        mov esi, 0x100002
        call public_62a02a0
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x148
/*FIXUP push offset public_639d9e0 @0x62a1b9f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d9e0
/*FIXUP push offset public_639db08 @0x62a1ba4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639db08
        push esi
        call dword ptr ds : [ecx]
        mov esi, dword ptr ss : [esp+0x24]
        add esp, 0x18
        lea ecx, ss:[esp+0xC]
        call public_626ba00
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        je public_62a1bd3
        mov ecx, edi
        call public_62a01e0
        push edi
        call public_6391d5a
        add esp, 4
        public_62a1bd3 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ds:[eax+4]
        mov dword ptr ds : [esi+0x10], 0
        call public_62be400
        mov edi, dword ptr ss : [esp+0x10]
        public_62a1bf0 : nop
        lea ecx, ss:[esp+0xC]
        call public_63429f0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ss : [esp+0x14]
        jne public_62a1af0
        pop esi
        pop ebx
        public_62a1c09 : nop
        pop edi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62a1ac0)
    }
}

#undef public_62a1af0
#undef public_62a1b30
#undef public_62a1b44
#undef public_62a1bd3
#undef public_62a1bf0
#undef public_62a1c09
