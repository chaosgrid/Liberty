#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6293d00);
CLANG_FORWARD_PROC_SYMBOL(public_62af640);
CLANG_FORWARD_JUMP_SYMBOL(public_6393648);

#define public_6293d37 _public_6293d37

PROC_DECLARE(0x6293d00, internal_6293d00, public_6293d00);
extern "C" NAKED register_t __cdecl internal_6293d00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393648 @0x6293d02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393648
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_639c6e8
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0
        je public_6293d37
        call public_62af640
        public_6293d37 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_639c6b0
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6293d00)
    }
}

#undef public_6293d37
