#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_407090);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c24);
CLANG_FORWARD_JUMP_SYMBOL(public_419d93);

PROC_DECLARE(0x407090, internal_407090, public_407090);
extern "C" NAKED register_t __cdecl internal_407090()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_419d93 @0x407092*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419d93
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        lea ecx, ds:[esi+0xA0]
        mov dword ptr ss : [esp+0x10], 1
        call public_418c24
        lea ecx, ds:[esi+0x60]
        mov byte ptr ss : [esp+0x10], 0
        call public_418c24
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_418a98
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x407090)
    }
}
