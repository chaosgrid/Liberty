#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46b0d0);
CLANG_FORWARD_PROC_SYMBOL(public_46b0e0);
CLANG_FORWARD_PROC_SYMBOL(public_56abb0);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57b470);
CLANG_FORWARD_JUMP_SYMBOL(public_5c2666);

#define public_56ad22 _public_56ad22

PROC_DECLARE(0x56abb0, internal_56abb0, public_56abb0);
extern "C" NAKED register_t __cdecl internal_56abb0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c2666 @0x56abb8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c2666
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push esi
        mov esi, ecx
        call public_46b0e0
        cmp eax, dword ptr ds : [esi+0x2EC]
        je public_56ad22
        mov ecx, dword ptr ds : [esi+0x2E8]
        push ebx
        push ebp
        push edi
        mov dword ptr ds : [esi+0x2EC], eax
        call public_57b370
        mov ebx, dword ptr ds : [public_5c62c0]
        push 1
        lea ecx, ss:[esp+0x14]
        call ebx
        mov ecx, dword ptr ds : [esi+0x2E8]
        push eax
        mov dword ptr ss : [esp+0x2C], 0
        call public_57b470
        mov ebp, dword ptr ds : [public_5c62bc]
        or edi, 0xFFFFFFFF
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x28], edi
        call ebp
        push 0x4433
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c62b8]
        mov ecx, dword ptr ds : [esi+0x2E8]
        push eax
        mov dword ptr ss : [esp+0x2C], 1
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x28], edi
        call dword ptr ds : [public_5c62b4]
        mov ecx, dword ptr ds : [public_5c62cc]
        lea eax, ds:[esi+0x374]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+0x2E8]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x2C], 2
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x28], edi
        call dword ptr ds : [public_5c62c8]
        mov eax, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [esi+0x2E8]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x2C], 3
        call public_57b470
        push 0
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x2C], edi
        call ebx
        mov ecx, dword ptr ds : [esi+0x2E8]
        push eax
        mov dword ptr ss : [esp+0x2C], 4
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x28], edi
        call ebp
        push 0x76EC
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c62b8]
        mov ecx, dword ptr ds : [esi+0x2E8]
        push eax
        mov dword ptr ss : [esp+0x2C], 5
        call public_57b470
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x28], edi
        call dword ptr ds : [public_5c62b4]
        mov esi, dword ptr ds : [esi+0x2E8]
        call public_46b0d0
        push eax
        mov ecx, esi
        call public_57b3e0
        pop edi
        pop ebp
        pop ebx
        public_56ad22 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x56abb0)
    }
}

#undef public_56ad22
