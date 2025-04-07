#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62efff0);
CLANG_FORWARD_PROC_SYMBOL(public_62f6290);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_JUMP_SYMBOL(public_6395848);

PROC_DECLARE(0x62f6290, internal_62f6290, public_62f6290);
extern "C" NAKED register_t __cdecl internal_62f6290()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395848 @0x62f6292*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395848
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
        lea ecx, ds:[esi+0x68]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [esi+0x5C], ebx
        mov byte ptr ds : [esi+0x60], 1
        mov dword ptr ds : [esi+0x64], 1
        call public_6333e40
        mov byte ptr ds : [esi+0x6C], 1
        mov dword ptr ds : [esi], offset public_6399870
        mov dword ptr ds : [esi+0x1C], 0x3F800000
        lea ecx, ds:[esi+0x70]
        mov dword ptr ss : [esp+0x14], 1
        call public_6333e40
        lea ecx, ds:[esi+0x74]
        call public_6333e40
        lea ecx, ds:[esi+0x80]
        mov dword ptr ds : [esi+0x78], ebx
        mov dword ptr ds : [esi+0x7C], ebx
        call public_6333e30
        mov dword ptr ds : [esi+0x84], ebx
        mov dword ptr ds : [esi], offset public_6399b04
        lea ecx, ds:[esi+0x98]
        mov dword ptr ss : [esp+0x14], 2
        mov dword ptr ds : [esi+0x88], ebx
        mov dword ptr ds : [esi+0x8C], ebx
        mov dword ptr ds : [esi+0x90], ebx
        mov dword ptr ds : [esi+0x94], ebx
        call public_6333e40
        lea ecx, ds:[esi+0x9C]
        call public_6333e30
        mov cl, byte ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0xA0], ebx
        mov byte ptr ds : [esi+0xB8], bl
        mov byte ptr ds : [esi+0xB9], bl
        mov byte ptr ds : [esi+0xBA], bl
        mov dword ptr ds : [esi+0xA4], 0x3E860A92
        mov byte ptr ds : [esi+0xBC], cl
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0xC0], ebx
        mov dword ptr ds : [esi+0xC4], ebx
        mov dword ptr ds : [esi+0xC8], ebx
        mov byte ptr ds : [esi+0xCC], bl
        mov dword ptr ds : [esi+0xD0], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xB0], ebx
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0xA8], ebx
        mov dword ptr ds : [esi], offset public_6399c38
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62f6290)
    }
}
