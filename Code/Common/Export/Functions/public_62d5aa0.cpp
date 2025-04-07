#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d5aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6395233);

#define public_62d5ae9 _public_62d5ae9

PROC_DECLARE(0x62d5aa0, internal_62d5aa0, public_62d5aa0);
extern "C" NAKED register_t __cdecl internal_62d5aa0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395233 @0x62d5aa2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395233
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+0x14]
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ds : [esi+0x10], bl
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], ebx
        mov dword ptr ds : [esi], offset public_63a047c
        cmp dword ptr ds : [ecx], ebx
        mov dword ptr ss : [esp+0x14], 1
        je public_62d5ae9
        push ebx
        call public_6341610
        public_62d5ae9 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov byte ptr ds : [esi+0x39], bl
        mov byte ptr ds : [esi+0x3A], bl
        mov byte ptr ds : [esi+0x3B], bl
        mov byte ptr ds : [esi+0x3D], bl
        mov byte ptr ds : [esi+0x38], 1
        mov byte ptr ds : [esi+0x3C], 1
        mov dword ptr ds : [esi+0x34], 0x3F490FDB
        mov dword ptr ds : [esi+0x40], 0xC3480000
        mov dword ptr ds : [esi+0x44], 0xBF000000
        mov dword ptr ds : [esi+0x48], 0x3D4CCCCD
        mov dword ptr ds : [esi+0x54], 0x40A00000
        mov dword ptr ds : [esi+0x58], 0x43FA0000
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62d5aa0)
    }
}

#undef public_62d5ae9
