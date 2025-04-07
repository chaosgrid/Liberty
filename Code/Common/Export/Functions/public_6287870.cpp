#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b90);
CLANG_FORWARD_PROC_SYMBOL(public_6287870);
CLANG_FORWARD_PROC_SYMBOL(public_629b0c0);
CLANG_FORWARD_JUMP_SYMBOL(public_6393078);

#define public_62878a7 _public_62878a7

PROC_DECLARE(0x6287870, internal_6287870, public_6287870);
extern "C" NAKED register_t __cdecl internal_6287870()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393078 @0x6287872*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393078
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_639be28
        mov al, byte ptr ds : [esi+0x10]
        test al, al
        mov dword ptr ss : [esp+0x10], 0
        je public_62878a7
        call public_629b0c0
        public_62878a7 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_6285b90
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6287870)
    }
}

#undef public_62878a7
