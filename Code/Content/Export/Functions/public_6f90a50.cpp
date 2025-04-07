#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f90a50);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb143c);

PROC_DECLARE(0x6f90a50, internal_6f90a50, public_6f90a50);
extern "C" NAKED register_t __cdecl internal_6f90a50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb143c @0x6f90a52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb143c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov byte ptr ds : [esi+0xC], bl
        mov byte ptr ds : [esi+0xD], bl
        mov byte ptr ds : [esi+0xE], bl
        mov byte ptr ds : [esi+0xF], bl
        mov byte ptr ds : [esi+0x10], bl
        mov byte ptr ds : [esi+0x11], bl
        mov byte ptr ds : [esi+0x12], bl
        mov byte ptr ds : [esi+0x13], bl
        mov byte ptr ds : [esi+0x14], bl
        mov byte ptr ds : [esi+0x15], bl
        mov byte ptr ds : [esi+0x16], bl
        mov byte ptr ds : [esi+0x17], bl
        mov byte ptr ds : [esi+0x18], bl
        mov byte ptr ds : [esi+0x19], bl
        lea eax, ss:[esp+0xB]
        push eax
        lea ecx, ds:[esi+0x20]
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        call public_6ead6a0
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x30], 0x3A
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov byte ptr ds : [esi+0x44], bl
        mov dword ptr ds : [esi], offset public_6fbc710
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f90a50)
    }
}
