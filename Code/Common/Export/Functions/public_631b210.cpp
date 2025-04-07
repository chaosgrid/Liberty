#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_630e270);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);
CLANG_FORWARD_JUMP_SYMBOL(public_6396b11);

PROC_DECLARE(0x631b210, internal_631b210, public_631b210);
extern "C" NAKED register_t __cdecl internal_631b210()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396b11 @0x631b212*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396b11
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        lea ebp, ds:[esi+0x10]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x20], 2
        call public_630e270
        lea ebx, ds:[esi+0x28]
        mov ecx, ebx
        call public_630e270
        lea ecx, ds:[esi+0x40]
        mov dword ptr ss : [esp+0x10], ecx
        call public_630e270
        lea eax, ds:[esi+0x58]
        push eax
        call public_6334430
        xor eax, eax
        add esp, 4
        mov ecx, ebp
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], eax
        mov byte ptr ds : [esi+8], al
        mov byte ptr ds : [esi+9], al
        mov dword ptr ds : [esi+0xC], eax
        call public_630e270
        xor eax, eax
        mov ecx, 6
        mov edi, ebp
        rep stosd
        mov ecx, ebx
        call public_630e270
        xor eax, eax
        mov ecx, 6
        mov edi, ebx
        rep stosd
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, edi
        call public_630e270
        xor eax, eax
        mov ecx, 6
        rep stosd
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x58], eax
        mov dword ptr ds : [esi+0x5C], eax
        mov byte ptr ss : [esp+0x20], 1
        call public_630e210
        mov ecx, ebx
        mov byte ptr ss : [esp+0x20], 0
        call public_630e210
        mov ecx, ebp
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_630e210
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x631b210)
    }
}
