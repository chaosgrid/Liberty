#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_457dc0);
CLANG_FORWARD_PROC_SYMBOL(public_457e30);
CLANG_FORWARD_PROC_SYMBOL(public_5581b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba106);

PROC_DECLARE(0x457dc0, internal_457dc0, public_457dc0);
extern "C" NAKED register_t __cdecl internal_457dc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5ba106 @0x457dc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba106
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
        call public_457e30
        xor ebx, ebx
        lea ecx, ds:[esi+0x20]
        mov byte ptr ss : [esp+0x14], bl
        call public_5581b0
        mov eax, dword ptr ds : [esi+0x14]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 4
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x457dc0)
    }
}
