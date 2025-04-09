#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44ded0);
CLANG_FORWARD_PROC_SYMBOL(public_44e870);
CLANG_FORWARD_PROC_SYMBOL(public_451fd0);
CLANG_FORWARD_PROC_SYMBOL(public_452e40);
CLANG_FORWARD_PROC_SYMBOL(public_452eb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9d2b);

#define public_44df37 _public_44df37
#define public_44df79 _public_44df79
#define public_44df7d _public_44df7d
#define public_44e00e _public_44e00e
#define public_44e018 _public_44e018

PROC_DECLARE(0x44ded0, internal_44ded0, public_44ded0);
extern "C" NAKED register_t __cdecl internal_44ded0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9d2b @0x44ded2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9d2b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x50]
        mov al, byte ptr ds : [esi+4]
        push edi
        xor edi, edi
        and al, 1
        mov ebx, ecx
        mov byte ptr ss : [esp+0x54], al
        jne public_44e018
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ds : [ebx+0x3C]
/*FIXUP push offset public_5cc40c @0x44df0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc40c
        push ecx
        push edx
        call dword ptr ds : [public_5c625c]
        add esp, 0xC
        cmp eax, edi
        mov dword ptr ss : [esp+0x50], edi
        je public_44df37
        push eax
        call dword ptr ds : [public_5c7208]
        push eax
        mov dword ptr ss : [esp+0x58], eax
        call dword ptr ds : [public_5c7204]
        add esp, 8
        public_44df37 : nop
        mov eax, dword ptr ss : [esp+0x50]
        push eax
        push esi
        mov ecx, ebx
        call public_44e870
        mov ebp, eax
        cmp ebp, edi
        je public_44e018
        push 0x9F8
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x54], eax
        cmp eax, edi
        mov dword ptr ss : [esp+0x48], edi
        je public_44df79
        push esi
        push ebx
        push ebx
        mov ecx, eax
        call public_451fd0
        mov edi, eax
        mov dword ptr ss : [esp+0x54], edi
        jmp public_44df7d
        public_44df79 : nop
        mov dword ptr ss : [esp+0x54], edi
        public_44df7d : nop
        mov dword ptr ds : [edi+0x6C], ebp
        mov cl, byte ptr ds : [esi+0x40]
        mov byte ptr ss : [ebp+0x15], cl
        mov dl, byte ptr ds : [esi+0x41]
        mov byte ptr ss : [ebp+0x16], dl
        mov dword ptr ss : [ebp+0x18], 0
        mov eax, dword ptr ds : [esi+0x38]
        push eax
        lea ecx, ds:[edi+0x70]
        push ecx
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call dword ptr ds : [public_5c60cc]
        mov esi, dword ptr ss : [esp+0x58]
        add esp, 8
        test esi, esi
        je public_44e018
/*FIXUP push offset public_5cc404 @0x44dfb4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc404
        push esi
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_44e00e
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, edi
        mov byte ptr ds : [ebx+0x61], 1
        mov dword ptr ds : [ebx+0x9C], ebp
        call public_452e40
        mov esi, eax
        lea edi, ds:[ebx+0x64]
        mov ecx, 0xC
        rep movsd
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0x54]
        fstp dword ptr ds : [ebx+0x94]
        call public_452eb0
        mov edi, dword ptr ss : [esp+0x54]
        mov esi, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [ebx+0x98], eax
        public_44e00e : nop
        push esi
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        public_44e018 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 8
        UNREACHABLE_TRAP(0x44ded0)
    }
}

#undef public_44df37
#undef public_44df79
#undef public_44df7d
#undef public_44e00e
#undef public_44e018
