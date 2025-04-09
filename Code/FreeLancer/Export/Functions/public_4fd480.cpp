#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a80);
CLANG_FORWARD_PROC_SYMBOL(public_4fd480);
CLANG_FORWARD_PROC_SYMBOL(public_537ac0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf4f1);

#define public_4fd4ce _public_4fd4ce
#define public_4fd4db _public_4fd4db
#define public_4fd4e7 _public_4fd4e7

PROC_DECLARE(0x4fd480, internal_4fd480, public_4fd480);
extern "C" NAKED register_t __cdecl internal_4fd480()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf4f1 @0x4fd482*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf4f1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_4fd4e7
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edx
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [esi+0xC], edx
        je public_4fd4ce
        call public_4f7a80
        public_4fd4ce : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_4fd4db
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_4fd4db : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_4fd4e7
        call public_537ac0
        public_4fd4e7 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4fd480)
    }
}

#undef public_4fd4ce
#undef public_4fd4db
#undef public_4fd4e7
