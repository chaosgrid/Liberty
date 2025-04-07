#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271d00);
CLANG_FORWARD_PROC_SYMBOL(public_62819b0);
CLANG_FORWARD_PROC_SYMBOL(public_62a3bb0);
CLANG_FORWARD_PROC_SYMBOL(public_62a42b0);
CLANG_FORWARD_PROC_SYMBOL(public_62a5e50);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62a72f0);
CLANG_FORWARD_PROC_SYMBOL(public_62b9490);
CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_JUMP_SYMBOL(public_6393d50);

#define public_62a3bff _public_62a3bff
#define public_62a3ca8 _public_62a3ca8
#define public_62a3cb6 _public_62a3cb6

PROC_DECLARE(0x62a3bb0, internal_62a3bb0, public_62a3bb0);
extern "C" NAKED register_t __cdecl internal_62a3bb0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6393d50 @0x62a3bb8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393d50
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x40
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, offset public_63fc294
        call public_6301640
        mov eax, dword ptr ss : [esp]
        cmp eax, dword ptr ds : [public_63fc298]
        je public_62a3bff
        inc dword ptr ds : [eax+0x10]
        mov eax, 2
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 
        public_62a3bff : nop
        mov dl, byte ptr ss : [esp+0x50]
        push esi
        push edi
        xor esi, esi
        push esi
        push esi
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x24], dl
        call public_62b9490
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], esi
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x50], esi
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x14], esi
        call public_6271d00
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x2C], eax
        lea eax, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x30], ecx
        push eax
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x54], 1
        mov dword ptr ss : [esp+0x38], edx
        call public_62819b0
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x44], ecx
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_63fc294
        mov byte ptr ss : [esp+0x58], 2
        call public_62a72f0
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x50], 1
        call public_62a42b0
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x50], 3
        mov edi, eax
        je public_62a3cb6
        public_62a3ca8 : nop
        mov ecx, dword ptr ds : [esi+8]
        call public_62a5e50
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_62a3ca8
        public_62a3cb6 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6271d00
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call public_62a68e0
        mov eax, dword ptr ss : [esp+0xC]
        inc dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [eax+0x14], ecx
        mov ecx, dword ptr ss : [esp+0x48]
        pop edi
        mov eax, 1
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 
        UNREACHABLE_TRAP(0x62a3bb0)
    }
}

#undef public_62a3bff
#undef public_62a3ca8
#undef public_62a3cb6
