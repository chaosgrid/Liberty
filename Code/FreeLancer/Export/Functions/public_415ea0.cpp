#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415ea0);

#define public_415ed3 _public_415ed3
#define public_415f1f _public_415f1f
#define public_415f26 _public_415f26

PROC_DECLARE(0x415ea0, internal_415ea0, public_415ea0);
extern "C" NAKED register_t __cdecl internal_415ea0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x118]
        test eax, eax
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        je public_415ed3
        cmp dword ptr ds : [esi+0x11C], edi
        je public_415f1f
        cmp edi, dword ptr ds : [esi+0x120]
        je public_415f1f
        push eax
        call dword ptr ds : [public_5c6e3c]
        mov dword ptr ds : [esi+0x118], 0
        public_415ed3 : nop
        lea eax, ds:[esi+0xDC]
        push eax
        mov dword ptr ds : [eax], edi
        call dword ptr ds : [public_5c6e08]
        test eax, eax
        mov dword ptr ds : [esi+0x118], eax
        je public_415f26
        push eax
        mov eax, dword ptr ds : [esi+0xD8]
        push eax
        mov dword ptr ds : [esi+0x11C], edi
        call dword ptr ds : [public_5c6e0c]
        mov edx, dword ptr ds : [esi+0xD8]
        lea ecx, ds:[esi+0x120]
        push ecx
        push edx
        call dword ptr ds : [public_5c6e40]
        mov eax, dword ptr ds : [public_6105b0]
        mov dword ptr ds : [esi+0x158], eax
        public_415f1f : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_415f26 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
        push edi
        add esi, 8
        push esi
        push 0x9AE
/*FIXUP push offset public_5c8bf0 @0x415f36*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bf0
        mov eax, 0x100001
/*FIXUP push offset public_5c8db0 @0x415f40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8db0
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x18
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x415ea0)
    }
}

#undef public_415ed3
#undef public_415f1f
#undef public_415f26
