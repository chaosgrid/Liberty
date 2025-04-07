#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_62fd7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6395c28);

#define public_62fd7de _public_62fd7de
#define public_62fd7fa _public_62fd7fa
#define public_62fd821 _public_62fd821
#define public_62fd838 _public_62fd838
#define public_62fd854 _public_62fd854
#define public_62fd86a _public_62fd86a

PROC_DECLARE(0x62fd7a0, internal_62fd7a0, public_62fd7a0);
extern "C" NAKED register_t __cdecl internal_62fd7a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395c28 @0x62fd7a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395c28
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov eax, dword ptr ds : [esi+0x370]
        test eax, eax
        lea ecx, ds:[esi+0x370]
        mov dword ptr ss : [esp+0x14], 4
        je public_62fd7de
        push 0
        call public_6341610
        public_62fd7de : nop
        mov eax, dword ptr ds : [esi+0x310]
        test eax, eax
        lea ecx, ds:[esi+0x310]
        mov byte ptr ss : [esp+0x14], 3
        je public_62fd7fa
        push 0
        call public_6341610
        public_62fd7fa : nop
        push edi
        lea edi, ds:[esi+0x164]
        mov dword ptr ss : [esp+0xC], edi
        mov eax, dword ptr ds : [edi+0xA0]
        test eax, eax
        lea ecx, ds:[edi+0xA0]
        mov byte ptr ss : [esp+0x18], 5
        je public_62fd821
        push 0
        call public_6341610
        public_62fd821 : nop
        mov eax, dword ptr ds : [edi+0x28]
        test eax, eax
        lea ecx, ds:[edi+0x28]
        mov byte ptr ss : [esp+0x18], 2
        pop edi
        je public_62fd838
        push 0
        call public_6341610
        public_62fd838 : nop
        mov eax, dword ptr ds : [esi+0xB8]
        test eax, eax
        lea ecx, ds:[esi+0xB8]
        mov byte ptr ss : [esp+0x14], 1
        je public_62fd854
        push 0
        call public_6341610
        public_62fd854 : nop
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        lea ecx, ds:[esi+0x40]
        mov byte ptr ss : [esp+0x14], 0
        je public_62fd86a
        push 0
        call public_6341610
        public_62fd86a : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_62d2080
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62fd7a0)
    }
}

#undef public_62fd7de
#undef public_62fd7fa
#undef public_62fd821
#undef public_62fd838
#undef public_62fd854
#undef public_62fd86a
