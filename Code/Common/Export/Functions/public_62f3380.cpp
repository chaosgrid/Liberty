#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6281b00);
CLANG_FORWARD_PROC_SYMBOL(public_62efff0);
CLANG_FORWARD_PROC_SYMBOL(public_62f3380);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_63345a0);
CLANG_FORWARD_JUMP_SYMBOL(public_639574b);

PROC_DECLARE(0x62f3380, internal_62f3380, public_62f3380);
extern "C" NAKED register_t __cdecl internal_62f3380()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639574b @0x62f3382*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639574b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push esi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0xC], esi
        call public_62efff0
        xor ebx, ebx
        lea ecx, ds:[esi+0x60]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        call public_63345a0
        mov cl, byte ptr ss : [esp+0x1C]
        mov byte ptr ds : [esi+0x64], cl
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ds : [esi+0x70], ebx
        lea edx, ss:[esp+0x1C]
        lea ecx, ds:[esi+0x74]
        push edx
        mov byte ptr ss : [esp+0x18], 1
        call public_6281b00
        mov al, byte ptr ss : [esp+0x1C]
        mov byte ptr ds : [esi+0x80], bl
        mov byte ptr ds : [esi+0x81], 1
        mov byte ptr ds : [esi+0x84], al
        mov dword ptr ds : [esi+0x88], ebx
        mov dword ptr ds : [esi+0x8C], ebx
        mov dword ptr ds : [esi+0x90], ebx
        mov dword ptr ds : [esi], offset public_63a11d4
        lea ecx, ds:[esi+0xA0]
        mov dword ptr ss : [esp+0x14], 2
        mov byte ptr ds : [esi+0x94], bl
        mov dword ptr ds : [esi+0x98], 0x43FA0000
        mov dword ptr ds : [esi+0x9C], ebx
        call public_6333e30
        lea ecx, ds:[esi+0xA4]
        call public_6333e30
        lea ecx, ds:[esi+0xA8]
        call public_6333e40
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], offset public_6399854
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62f3380)
    }
}
