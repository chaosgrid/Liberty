#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d11ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6d14350);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ea0);

#define public_6d14388 _public_6d14388
#define public_6d14390 _public_6d14390
#define public_6d143ae _public_6d143ae
#define public_6d143b4 _public_6d143b4

PROC_DECLARE(0x6d14350, internal_6d14350, public_6d14350);
extern "C" NAKED register_t __cdecl internal_6d14350()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x18]
        lea esi, ds:[edi+0x1C]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], eax
        call public_6d59ea0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+8], eax
        je public_6d14388
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6d14388
        lea eax, ss:[esp+8]
        jmp public_6d14390
        public_6d14388 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6d14390 : nop
        mov edx, dword ptr ds : [edi+0x20]
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        pop edi
        pop esi
        je public_6d143b4
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6d143ae
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, eax
        call public_6d11ee0
        public_6d143ae : nop
        add esp, 8
        ret 8
        public_6d143b4 : nop
        mov edx, dword ptr ds : [public_6d64a44]
        push ecx
        push 0x66D
/*FIXUP push offset public_6d6840c @0x6d143c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d68480 @0x6d143ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68480
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d14350)
    }
}

#undef public_6d14388
#undef public_6d14390
#undef public_6d143ae
#undef public_6d143b4
