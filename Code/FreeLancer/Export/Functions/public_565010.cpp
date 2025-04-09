#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_565010);
CLANG_FORWARD_JUMP_SYMBOL(public_5c39c3);

#define public_56504f _public_56504f
#define public_565068 _public_565068

PROC_DECLARE(0x565010, internal_565010, public_565010);
extern "C" NAKED register_t __cdecl internal_565010()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c39c3 @0x565012*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c39c3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_5e2718
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 1
        je public_56504f
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x14], 0
        public_56504f : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        mov byte ptr ss : [esp+0x10], 0
        je public_565068
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x14], 0
        public_565068 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_5e2708
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x565010)
    }
}

#undef public_56504f
#undef public_565068
