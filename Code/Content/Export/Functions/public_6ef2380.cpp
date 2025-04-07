#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0160);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2380);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2db0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2e80);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3190);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac0d3);

#define public_6ef23c2 _public_6ef23c2
#define public_6ef24e3 _public_6ef24e3
#define public_6ef253b _public_6ef253b
#define public_6ef254f _public_6ef254f
#define public_6ef25ac _public_6ef25ac
#define public_6ef25e0 _public_6ef25e0
#define public_6ef25f1 _public_6ef25f1

PROC_DECLARE(0x6ef2380, internal_6ef2380, public_6ef2380);
extern "C" NAKED register_t __cdecl internal_6ef2380()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac0d3 @0x6ef2382*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac0d3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x124
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x13C]
        push edi
        mov edi, ecx
        xor ebx, ebx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0xC], ebx
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6ef25f1
        push esi
/*FIXUP public_6ef23c2 : nop
        push offset public_6fb47c8 @0x6ef23c2*/
  FIXUP public_6ef23c2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb47c8
        mov ecx, ebp
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, ebp
        je public_6ef25ac
        mov esi, dword ptr ds : [public_6fb3048]
        push ebx
        call esi
        push eax
        lea ecx, ss:[esp+0xB8]
        mov dword ptr ss : [esp+0xB8], ebx
        mov byte ptr ss : [esp+0xBC], bl
        call public_6ed0160
        lea eax, ss:[esp+0xB4]
        push eax
        lea edx, ss:[esp+0x18]
        lea ecx, ds:[edi+4]
        push edx
        call public_6ef2db0
        mov eax, dword ptr ds : [edi+8]
        cmp dword ptr ss : [esp+0x14], eax
        jne public_6ef24e3
        mov al, byte ptr ss : [esp+0x1B]
        mov byte ptr ss : [esp+0x20], al
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov ecx, 0xD
        lea esi, ss:[esp+0xB4]
        lea edi, ss:[esp+0xF0]
        rep movsd
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x128]
        mov dword ptr ss : [esp+0x140], ebx
        call public_6ef2e80
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0xF0]
        push edx
        lea eax, ss:[esp+0xEC]
        lea esi, ds:[ecx+4]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x144], 1
        call public_6ef2ae0
        lea ecx, ss:[esp+0x124]
        mov byte ptr ss : [esp+0x13C], bl
        call public_6eec8d0
        lea edx, ss:[esp+0xB4]
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        mov ecx, esi
        call public_6ef2db0
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x34]
        push edx
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x140], 0xFFFFFFFF
        call public_6fa8fe0
        mov esi, dword ptr ds : [public_6fb3048]
        mov edi, dword ptr ss : [esp+0x20]
        add esp, 4
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        public_6ef24e3 : nop
        lea eax, ss:[esp+0xB8]
        push eax
        lea ecx, ss:[esp+0x40]
        push 0x30
        push ecx
        mov dword ptr ss : [esp+0x44], ebx
        mov byte ptr ss : [esp+0x48], bl
        mov dword ptr ss : [esp+0x78], ebx
        mov byte ptr ss : [esp+0x7C], bl
        mov byte ptr ss : [esp+0xAD], bl
        mov byte ptr ss : [esp+0xAC], bl
        mov dword ptr ss : [esp+0xBC], 0
        call public_6ea9f40
        add esp, 0xC
        push 1
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], eax
        call esi
        cmp eax, ebx
        jne public_6ef253b
        mov dword ptr ss : [esp+0x6C], ebx
        mov byte ptr ss : [esp+0x70], bl
        jmp public_6ef254f
        public_6ef253b : nop
        push eax
        lea edx, ss:[esp+0x74]
        push 0x30
        push edx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [esp+0x6C], eax
        public_6ef254f : nop
        mov eax, dword ptr ss : [esp+0x10]
        push 2
        mov ecx, ebp
        mov dword ptr ss : [esp+0xA8], eax
        call esi
        push eax
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 4
        and ecx, 0x3FFFFFFF
        neg ecx
        sbb cl, cl
        mov dword ptr ss : [esp+0xA8], eax
        inc cl
        mov byte ptr ss : [esp+0xA0], cl
        lea eax, ss:[esp+0x38]
        lea ecx, ds:[edx+0x40]
        mov edx, dword ptr ds : [ecx+8]
        push eax
        push 1
        push edx
        call public_6ef3190
        mov eax, dword ptr ss : [esp+0xA8]
        mov dword ptr ss : [esp+0x10], eax
        jmp public_6ef25e0
/*FIXUP public_6ef25ac : nop
        push offset public_6fb45ac @0x6ef25ac*/
  FIXUP public_6ef25ac : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb45ac
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6ef25e0
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6fb3048]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        call dword ptr ds : [public_6fb3628]
        lea edx, ss:[esp+0x38]
        push edx
        call public_6f75f30
        add esp, 0xC
        mov dword ptr ds : [edi+0x18], eax
        public_6ef25e0 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6ef23c2
        pop esi
        public_6ef25f1 : nop
        mov ecx, dword ptr ss : [esp+0x130]
        pop edi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x130
        ret 4
        UNREACHABLE_TRAP(0x6ef2380)
    }
}

#undef public_6ef23c2
#undef public_6ef24e3
#undef public_6ef253b
#undef public_6ef254f
#undef public_6ef25ac
#undef public_6ef25e0
#undef public_6ef25f1
