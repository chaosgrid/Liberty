#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a9e);
CLANG_FORWARD_PROC_SYMBOL(public_418f18);
CLANG_FORWARD_JUMP_SYMBOL(public_41a1da);

#define public_40d6db _public_40d6db

PROC_DECLARE(0x40d630, internal_40d630, public_40d630);
extern "C" NAKED register_t __cdecl internal_40d630()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a1da @0x40d632*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a1da
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push 0x234
        call public_418a9e
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_40d6db
        push edi
        mov ecx, esi
        call public_418f18
        push 0
        push 0
        push 0
        mov dword ptr ds : [esi], offset public_41d340
        mov dword ptr ds : [esi+0xF8], 0x21
        call dword ptr ds : [public_41b188]
        mov dword ptr ds : [esi+0xF4], eax
        mov eax, 0x21
        lea edi, ds:[esi+0x100]
        mov ecx, 0x40
        rep stosd
        mov dword ptr ds : [esi+0x204], eax
        xor eax, eax
        lea edi, ds:[esi+0x208]
        mov dword ptr ds : [esi+0x200], 0
        mov byte ptr ds : [esi+0xFC], 1
        mov ecx, 0xB
        rep stosd
        pop edi
        mov eax, esi
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_40d6db : nop
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x40d630)
    }
}

#undef public_40d6db
