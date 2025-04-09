#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43a3d0);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_43a408 _public_43a408
#define public_43a410 _public_43a410
#define public_43a426 _public_43a426

PROC_DECLARE(0x43a3d0, internal_43a3d0, public_43a3d0);
extern "C" NAKED register_t __cdecl internal_43a3d0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        lea esi, ds:[edi+0xC]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], eax
        call public_52c7a0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+8], eax
        je public_43a408
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_43a408
        lea eax, ss:[esp+8]
        jmp public_43a410
        public_43a408 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_43a410 : nop
        mov edx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        pop edi
        pop esi
        je public_43a426
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax]
        add esp, 8
        ret 4
        public_43a426 : nop
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x110
/*FIXUP push offset public_5caf30 @0x43a432*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf30
        mov eax, 0x100001
/*FIXUP push offset public_5caefc @0x43a43c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caefc
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        xor eax, eax
        mov eax, dword ptr ds : [eax]
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x43a3d0)
    }
}

#undef public_43a408
#undef public_43a410
#undef public_43a426
