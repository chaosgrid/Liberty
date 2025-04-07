#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3ba50);
CLANG_FORWARD_PROC_SYMBOL(public_6f3c350);
CLANG_FORWARD_PROC_SYMBOL(public_6f3c520);
CLANG_FORWARD_PROC_SYMBOL(public_6f3c5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3d110);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ed50);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ed70);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58c58);

#define public_6f38ed6 _public_6f38ed6
#define public_6f38f68 _public_6f38f68
#define public_6f38f84 _public_6f38f84

PROC_DECLARE(0x6f38e20, internal_6f38e20, public_6f38e20);
extern "C" NAKED register_t __cdecl internal_6f38e20()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6f58c58 @0x6f38e28*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58c58
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x3C
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x58]
        push esi
        mov esi, dword ptr ss : [esp+0x58]
        cmp ebp, dword ptr ds : [esi+0xA0]
        jae public_6f38f84
        lea eax, ss:[esp+0x5C]
        push eax
        lea ecx, ss:[esp+0x5C]
        lea ebx, ds:[esi+0xA4]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x64], ebp
        call public_6f3cbb0
        mov esi, dword ptr ds : [esi+0xA8]
        cmp esi, dword ptr ss : [esp+0x58]
        je public_6f38f84
        mov dl, byte ptr ss : [esp+0x60]
        push edi
        push 0
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x40], dl
        call public_6f3c520
        mov edi, dword ptr ss : [esp+0x64]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        push 1
        push edi
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x68], edi
        call public_6f3ed70
        test al, al
        je public_6f38ed6
        mov esi, dword ptr ss : [esp+0x64]
        mov ecx, edi
        mov edi, dword ptr ss : [esp+0x40]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, eax
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_6f3ed50
        public_6f38ed6 : nop
        xor esi, esi
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x5C], esi
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], esi
        call public_6f3ba50
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+0x10]
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+0x14]
        add ecx, 0x70
        push eax
        call public_6f3c350
        push 1
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        call public_6f3c520
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x28], esi
        call public_6f3c5d0
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x34]
        call public_6f3d110
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [edx+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ecx+0x74]
        pop edi
        je public_6f38f84
        mov eax, dword ptr ds : [eax+0x20]
        cmp eax, esi
        jne public_6f38f68
        mov eax, dword ptr ds : [public_6f5a020]
        public_6f38f68 : nop
        mov edx, dword ptr ss : [esp+0x64]
        pop esi
        pop ebp
        mov dword ptr ds : [edx], eax
        xor eax, eax
        pop ebx
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 0x10
        public_6f38f84 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 0x10
        UNREACHABLE_TRAP(0x6f38e20)
    }
}

#undef public_6f38ed6
#undef public_6f38f68
#undef public_6f38f84
