#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_634b710);
CLANG_FORWARD_JUMP_SYMBOL(public_6397ce4);

#define public_634b755 _public_634b755
#define public_634b75c _public_634b75c
#define public_634b77c _public_634b77c
#define public_634b783 _public_634b783
#define public_634b7a3 _public_634b7a3
#define public_634b7aa _public_634b7aa

PROC_DECLARE(0x634b710, internal_634b710, public_634b710);
extern "C" NAKED register_t __cdecl internal_634b710()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397ce4 @0x634b712*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397ce4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi], offset public_63a54c8
        mov eax, dword ptr ds : [esi+0x38]
        lea ecx, ds:[esi+0x3C]
        xor edi, edi
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], 4
        je public_634b75c
        cmp eax, edi
        je public_634b755
        push eax
        call public_6343fb0
        add esp, 4
        public_634b755 : nop
        mov dword ptr ds : [esi+0x38], edi
        mov word ptr ds : [esi+0x34], di
        public_634b75c : nop
        mov word ptr ds : [esi+0x36], di
        mov eax, dword ptr ds : [esi+0x30]
        lea edx, ds:[esi+0x34]
        cmp eax, edx
        mov byte ptr ss : [esp+0x14], 3
        je public_634b783
        cmp eax, edi
        je public_634b77c
        push eax
        call public_6343fb0
        add esp, 4
        public_634b77c : nop
        mov dword ptr ds : [esi+0x30], edi
        mov word ptr ds : [esi+0x2C], di
        public_634b783 : nop
        mov word ptr ds : [esi+0x2E], di
        mov eax, dword ptr ds : [esi+0x28]
        lea ecx, ds:[esi+0x2C]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x14], 2
        je public_634b7aa
        cmp eax, edi
        je public_634b7a3
        push eax
        call public_6343fb0
        add esp, 4
        public_634b7a3 : nop
        mov dword ptr ds : [esi+0x28], edi
        mov word ptr ds : [esi+0x24], di
        public_634b7aa : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov word ptr ds : [esi+0x26], di
        mov eax, offset public_639b64c
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], eax
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x634b710)
    }
}

#undef public_634b755
#undef public_634b75c
#undef public_634b77c
#undef public_634b783
#undef public_634b7a3
#undef public_634b7aa
