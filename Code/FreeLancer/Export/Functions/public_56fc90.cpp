#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_56fc90);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b470);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3084);

#define public_56fd43 _public_56fd43
#define public_56fd9b _public_56fd9b
#define public_56fdcb _public_56fdcb

PROC_DECLARE(0x56fc90, internal_56fc90, public_56fc90);
extern "C" NAKED register_t __cdecl internal_56fc90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c3084 @0x56fc92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3084
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xD4]
        mov byte ptr ds : [eax+0x498], 1
        mov ecx, dword ptr ds : [esi+0xCC]
        push edi
        call public_57b370
        push 2
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62c0]
        mov ecx, dword ptr ds : [esi+0xCC]
        push eax
        mov dword ptr ss : [esp+0x34], 0
        call public_57b470
        or edi, 0xFFFFFFFF
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x30], edi
        call dword ptr ds : [public_5c62bc]
        mov eax, dword ptr ds : [esi+0x2CC]
        dec eax
        je public_56fd9b
        dec eax
        je public_56fd43
        sub eax, 2
        je public_56fd9b
        mov ecx, dword ptr ds : [public_5c62cc]
        lea eax, ds:[esi+0x218]
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+8], ecx
        mov ecx, dword ptr ds : [esi+0xCC]
        lea edx, ss:[esp+8]
        push edx
        mov dword ptr ss : [esp+0x34], 2
        call public_57b470
        lea ecx, ss:[esp+8]
        jmp public_56fdcb
        public_56fd43 : nop
        mov ecx, dword ptr ds : [public_5c62cc]
        lea eax, ds:[esi+0x230]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+0xCC]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x34], 3
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x30], edi
        call dword ptr ds : [public_5c62c8]
        mov eax, dword ptr ds : [esi+0xD4]
        pop edi
        mov byte ptr ds : [eax+0x498], 1
        pop esi
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        public_56fd9b : nop
        mov edx, dword ptr ds : [public_5c62cc]
        lea ecx, ds:[esi+0x224]
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x18], edx
        mov ecx, dword ptr ds : [esi+0xCC]
        lea eax, ss:[esp+0x18]
        push eax
        mov dword ptr ss : [esp+0x34], 1
        call public_57b470
        lea ecx, ss:[esp+0x18]
        public_56fdcb : nop
        mov dword ptr ss : [esp+0x30], edi
        call dword ptr ds : [public_5c62c8]
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x56fc90)
    }
}

#undef public_56fd43
#undef public_56fd9b
#undef public_56fdcb
