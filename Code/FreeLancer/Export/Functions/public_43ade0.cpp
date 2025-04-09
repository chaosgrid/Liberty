#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43ade0);
CLANG_FORWARD_PROC_SYMBOL(public_43c870);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_43ae1c _public_43ae1c
#define public_43ae24 _public_43ae24
#define public_43ae30 _public_43ae30
#define public_43ae53 _public_43ae53
#define public_43ae63 _public_43ae63

PROC_DECLARE(0x43ade0, internal_43ade0, public_43ade0);
extern "C" NAKED register_t __cdecl internal_43ade0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+4]
        push esi
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x18]
        lea esi, ds:[edi+0xC]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        call public_52c7a0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xC], eax
        je public_43ae1c
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_43ae1c
        lea eax, ss:[esp+0xC]
        jmp public_43ae24
        public_43ae1c : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_43ae24 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x10]
        je public_43ae30
        mov eax, dword ptr ds : [eax+0x10]
        jmp public_43ae53
        public_43ae30 : nop
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x110
/*FIXUP push offset public_5caf30 @0x43ae3c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caefc @0x43ae46*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caefc
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor eax, eax
        public_43ae53 : nop
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_43ae63
        push ebx
        lea ecx, ds:[eax+0x18]
        call public_43c870
        public_43ae63 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x43ade0)
    }
}

#undef public_43ae1c
#undef public_43ae24
#undef public_43ae30
#undef public_43ae53
#undef public_43ae63
