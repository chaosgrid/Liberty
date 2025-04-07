#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0e2d0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad44e);

PROC_DECLARE(0x6f0e2d0, internal_6f0e2d0, public_6f0e2d0);
extern "C" NAKED register_t __cdecl internal_6f0e2d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad44e @0x6f0e2d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad44e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        xor ebx, ebx
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], ebx
        mov byte ptr ds : [esi+4], bl
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov ebp, 0x3F800000
        mov dword ptr ds : [esi+0x58], ebp
        mov dword ptr ds : [esi+0x48], ebp
        mov dword ptr ds : [esi+0x38], ebp
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x60], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        push edi
        mov dword ptr ds : [esi+0x6C], ebx
        mov byte ptr ds : [esi+0x70], bl
        lea edi, ds:[esi+0xE4]
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ds : [esi+0xA8], ebx
        mov byte ptr ds : [esi+0xAC], bl
        call dword ptr ds : [public_6fb3030]
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [esi+0xE8], al
        mov dword ptr ds : [esi+0xEC], ebx
        mov dword ptr ds : [esi+0xF0], ebx
        mov dword ptr ds : [esi+0xF4], ebx
/*FIXUP push offset public_6fb85c4 @0x6f0e35e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb85c4
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ds : [esi+0xDC], ebx
        mov dword ptr ds : [esi+0xE0], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [esi+0x58], ebp
        mov dword ptr ds : [esi+0x48], ebp
        mov dword ptr ds : [esi+0x38], ebp
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x64], ebx
        mov dword ptr ds : [esi+0x60], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+0x68], ebx
        mov byte ptr ds : [esi+0xA5], bl
        mov byte ptr ds : [esi+0xA4], bl
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0xA0], 0x451C4000
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f0e2d0)
    }
}
