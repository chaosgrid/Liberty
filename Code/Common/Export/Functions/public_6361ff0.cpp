#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6361e50);
CLANG_FORWARD_PROC_SYMBOL(public_6361ff0);
CLANG_FORWARD_JUMP_SYMBOL(public_6398498);

#define public_6362031 _public_6362031
#define public_6362038 _public_6362038

PROC_DECLARE(0x6361ff0, internal_6361ff0, public_6361ff0);
extern "C" NAKED register_t __cdecl internal_6361ff0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6398498 @0x6361ff2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398498
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
        mov dword ptr ds : [esi], offset public_63a57f4
        mov eax, dword ptr ds : [esi+0x10]
        xor edi, edi
        lea ecx, ds:[esi+0x14]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], edi
        je public_6362038
        cmp eax, edi
        je public_6362031
        push eax
        call public_6343fb0
        add esp, 4
        public_6362031 : nop
        mov dword ptr ds : [esi+0x10], edi
        mov word ptr ds : [esi+0xC], di
        public_6362038 : nop
        mov ecx, esi
        mov word ptr ds : [esi+0xE], di
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_6361e50
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6361ff0)
    }
}

#undef public_6362031
#undef public_6362038
