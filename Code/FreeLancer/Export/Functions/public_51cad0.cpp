#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c7290);
CLANG_FORWARD_PROC_SYMBOL(public_51b450);
CLANG_FORWARD_PROC_SYMBOL(public_51cad0);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_577490);

#define public_51cb40 _public_51cb40

PROC_DECLARE(0x51cad0, internal_51cad0, public_51cad0);
extern "C" NAKED register_t __cdecl internal_51cad0()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        push esi
        push edi
        push 1
        mov ebx, ecx
        call public_4c7290
/*FIXUP push offset public_5dc118 @0x51cadf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dc118
        call public_577490
        add esp, 8
        mov dword ptr ss : [esp+0xC], 0x5C
        mov dword ptr ss : [esp+0x10], 0x2A
        mov dword ptr ss : [esp+0x14], 0x2B
        mov dword ptr ss : [esp+0x18], 0x2C
        mov dword ptr ss : [esp+0x1C], 0x2D
        mov dword ptr ss : [esp+0x20], 0x2E
        mov dword ptr ss : [esp+0x24], 0x2F
        mov dword ptr ss : [esp+0x28], 0xC7
        mov dword ptr ss : [esp+0x2C], 0xC8
        xor esi, esi
        lea edi, ds:[ebx+0xF8]
        lea esp, ss:[esp]
        public_51cb40 : nop
        mov eax, dword ptr ss : [esp+esi*4+0xC]
        push eax
        mov ecx, edi
        call public_5760d0
        inc esi
        cmp esi, 9
        jb public_51cb40
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        mov ecx, ebx
        call public_51b450
        pop edi
        pop esi
        pop ebx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x51cad0)
    }
}

#undef public_51cb40
