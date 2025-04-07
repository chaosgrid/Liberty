#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220c60);
CLANG_FORWARD_PROC_SYMBOL(public_6220ca0);
CLANG_FORWARD_JUMP_SYMBOL(public_6248be0);

#define public_6220728 _public_6220728
#define public_6220748 _public_6220748

PROC_DECLARE(0x62206d0, internal_62206d0, public_62206d0);
extern "C" NAKED register_t __cdecl internal_62206d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248be0 @0x62206d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248be0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        lea ecx, ss:[esp+4]
        push edi
        lea esi, ds:[eax+0x18]
        push ecx
        mov ecx, esi
        call public_6220ca0
        lea edx, ss:[esp+0x1C]
        mov ecx, esi
        push edx
        mov dword ptr ss : [esp+0x18], 0
        call public_6220c60
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+8]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x14], 1
        je public_6220748
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x20]
        public_6220728 : nop
        mov eax, dword ptr ds : [eax+8]
        push esi
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne public_6220748
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6220728
        public_6220748 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        xor eax, eax
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x62206d0)
    }
}

#undef public_6220728
#undef public_6220748
