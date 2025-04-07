#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d14170);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ea0);

#define public_6d141a3 _public_6d141a3
#define public_6d141ab _public_6d141ab
#define public_6d141c0 _public_6d141c0

PROC_DECLARE(0x6d14170, internal_6d14170, public_6d14170);
extern "C" NAKED register_t __cdecl internal_6d14170()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+0x1C]
        push eax
        mov ecx, esi
        xor ebx, ebx
        call public_6d59ea0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xC], eax
        je public_6d141a3
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6d141a3
        lea eax, ss:[esp+0xC]
        jmp public_6d141ab
        public_6d141a3 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_6d141ab : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x20]
        je public_6d141c0
        mov eax, dword ptr ds : [eax+0x10]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        mov edi, edi
        public_6d141c0 : nop
        push ecx
        mov ecx, dword ptr ds : [public_6d64a44]
        push 0x66D
/*FIXUP push offset public_6d6840c @0x6d141cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d68480 @0x6d141d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68480
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d14170)
    }
}

#undef public_6d141a3
#undef public_6d141ab
#undef public_6d141c0
