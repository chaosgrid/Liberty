#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f07b60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad268);

PROC_DECLARE(0x6f07b60, internal_6f07b60, public_6f07b60);
extern "C" NAKED register_t __cdecl internal_6f07b60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad268 @0x6f07b62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad268
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
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], 5
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov byte ptr ds : [esi+0x14], bl
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_6fb8230
        mov al, byte ptr ss : [esp+0xB]
        mov dword ptr ds : [esi+0x114], ebx
        push 0x2C
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ds : [esi+0x118], al
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x11C], eax
        mov dword ptr ds : [esi+0x120], ebx
        mov dword ptr ds : [esi+0x13C], ebx
        mov dword ptr ds : [esi+0x140], ebx
        mov byte ptr ds : [esi+0x144], bl
        add esp, 4
        mov byte ptr ds : [esi+0x174], bl
        mov byte ptr ds : [esi+0x175], bl
        mov byte ptr ds : [esi+0x176], 1
        mov dword ptr ds : [esi], offset public_6fb82d8
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f07b60)
    }
}
