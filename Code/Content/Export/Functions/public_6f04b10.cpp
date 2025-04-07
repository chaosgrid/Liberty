#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f04b10);
CLANG_FORWARD_JUMP_SYMBOL(public_6facd04);

PROC_DECLARE(0x6f04b10, internal_6f04b10, public_6f04b10);
extern "C" NAKED register_t __cdecl internal_6f04b10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6facd04 @0x6f04b12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6facd04
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov ebx, dword ptr ds : [public_6fb3068]
        lea edi, ds:[esi+0x10]
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 2
        call ebx
        lea ebp, ds:[esi+0x28]
        mov ecx, ebp
        call ebx
        add esi, 0x40
        mov ecx, esi
        call ebx
        mov ecx, esi
        mov esi, dword ptr ds : [public_6fb3034]
        mov byte ptr ss : [esp+0x1C], 1
        call esi
        mov ecx, ebp
        mov byte ptr ss : [esp+0x1C], 0
        call esi
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call esi
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f04b10)
    }
}
