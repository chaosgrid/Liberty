#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50a040);
CLANG_FORWARD_PROC_SYMBOL(public_50c0b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfb23);

PROC_DECLARE(0x50a040, internal_50a040, public_50a040);
extern "C" NAKED register_t __cdecl internal_50a040()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bfb23 @0x50a042*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bfb23
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_5db1f0
        lea eax, ss:[esp+0xE]
        push eax
        xor ebx, ebx
        push ebx
        lea ecx, ss:[esp+0x17]
        lea edi, ds:[esi+4]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], ebx
        call public_50c0b0
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+0x14], eax
        mov dl, byte ptr ss : [esp+0xF]
        push 0xC
        mov byte ptr ss : [esp+0x20], 1
        mov byte ptr ds : [esi+0x64], dl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x68], eax
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x6C], ebx
        mov eax, 0x3DCCCCCD
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x24], eax
        mov byte ptr ds : [esi+0x74], bl
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x70], ebx
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        mov dword ptr ds : [esi+0x40], ebx
        mov eax, 0x3F800000
        mov dword ptr ds : [esi], offset public_5db1b4
        mov dword ptr ds : [esi+0x20], 0x20
        mov dword ptr ds : [esi+0x30], 0x43160000
        mov dword ptr ds : [esi+0x5C], 0x41200000
        mov dword ptr ds : [esi+0x60], 2
        mov dword ptr ds : [esi+0x44], eax
        mov dword ptr ds : [esi+0x48], eax
        mov dword ptr ds : [esi+0x4C], eax
        add esp, 4
        mov dword ptr ds : [esi+0x50], eax
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi+0x58], ebx
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x50a040)
    }
}
