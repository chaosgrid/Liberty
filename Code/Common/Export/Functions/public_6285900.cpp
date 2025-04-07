#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6291c70);
CLANG_FORWARD_PROC_SYMBOL(public_62923a0);
CLANG_FORWARD_PROC_SYMBOL(public_6343020);
CLANG_FORWARD_PROC_SYMBOL(public_6343050);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6392f91);

#define public_6285a46 _public_6285a46

PROC_DECLARE(0x6285900, internal_6285900, public_6285900);
extern "C" NAKED register_t __cdecl internal_6285900()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392f91 @0x6285902*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392f91
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x4C
        push esi
        lea ecx, ss:[esp+0x18]
        call public_6343020
        mov dword ptr ss : [esp+8], 0x5368D4A5
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xC], 0x5368D4A5
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], 0x5368D4A5
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, dword ptr ds : [public_63eb388]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [public_63eb38c]
        push 0x3C0
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], 0x5368D4A5
        mov dword ptr ss : [esp+0x40], ecx
        mov dword ptr ss : [esp+0x44], edx
        call public_6391d9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+4], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr ss : [esp+0x58], eax
        je public_6285a46
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x68]
        mov ebx, dword ptr ss : [ebp+0x54]
        push edi
        lea eax, ss:[esp+0x24]
        push eax
        push ebx
        mov ecx, esi
        call public_6343050
        lea edi, ds:[esi+0xD0]
        mov ecx, edi
        mov byte ptr ss : [esp+0x64], 1
        call public_6291c70
        mov ecx, dword ptr ss : [esp+0x78]
        mov edx, dword ptr ss : [esp+0x70]
        push 0
        push 0
        push ecx
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x74], 2
        mov dword ptr ds : [esi], offset public_639ba38
        mov dword ptr ds : [edi], offset public_639ba2c
        call public_62923a0
        mov ecx, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x348]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x3B8], ebx
        pop edi
        mov dword ptr ds : [esi+0x388], 0
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ss : [ebp+0x60], esi
        pop ebp
        pop ebx
        pop esi
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr fs : [0], ecx
        add esp, 0x58
        ret 
        public_6285a46 : nop
        mov edx, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [edx+0x60], eax
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x58
        ret 
        UNREACHABLE_TRAP(0x6285900)
    }
}

#undef public_6285a46
