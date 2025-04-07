#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f06e00);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad268);

#define public_6f06e38 _public_6f06e38

PROC_DECLARE(0x6f06e00, internal_6f06e00, public_6f06e00);
extern "C" NAKED register_t __cdecl internal_6f06e00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad268 @0x6f06e02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad268
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov ecx, dword ptr ds : [esi+0x24]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0
        je public_6f06e38
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x24], 0
        public_6f06e38 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_6fb43f8
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f06e00)
    }
}

#undef public_6f06e38
