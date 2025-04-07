#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62acc40);
CLANG_FORWARD_PROC_SYMBOL(public_62b5980);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6394158);

#define public_62acc82 _public_62acc82

PROC_DECLARE(0x62acc40, internal_62acc40, public_62acc40);
extern "C" NAKED register_t __cdecl internal_62acc40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394158 @0x62acc42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394158
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_639bc6c
        mov eax, dword ptr ds : [esi+0xF0]
        test eax, eax
        lea ecx, ds:[esi+0xF0]
        mov dword ptr ss : [esp+0x10], 0
        je public_62acc82
        push 0
        call public_6341610
        public_62acc82 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_62b5980
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62acc40)
    }
}

#undef public_62acc82
