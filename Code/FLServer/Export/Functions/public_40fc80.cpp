#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fc80);
CLANG_FORWARD_PROC_SYMBOL(public_410750);
CLANG_FORWARD_PROC_SYMBOL(public_410760);
CLANG_FORWARD_PROC_SYMBOL(public_410880);
CLANG_FORWARD_PROC_SYMBOL(public_410890);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_41910a);
CLANG_FORWARD_PROC_SYMBOL(public_41918e);
CLANG_FORWARD_JUMP_SYMBOL(public_41a588);

PROC_DECLARE(0x40fc80, internal_40fc80, public_40fc80);
extern "C" NAKED register_t __cdecl internal_40fc80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a588 @0x40fc82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a588
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ds : [esi-4], offset public_41dbd8
        mov dword ptr ds : [esi], offset public_41db00
        lea ebp, ds:[esi+0x40]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x2C], 7
        call public_41910a
        lea ecx, ds:[esi+0x50]
        call public_41910a
        lea ecx, ds:[esi+0x48]
        call public_41910a
        lea ecx, ds:[esi+0x58]
        call public_41910a
        mov ebx, dword ptr ds : [esi+0x8C]
        lea edi, ds:[esi+0x88]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 6
        call public_410880
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, edi
        call public_410890
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_418978
        mov eax, dword ptr ds : [edi+8]
        xor ebx, ebx
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_418978
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x78]
        add esp, 8
        lea edi, ds:[esi+0x74]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 5
        mov dword ptr ss : [esp+0x18], eax
        call public_410880
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_410890
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_418978
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_418978
        mov dword ptr ds : [edi+8], ebx
        mov edx, dword ptr ds : [esi+0x64]
        lea edi, ds:[esi+0x60]
        add esp, 8
        mov byte ptr ss : [esp+0x2C], 4
        mov dword ptr ss : [esp+0x14], edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call public_410750
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        call public_410760
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_418978
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_418978
        mov dword ptr ds : [edi+8], ebx
        lea edi, ds:[esi+0x58]
        add esp, 8
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [edi], offset public_41daa4
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 8
        call public_41910a
        mov dword ptr ds : [edi], offset public_41da90
        lea edi, ds:[esi+0x50]
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [edi], offset public_41daa4
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 9
        call public_41910a
        mov dword ptr ds : [edi], offset public_41da90
        lea edi, ds:[esi+0x48]
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [edi], offset public_41daa4
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 0xA
        call public_41910a
        mov dword ptr ds : [edi], offset public_41da90
        mov edi, ebp
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [edi], offset public_41daa4
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 0xB
        call public_41910a
        lea ecx, ds:[esi-4]
        neg ecx
        sbb ecx, ecx
        and ecx, esi
        mov dword ptr ds : [edi], offset public_41da90
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        call public_41918e
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x40fc80)
    }
}
