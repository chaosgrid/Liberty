#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285b90);
CLANG_FORWARD_PROC_SYMBOL(public_629ff20);
CLANG_FORWARD_PROC_SYMBOL(public_62c1420);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_63949ef);

#define public_62c1458 _public_62c1458
#define public_62c1466 _public_62c1466
#define public_62c1468 _public_62c1468

PROC_DECLARE(0x62c1420, internal_62c1420, public_62c1420);
extern "C" NAKED register_t __cdecl internal_62c1420()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63949ef @0x62c1422*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63949ef
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        lea ecx, ds:[esi+0x18]
        mov dword ptr ss : [esp+0x14], 1
        je public_62c1458
        push 0
        call public_6341610
        public_62c1458 : nop
        test esi, esi
        mov byte ptr ss : [esp+0x14], 0
        je public_62c1466
        lea ecx, ds:[esi+0x10]
        jmp public_62c1468
        public_62c1466 : nop
        xor ecx, ecx
        public_62c1468 : nop
        call public_629ff20
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_6285b90
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62c1420)
    }
}

#undef public_62c1458
#undef public_62c1466
#undef public_62c1468
