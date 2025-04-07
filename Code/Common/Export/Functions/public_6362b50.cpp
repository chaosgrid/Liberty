#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_634dd60);
CLANG_FORWARD_PROC_SYMBOL(public_6362a30);
CLANG_FORWARD_PROC_SYMBOL(public_6362b50);
CLANG_FORWARD_JUMP_SYMBOL(public_639856f);

#define public_6362bb9 _public_6362bb9
#define public_6362bc2 _public_6362bc2

PROC_DECLARE(0x6362b50, internal_6362b50, public_6362b50);
extern "C" NAKED register_t __cdecl internal_6362b50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639856f @0x6362b52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639856f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x80]
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi], offset public_63a5878
        mov dword ptr ds : [edi], offset public_63a5868
        mov dword ptr ss : [esp+0x14], 2
        call public_6362a30
        mov eax, dword ptr ds : [esi+0x8C]
        lea ecx, ds:[esi+0x90]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x14], 1
        je public_6362bc2
        test eax, eax
        je public_6362bb9
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi+0x8C], 0
        public_6362bb9 : nop
        mov word ptr ds : [esi+0x88], 0
        public_6362bc2 : nop
        mov eax, esi
        neg eax
        sbb eax, eax
        and eax, edi
        mov word ptr ds : [esi+0x8A], 0
        mov ecx, esi
        mov dword ptr ds : [eax], offset public_63a5750
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_634dd60
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6362b50)
    }
}

#undef public_6362bb9
#undef public_6362bc2
