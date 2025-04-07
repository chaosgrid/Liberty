#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46150);

#define public_6d4622d _public_6d4622d
#define public_6d46236 _public_6d46236
#define public_6d46240 _public_6d46240

PROC_DECLARE(0x6d46150, internal_6d46150, public_6d46150);
extern "C" NAKED register_t __cdecl internal_6d46150()
{
    __asm
    {
        sub esp, 0x2AC
        push ebx
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6d46240
        push 0x104
        lea eax, ss:[esp+0xC]
        push eax
        push 0
        call dword ptr ds : [public_6d64a94]
        push 0
        push 0
        lea ecx, ss:[esp+0x1B4]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_6d64bdc]
/*FIXUP push offset public_6d6aebc @0x6d46193*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aebc
/*FIXUP push offset public_6d6aeac @0x6d46198*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aeac
        lea ecx, ss:[esp+0x1C8]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        call dword ptr ds : [public_6d64bc0]
        lea ecx, ss:[esp+0x30]
/*FIXUP push offset public_6d6aea8 @0x6d461b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aea8
        push ecx
        call dword ptr ds : [public_6d64bd8]
        mov ebx, eax
        add esp, 0x30
        test ebx, ebx
        je public_6d46240
        push ebx
        push 0x50
        lea edx, ss:[esp+0x114]
        push 2
        push edx
        call dword ptr ds : [public_6d64bd4]
        add esp, 0x10
        test eax, eax
        jbe public_6d46236
        push ebp
        push esi
        push edi
        lea edx, ds:[eax+eax]
        mov ecx, edx
        mov ebp, ecx
        shr ecx, 2
        lea esi, ss:[esp+0x118]
        mov edi, offset public_6d8d160
        rep movsd
        mov ecx, ebp
        and ecx, 3
        cmp eax, 0x4F
        rep movsb
        pop edi
        pop esi
        pop ebp
        jae public_6d4622d
        push ebx
        mov word ptr ds : [edx+public_6d8d160], 0
        call dword ptr ds : [public_6d64bd0]
        add esp, 4
        pop ebx
        add esp, 0x2AC
        ret 
        public_6d4622d : nop
        mov word ptr ds : [public_6d8d1fe], 0
        public_6d46236 : nop
        push ebx
        call dword ptr ds : [public_6d64bd0]
        add esp, 4
        public_6d46240 : nop
        pop ebx
        add esp, 0x2AC
        ret 
        UNREACHABLE_TRAP(0x6d46150)
    }
}

#undef public_6d4622d
#undef public_6d46236
#undef public_6d46240
