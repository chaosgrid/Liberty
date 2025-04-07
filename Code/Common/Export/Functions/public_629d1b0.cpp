#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b90);
CLANG_FORWARD_PROC_SYMBOL(public_6293160);
CLANG_FORWARD_PROC_SYMBOL(public_629b0c0);
CLANG_FORWARD_PROC_SYMBOL(public_629d1b0);
CLANG_FORWARD_PROC_SYMBOL(public_629edf0);
CLANG_FORWARD_JUMP_SYMBOL(public_6393997);

#define public_629d209 _public_629d209

PROC_DECLARE(0x629d1b0, internal_629d1b0, public_629d1b0);
extern "C" NAKED register_t __cdecl internal_629d1b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393997 @0x629d1b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393997
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x4C]
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi], offset public_639d744
        mov dword ptr ds : [edi], offset public_639d710
        mov dword ptr ss : [esp+0x18], 1
        call public_629edf0
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ds : [edi], offset public_639be28
        mov al, byte ptr ds : [edi+0x10]
        test al, al
        mov byte ptr ss : [esp+0x18], 2
        je public_629d209
        mov ecx, edi
        call public_629b0c0
        public_629d209 : nop
        mov ecx, edi
        mov byte ptr ss : [esp+0x18], 0
        call public_6285b90
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_6293160
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x629d1b0)
    }
}

#undef public_629d209
