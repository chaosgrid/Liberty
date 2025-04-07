#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3b20);
CLANG_FORWARD_PROC_SYMBOL(public_6d460f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d46370);
CLANG_FORWARD_PROC_SYMBOL(public_6d467b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d46850);
CLANG_FORWARD_PROC_SYMBOL(public_6d56bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5b040);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d56bf8 _public_6d56bf8
#define public_6d56c04 _public_6d56c04
#define public_6d56c8a _public_6d56c8a
#define public_6d56c9d _public_6d56c9d
#define public_6d56cad _public_6d56cad
#define public_6d56cca _public_6d56cca
#define public_6d56cda _public_6d56cda
#define public_6d56dbf _public_6d56dbf

PROC_DECLARE(0x6d56bd0, internal_6d56bd0, public_6d56bd0);
extern "C" NAKED register_t __cdecl internal_6d56bd0()
{
    __asm
    {
        sub esp, 0x610
        mov eax, dword ptr ds : [ecx+0x28]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d56dbf
        mov ebp, dword ptr ss : [esp+0x624]
        mov ebx, dword ptr ds : [public_6d64bc0]
        public_6d56bf8 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jne public_6d56c04
        mov eax, offset public_6d64efc
        public_6d56c04 : nop
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov byte ptr ss : [esp+0x228], 0
        call public_6d46370
/*FIXUP push offset public_6d6aea4 @0x6d56c17*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea4
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x230]
        push edx
        lea eax, ss:[esp+0x234]
        push 0
        push eax
        call ebx
        lea ecx, ss:[esp+0x34]
        push ecx
        call dword ptr ds : [public_6d64ca8]
        add esp, 0x20
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x220]
        repne scasb
        mov eax, dword ptr ss : [ebp+8]
        not ecx
        dec ecx
        push ecx
        lea edx, ss:[esp+0x224]
        push edx
        push eax
        push 0
        mov ecx, ebp
        call public_6d5b040
        test eax, eax
        je public_6d56c8a
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ecx+0x28]
        jne public_6d56bf8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x610
        ret 4
        public_6d56c8a : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        mov dword ptr ss : [esp+0x14], offset public_6d64efc
        je public_6d56c9d
        mov dword ptr ss : [esp+0x14], eax
        public_6d56c9d : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [edx+8]
        test edi, edi
        jne public_6d56cad
        mov edi, offset public_6d64efc
        public_6d56cad : nop
        call dword ptr ds : [public_6d647e8]
        test al, al
        lea eax, ss:[esp+0x11C]
        je public_6d56cca
        push edi
        push eax
        call public_6d46370
        add esp, 8
        jmp public_6d56cda
        public_6d56cca : nop
        push 0x104
        push edi
        push eax
        call dword ptr ds : [public_6d64be0]
        add esp, 0xC
        public_6d56cda : nop
        lea ecx, ss:[esp+0x11C]
        push 0
        push ecx
        call public_6d460f0
        push eax
        lea edx, ss:[esp+0x22C]
        push 0
        push edx
        call ebx
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0x14
        push eax
        call dword ptr ds : [public_6d64c98]
        mov edi, eax
        push edi
        call dword ptr ds : [public_6d64ca0]
        push edi
        call dword ptr ds : [public_6d64c80]
        mov ecx, dword ptr ds : [public_6d90144]
        mov ebp, eax
        add esp, 0xC
        lea edx, ss:[ebp+ebp]
        push edx
        mov dword ptr ds : [public_6d90150], ecx
        push edi
        mov ecx, offset public_6d8fd38
        call public_6d46850
        mov ecx, offset public_6d8fd38
        call public_6d467b0
        push eax
        push ebp
        lea eax, ss:[esp+0x20]
/*FIXUP push offset public_6d6aec0 @0x6d56d45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aec0
        push eax
        call dword ptr ds : [public_6d64c74]
        push edi
        call dword ptr ds : [public_6d64c94]
/*FIXUP push offset public_6d6aea4 @0x6d56d58*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea4
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x23C]
        push edx
        lea eax, ss:[esp+0x240]
        push 0
        push eax
        call ebx
        lea ecx, ss:[esp+0x40]
        push ecx
        call dword ptr ds : [public_6d64ca8]
        lea edx, ss:[esp+0x24C]
        push edx
        call dword ptr ds : [public_6d64cac]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0x30
        push 1
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_6ce3b20
        push esi
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x2C]
        add esp, 4
        dec ecx
        mov dword ptr ds : [eax+0x2C], ecx
        public_6d56dbf : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x610
        ret 4
        UNREACHABLE_TRAP(0x6d56bd0)
    }
}

#undef public_6d56bf8
#undef public_6d56c04
#undef public_6d56c8a
#undef public_6d56c9d
#undef public_6d56cad
#undef public_6d56cca
#undef public_6d56cda
#undef public_6d56dbf
