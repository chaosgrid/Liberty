#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415400);
CLANG_FORWARD_JUMP_SYMBOL(public_41a9d1);

#define public_415438 _public_415438

PROC_DECLARE(0x415400, internal_415400, public_415400);
extern "C" NAKED register_t __cdecl internal_415400()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a9d1 @0x415402*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a9d1
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
        je public_415438
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ds : [esi], eax
        public_415438 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x415400)
    }
}

#undef public_415438
