#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634dd10);
CLANG_FORWARD_PROC_SYMBOL(public_6362ab0);
CLANG_FORWARD_JUMP_SYMBOL(public_6398526);

PROC_DECLARE(0x6362ab0, internal_6362ab0, public_6362ab0);
extern "C" NAKED register_t __cdecl internal_6362ab0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6398526 @0x6362ab8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398526
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        push ecx
        mov ecx, esi
        call public_634dd10
        mov dword ptr ds : [esi+0x80], offset public_63a5750
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        mov word ptr ds : [esi+0x88], ax
        mov word ptr ds : [esi+0x8A], ax
        mov dword ptr ds : [esi+0x8C], eax
        mov dword ptr ds : [esi+0x90], eax
        mov dword ptr ds : [esi], offset public_63a5878
        mov dword ptr ds : [esi+0x80], offset public_63a5868
        mov dword ptr ds : [esi+0x84], 0xFFFFFFFF
        mov eax, esi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6362ab0)
    }
}
