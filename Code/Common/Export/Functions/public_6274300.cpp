#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261170);
CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6274300);
CLANG_FORWARD_PROC_SYMBOL(public_62748d0);
CLANG_FORWARD_PROC_SYMBOL(public_6278300);
CLANG_FORWARD_PROC_SYMBOL(public_62785e0);
CLANG_FORWARD_PROC_SYMBOL(public_6278830);
CLANG_FORWARD_PROC_SYMBOL(public_6278ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6278d30);
CLANG_FORWARD_PROC_SYMBOL(public_6279020);
CLANG_FORWARD_PROC_SYMBOL(public_6279310);
CLANG_FORWARD_PROC_SYMBOL(public_62795d0);
CLANG_FORWARD_PROC_SYMBOL(public_62798b0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6392ac4);

PROC_DECLARE(0x6274300, internal_6274300, public_6274300);
extern "C" NAKED register_t __cdecl internal_6274300()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392ac4 @0x6274302*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392ac4
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
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ss : [esp+0x1C], 9
        call public_62748d0
        lea edi, ds:[esi+0x1C8]
        push edi
        mov byte ptr ss : [esp+0x20], 8
        call public_6334430
        xor ebx, ebx
        add esp, 4
        lea ecx, ds:[edi+4]
        mov dword ptr ds : [edi], ebx
        call public_6261170
        mov dword ptr ds : [edi+0x34], 0x420C0000
        mov dword ptr ds : [edi+0x38], 0x3E800000
        mov dword ptr ds : [edi+0x3C], 0x49742400
        lea edi, ds:[esi+0x1B4]
        mov dword ptr ss : [esp+0x10], edi
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 0xA
        call public_62798b0
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+4]
        push eax
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 7
        call public_628f050
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        lea edi, ds:[esi+0x1A4]
        add esp, 4
        mov dword ptr ss : [esp+0x10], edi
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 0xB
        call public_62795d0
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edi+4]
        push edx
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 6
        call public_628f050
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        lea edi, ds:[esi+0x194]
        add esp, 4
        mov dword ptr ss : [esp+0x10], edi
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 0xC
        call public_6279310
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 5
        call public_6269110
        lea edi, ds:[esi+0x184]
        mov dword ptr ss : [esp+0x10], edi
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 0xD
        call public_6279020
        mov ecx, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [edi+4]
        push ecx
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 4
        call public_628f050
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        lea edi, ds:[esi+0x174]
        add esp, 4
        mov dword ptr ss : [esp+0x10], edi
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 0xE
        call public_6278d30
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 3
        call public_6269110
        lea edi, ds:[esi+0x164]
        mov dword ptr ss : [esp+0x10], edi
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 0xF
        call public_6278ac0
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+4]
        push eax
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 2
        call public_628f050
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        lea edi, ds:[esi+0x154]
        add esp, 4
        mov dword ptr ss : [esp+0x10], edi
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 0x10
        call public_6278830
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 1
        call public_6269110
        lea edi, ds:[esi+0x144]
        mov dword ptr ss : [esp+0x10], edi
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], 0x11
        call public_62785e0
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edi+4]
        push edx
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], bl
        call public_628f050
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        add esi, 0x134
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ss : [esp+0x10], esi
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0x12
        call public_6278300
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call public_6269110
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6274300)
    }
}
