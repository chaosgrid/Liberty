#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f900);
CLANG_FORWARD_PROC_SYMBOL(public_410810);
CLANG_FORWARD_PROC_SYMBOL(public_410d50);
CLANG_FORWARD_PROC_SYMBOL(public_418c2a);
CLANG_FORWARD_PROC_SYMBOL(public_419146);
CLANG_FORWARD_JUMP_SYMBOL(public_41a4db);

#define public_40fa26 _public_40fa26

PROC_DECLARE(0x40f900, internal_40f900, public_40f900);
extern "C" NAKED register_t __cdecl internal_40f900()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a4db @0x40f902*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a4db
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+4]
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ds : [esi], offset public_41dcd8
        call public_418c2a
        mov dword ptr ds : [edi], offset public_41dc00
        xor ebx, ebx
        lea ebp, ds:[esi+0x44]
        mov dword ptr ss : [esp+0x60], ebx
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp], offset public_41d820
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x4C], offset public_41d820
        mov dword ptr ds : [esi+0x58], ebx
        mov dword ptr ds : [esi+0x54], offset public_41d820
        mov dword ptr ds : [esi+0x60], ebx
        mov dword ptr ds : [esi+0x5C], offset public_41d820
        mov al, byte ptr ss : [esp+0x10]
        mov dl, byte ptr ss : [esp+0x10]
        lea ecx, ds:[esi+0x64]
        mov byte ptr ss : [esp+0x60], 4
        mov byte ptr ds : [ecx], al
        mov byte ptr ds : [ecx+1], dl
        mov byte ptr ds : [ecx+0xC], bl
        call public_410d50
        lea eax, ss:[esp+0x10]
        push eax
        push ebx
        lea edx, ss:[esp+0x19]
        lea ecx, ds:[esi+0x78]
        push edx
        mov byte ptr ss : [esp+0x6C], 5
        call public_410810
        lea eax, ss:[esp+0x12]
        push eax
        push ebx
        lea edx, ss:[esp+0x1B]
        lea ecx, ds:[esi+0x8C]
        push edx
        mov byte ptr ss : [esp+0x6C], 6
        call public_410810
        push ebx
        mov byte ptr ss : [esp+0x64], 7
        mov dword ptr ds : [esi], offset public_41dbd8
        mov dword ptr ds : [edi], offset public_41db00
        call dword ptr ds : [public_41bbe0]
        push 0x48
        push 0x5A
        push eax
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [public_41b0fc]
        push eax
        push 0xC
        call dword ptr ds : [public_41b134]
        neg eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], 0x190
        mov byte ptr ss : [esp+0x30], bl
        mov byte ptr ss : [esp+0x31], bl
        mov byte ptr ss : [esp+0x32], bl
        mov byte ptr ss : [esp+0x33], 1
        mov byte ptr ss : [esp+0x34], bl
        mov byte ptr ss : [esp+0x35], bl
        mov byte ptr ss : [esp+0x36], bl
        mov byte ptr ss : [esp+0x37], bl
        xor eax, eax
        public_40fa26 : nop
        mov cl, byte ptr ds : [eax+public_4258cc]
        mov byte ptr ss : [esp+eax+0x38], cl
        inc eax
        cmp cl, bl
        jne public_40fa26
        mov edi, dword ptr ds : [public_41b100]
        lea eax, ss:[esp+0x1C]
        push eax
        call edi
        push eax
        mov ecx, ebp
        call public_419146
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov dword ptr ss : [esp+0x30], 0x2BC
        call edi
        push eax
        lea ecx, ds:[esi+0x54]
        call public_419146
        lea edx, ss:[esp+0x1C]
        push edx
        mov byte ptr ss : [esp+0x34], 1
        call edi
        push eax
        lea ecx, ds:[esi+0x5C]
        call public_419146
        lea eax, ss:[esp+0x1C]
        push eax
        mov dword ptr ss : [esp+0x30], 0x190
        call edi
        push eax
        lea ecx, ds:[esi+0x4C]
        call public_419146
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push ebx
        call dword ptr ds : [public_41bbe4]
        mov ecx, dword ptr ss : [esp+0x58]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 
        UNREACHABLE_TRAP(0x40f900)
    }
}

#undef public_40fa26
