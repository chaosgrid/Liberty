#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623cf70);
CLANG_FORWARD_JUMP_SYMBOL(public_624a548);

#define public_623cf90 _public_623cf90
#define public_623cf92 _public_623cf92
#define public_623cfb8 _public_623cfb8
#define public_623cfd4 _public_623cfd4

PROC_DECLARE(0x623cf70, internal_623cf70, public_623cf70);
extern "C" NAKED register_t __cdecl internal_623cf70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624a548 @0x623cf72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a548
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        test ecx, ecx
        push esi
        je public_623cf90
        lea esi, ds:[ecx+4]
        jmp public_623cf92
        public_623cf90 : nop
        xor esi, esi
        public_623cf92 : nop
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+0x98]
        mov dword ptr ss : [esp+0x10], 0
        test eax, eax
        je public_623cfb8
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x98], 0
        public_623cfb8 : nop
        mov eax, dword ptr ds : [esi+0x7C]
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        test eax, eax
        je public_623cfd4
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x7C], 0
        public_623cfd4 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x623cf70)
    }
}

#undef public_623cf90
#undef public_623cf92
#undef public_623cfb8
#undef public_623cfd4
