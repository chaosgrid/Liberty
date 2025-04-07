#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f471d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f571a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faeefc);

PROC_DECLARE(0x6f471d0, internal_6f471d0, public_6f471d0);
extern "C" NAKED register_t __cdecl internal_6f471d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faeefc @0x6f471d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faeefc
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x3FC
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x418]
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        call public_6f571a0
        mov al, byte ptr ss : [esp+0xF]
        xor ebx, ebx
        mov dword ptr ds : [esi+0x174], ebx
        fld dword ptr ds : [public_6fb7d70]
        fstp qword ptr ds : [esi+0x178]
        push 0x14
        mov dword ptr ss : [esp+0x414], ebx
        mov byte ptr ds : [esi+0x180], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0x184], eax
        mov dword ptr ds : [esi+0x188], ebx
        mov dword ptr ds : [esi+0x18C], ebx
        mov dword ptr ds : [esi], offset public_6fbb044
        mov dword ptr ds : [esi+0x118], offset public_6fbb040
        mov ecx, dword ptr ds : [edi+0x78]
        mov dword ptr ds : [esi+4], ecx
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x410], 1
        call dword ptr ds : [public_6fb3098]
        push ebx
/*FIXUP push offset public_6fbb038 @0x6f47270*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb038
        mov byte ptr ss : [esp+0x34], bl
        call dword ptr ds : [public_6fb30b4]
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [public_6fb363c]
        mov ecx, dword ptr ss : [esp+0x418]
        add esp, 0x10
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x408
        ret 4
        UNREACHABLE_TRAP(0x6f471d0)
    }
}
