#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288970);

PROC_DECLARE(0x62a2930, internal_62a2930, public_62a2930);
extern "C" NAKED register_t __cdecl internal_62a2930()
{
    __asm
    {
        sub esp, 0x34
        mov eax, dword ptr ds : [public_63eb360]
        mov edx, dword ptr ds : [public_63fc0ec]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [public_63fc0e8]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [public_63fc0f0]
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x14], eax
        xor eax, eax
        lea ecx, ss:[esp+0x22]
/*FIXUP push offset public_639dcc0 @0x62a295e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639dcc0
        push ecx
        mov dword ptr ss : [esp+0xC], 0x3F800000
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], 2
        mov byte ptr ss : [esp+0x28], al
        mov byte ptr ss : [esp+0x29], 1
        mov byte ptr ss : [esp+0x32], al
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], eax
        mov byte ptr ss : [esp+0x2A], al
        call dword ptr ds : [public_639931c]
        mov edx, dword ptr ds : [esi+0xF4]
        lea eax, ss:[esp+0xC]
        push eax
        push esi
        mov byte ptr ss : [esp+0x30], 1
        mov dword ptr ss : [esp+0x14], 0x447A0000
        mov dword ptr ss : [esp+0x18], 0x49742400
        mov dword ptr ss : [esp+0x1C], 0x49742400
        mov dword ptr ss : [esp+0x20], 0x49742400
        mov dword ptr ss : [esp+0x24], 0x49742400
        mov dword ptr ss : [esp+0x28], edx
        call public_6288970
        add esp, 0x10
        pop esi
        add esp, 0x34
        ret 8
        UNREACHABLE_TRAP(0x62a2930)
    }
}
