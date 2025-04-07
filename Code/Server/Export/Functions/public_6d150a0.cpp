#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d13270);
CLANG_FORWARD_PROC_SYMBOL(public_6d150a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ea0);

#define public_6d150d9 _public_6d150d9
#define public_6d150e1 _public_6d150e1
#define public_6d15106 _public_6d15106
#define public_6d15110 _public_6d15110

PROC_DECLARE(0x6d150a0, internal_6d150a0, public_6d150a0);
extern "C" NAKED register_t __cdecl internal_6d150a0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+0x58]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], ebx
        call public_6d59ea0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xC], eax
        je public_6d150d9
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6d150d9
        lea eax, ss:[esp+0xC]
        jmp public_6d150e1
        public_6d150d9 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_6d150e1 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x5C]
        je public_6d15110
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6d15106
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x20]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push ecx
        push edx
        push ebx
        mov ecx, eax
        call public_6d13270
        public_6d15106 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 0x10
        nop 
        public_6d15110 : nop
        push ecx
        mov ecx, dword ptr ds : [public_6d64a44]
        push 0x7B2
/*FIXUP push offset public_6d6840c @0x6d1511c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d68514 @0x6d15126*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68514
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 0x10
        UNREACHABLE_TRAP(0x6d150a0)
    }
}

#undef public_6d150d9
#undef public_6d150e1
#undef public_6d15106
#undef public_6d15110
