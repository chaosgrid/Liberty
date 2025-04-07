#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6348b80);
CLANG_FORWARD_PROC_SYMBOL(public_6348d80);
CLANG_FORWARD_JUMP_SYMBOL(public_6397bf6);

#define public_6348dc8 _public_6348dc8
#define public_6348dcf _public_6348dcf
#define public_6348df2 _public_6348df2
#define public_6348df9 _public_6348df9

PROC_DECLARE(0x6348d80, internal_6348d80, public_6348d80);
extern "C" NAKED register_t __cdecl internal_6348d80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397bf6 @0x6348d82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397bf6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ss : [esp+0x14], 1
        call public_6348b80
        mov eax, dword ptr ds : [esi+0x20]
        xor ebx, ebx
        lea ecx, ds:[esi+0x24]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x14], bl
        je public_6348dcf
        cmp eax, ebx
        je public_6348dc8
        push eax
        call public_6343fb0
        add esp, 4
        public_6348dc8 : nop
        mov dword ptr ds : [esi+0x20], ebx
        mov word ptr ds : [esi+0x1C], bx
        public_6348dcf : nop
        mov word ptr ds : [esi+0x1E], bx
        mov eax, dword ptr ds : [esi+0x10]
        lea edx, ds:[esi+0x14]
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        je public_6348df9
        cmp eax, ebx
        je public_6348df2
        push eax
        call public_6343fb0
        add esp, 4
        public_6348df2 : nop
        mov dword ptr ds : [esi+0x10], ebx
        mov word ptr ds : [esi+0xC], bx
        public_6348df9 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov word ptr ds : [esi+0xE], bx
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6348d80)
    }
}

#undef public_6348dc8
#undef public_6348dcf
#undef public_6348df2
#undef public_6348df9
