#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62453c0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_624aabb);

#define public_62453e0 _public_62453e0
#define public_62453e2 _public_62453e2
#define public_6245413 _public_6245413
#define public_6245427 _public_6245427
#define public_624544c _public_624544c

PROC_DECLARE(0x62453c0, internal_62453c0, public_62453c0);
extern "C" NAKED register_t __cdecl internal_62453c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624aabb @0x62453c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624aabb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        test ecx, ecx
        push esi
        je public_62453e0
        lea esi, ds:[ecx+4]
        jmp public_62453e2
        public_62453e0 : nop
        xor esi, esi
        public_62453e2 : nop
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi+0x28], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ds : [esi+0x30], offset public_624bd80
        je public_6245413
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_6245413
        push eax
        call public_62460e0
        add esp, 4
        public_6245413 : nop
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_6245427
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x24], 0
        public_6245427 : nop
        mov dword ptr ds : [esi+4], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov dword ptr ds : [esi+0xC], offset public_624bd80
        je public_624544c
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        je public_624544c
        push esi
        call public_62460e0
        add esp, 4
        public_624544c : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62453c0)
    }
}

#undef public_62453e0
#undef public_62453e2
#undef public_6245413
#undef public_6245427
#undef public_624544c
