#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62306e0);
CLANG_FORWARD_PROC_SYMBOL(public_6230860);
CLANG_FORWARD_PROC_SYMBOL(public_62308c0);
CLANG_FORWARD_PROC_SYMBOL(public_623ecf0);
CLANG_FORWARD_JUMP_SYMBOL(public_6249946);

#define public_623073a _public_623073a
#define public_623074c _public_623074c

PROC_DECLARE(0x62306e0, internal_62306e0, public_62306e0);
extern "C" NAKED register_t __cdecl internal_62306e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249946 @0x62306e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249946
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        xor ebp, ebp
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], ebp
        mov esi, dword ptr ss : [esp+0x2C]
        push ecx
        mov eax, esp
        mov dword ptr ss : [esp+0x14], esp
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ds : [eax], esi
        lea eax, ss:[esp+0x14]
        push eax
        call public_62308c0
        mov dword ptr ss : [esp+0x14], esi
        mov eax, dword ptr ds : [esi+0x6C]
        lea ebx, ds:[esi+0x6C]
        cmp eax, ebp
        mov byte ptr ss : [esp+0x20], 3
        je public_623073a
        mov ecx, dword ptr ds : [eax]
        push 7
        push eax
        call dword ptr ds : [ecx+0x34]
        public_623073a : nop
        mov eax, dword ptr ds : [esi+0x70]
        lea ebp, ds:[esi+0x70]
        test eax, eax
        je public_623074c
        mov edx, dword ptr ds : [eax]
        push 7
        push eax
        call dword ptr ds : [edx+0x34]
        public_623074c : nop
        mov ecx, ebp
        mov byte ptr ss : [esp+0x20], 2
        call public_6230860
        mov ecx, ebx
        mov byte ptr ss : [esp+0x20], 1
        call public_6230860
        mov ecx, dword ptr ds : [edi+8]
        push esi
        call public_623ecf0
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x62306e0)
    }
}

#undef public_623073a
#undef public_623074c
