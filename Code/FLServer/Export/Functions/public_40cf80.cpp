#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40cf80);
CLANG_FORWARD_PROC_SYMBOL(public_40fc80);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c78);
CLANG_FORWARD_PROC_SYMBOL(public_418d86);
CLANG_FORWARD_JUMP_SYMBOL(public_41a17b);

PROC_DECLARE(0x40cf80, internal_40cf80, public_40cf80);
extern "C" NAKED register_t __cdecl internal_40cf80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a17b @0x40cf82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a17b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        lea ecx, ds:[esi+0x1A4]
        mov dword ptr ss : [esp+0x10], 5
        call public_40fc80
        lea ecx, ds:[esi+0x160]
        mov byte ptr ss : [esp+0x10], 4
        call public_418c78
        lea ecx, ds:[esi+0x120]
        mov byte ptr ss : [esp+0x10], 3
        call public_418d86
        lea ecx, ds:[esi+0xE0]
        mov byte ptr ss : [esp+0x10], 2
        call public_418c78
        lea ecx, ds:[esi+0xA0]
        mov byte ptr ss : [esp+0x10], 1
        call public_418c78
        lea ecx, ds:[esi+0x60]
        mov byte ptr ss : [esp+0x10], 0
        call public_418c78
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_418a98
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x40cf80)
    }
}
