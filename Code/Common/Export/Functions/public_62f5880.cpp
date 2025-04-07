#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62efff0);
CLANG_FORWARD_PROC_SYMBOL(public_62f5880);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_JUMP_SYMBOL(public_6395848);

PROC_DECLARE(0x62f5880, internal_62f5880, public_62f5880);
extern "C" NAKED register_t __cdecl internal_62f5880()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395848 @0x62f5882*/
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
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x10], esi
        call public_62efff0
        xor edi, edi
        mov ebx, 1
        lea ecx, ds:[esi+0x68]
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ds : [esi+0x5C], edi
        mov byte ptr ds : [esi+0x60], bl
        mov dword ptr ds : [esi+0x64], ebx
        call public_6333e40
        mov byte ptr ds : [esi+0x6C], bl
        mov dword ptr ds : [esi], offset public_6399870
        mov dword ptr ds : [esi+0x1C], 0x3F800000
        lea ecx, ds:[esi+0x70]
        mov dword ptr ss : [esp+0x18], ebx
        call public_6333e40
        lea ecx, ds:[esi+0x74]
        call public_6333e40
        lea ecx, ds:[esi+0x80]
        mov dword ptr ds : [esi+0x78], edi
        mov dword ptr ds : [esi+0x7C], edi
        call public_6333e30
        mov dword ptr ds : [esi+0x84], edi
        mov dword ptr ds : [esi], offset public_6399b04
        lea ecx, ds:[esi+0x8C]
        mov dword ptr ss : [esp+0x18], 2
        mov dword ptr ds : [esi+0x88], 5
        call public_6333e40
        mov cl, byte ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x90], edi
        mov dword ptr ds : [esi+0x94], edi
        mov dword ptr ds : [esi+0x98], edi
        mov dword ptr ds : [esi+0x9C], edi
        mov dword ptr ds : [esi+0xA0], edi
        mov dword ptr ds : [esi+0xA4], edi
        mov dword ptr ds : [esi+0xAC], edi
        mov dword ptr ds : [esi+0xB0], edi
        mov dword ptr ds : [esi+0xB4], edi
        mov byte ptr ds : [esi+0xA8], cl
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [esi], offset public_6399bb4
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62f5880)
    }
}
