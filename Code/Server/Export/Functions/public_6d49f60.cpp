#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce5d80);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5df0);
CLANG_FORWARD_PROC_SYMBOL(public_6d460f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d467b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d46850);
CLANG_FORWARD_PROC_SYMBOL(public_6d49f60);
CLANG_FORWARD_PROC_SYMBOL(public_6d4a4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d56bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d571f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d57760);
CLANG_FORWARD_PROC_SYMBOL(public_6d57d10);
CLANG_FORWARD_PROC_SYMBOL(public_6d581c0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d6320b);

#define public_6d49fa7 _public_6d49fa7
#define public_6d4a06a _public_6d4a06a
#define public_6d4a081 _public_6d4a081
#define public_6d4a10f _public_6d4a10f
#define public_6d4a14d _public_6d4a14d
#define public_6d4a1b8 _public_6d4a1b8
#define public_6d4a1bc _public_6d4a1bc
#define public_6d4a1be _public_6d4a1be

PROC_DECLARE(0x6d49f60, internal_6d49f60, public_6d49f60);
extern "C" NAKED register_t __cdecl internal_6d49f60()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d6320b @0x6d49f68*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d6320b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x328
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x340]
        mov ebp, ecx
        lea eax, ss:[ebp+0x64]
        push esi
        push eax
        call dword ptr ds : [public_6d648f4]
        add esp, 8
        test al, al
        je public_6d49fa7
        mov ecx, dword ptr ss : [esp+0x344]
        push ecx
        mov ecx, ebp
        call public_6d4a4a0
        public_6d49fa7 : nop
        push esi
        lea edx, ss:[esp+0x10]
        lea ecx, ss:[ebp+0x50]
        push edx
        call public_6d57d10
        mov eax, dword ptr ss : [ebp+0x54]
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, eax
        je public_6d4a1bc
/*FIXUP push offset public_6d6ae30 @0x6d49fc4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6ae30
        lea eax, ss:[esp+0x230]
/*FIXUP push offset public_6d6b438 @0x6d49fd0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b438
        push eax
        lea esi, ds:[ecx+0x20C]
        call dword ptr ds : [public_6d64c74]
        lea ecx, ss:[esp+0x238]
        push ecx
        push esi
        call dword ptr ds : [public_6d64a48]
        add esp, 0x14
        test eax, eax
        je public_6d4a1bc
        push ebx
        push edi
        call dword ptr ds : [public_6d647e8]
        test al, al
        je public_6d4a06a
        push ebp
        call dword ptr ds : [public_6d64c98]
        mov edi, eax
        push edi
        call dword ptr ds : [public_6d64ca0]
        push edi
        call dword ptr ds : [public_6d64c80]
        mov edx, dword ptr ds : [public_6d90144]
        mov ebx, eax
        add esp, 0xC
        lea eax, ds:[ebx+ebx]
        push eax
        push edi
        mov ecx, offset public_6d8fd38
        mov dword ptr ds : [public_6d90150], edx
        call public_6d46850
        mov ecx, offset public_6d8fd38
        call public_6d467b0
        push eax
        push ebx
        lea ecx, ss:[esp+0x138]
/*FIXUP push offset public_6d6aec0 @0x6d4a052*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aec0
        push ecx
        call dword ptr ds : [public_6d64c74]
        push edi
        call dword ptr ds : [public_6d64c94]
        add esp, 0x14
        jmp public_6d4a081
        public_6d4a06a : nop
        push 0x104
        lea ecx, ss:[esp+0x134]
        push ebp
        push ecx
        call dword ptr ds : [public_6d64be0]
        add esp, 0xC
        public_6d4a081 : nop
        lea edx, ss:[esp+0x130]
        push 0
        push edx
        call public_6d460f0
        mov edi, dword ptr ds : [public_6d64bc0]
        push eax
        lea eax, ss:[esp+0x38]
        push 0
        push eax
        call edi
        add esp, 0x14
        push 0
        push esi
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x38]
        push 0
        push edx
        call edi
        push esi
        call dword ptr ds : [public_6d64ca8]
        mov al, byte ptr ss : [esp+0x2B]
        add esp, 0x18
        push 0
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x1C], al
        call public_6ce5d80
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        push 1
        push ebx
        lea ecx, ss:[esp+0x20]
        call public_6ce5df0
        test al, al
        je public_6d4a10f
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ds : [eax+ebx], 0
        public_6d4a10f : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, offset public_6d90290
        mov dword ptr ss : [esp+0x348], 0
        call public_6d571f0
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [public_6d90294]
        pop edi
        pop ebx
        je public_6d4a14d
        mov eax, dword ptr ds : [eax+0x1C]
        test eax, eax
        je public_6d4a14d
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, eax
        call public_6d56bd0
        public_6d4a14d : nop
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, offset public_6d90290
        call public_6d581c0
        push 1
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x33C], 0xFFFFFFFF
        call public_6ce5d80
        lea eax, ss:[esp+0x24]
        push eax
        call dword ptr ds : [public_6d64cac]
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 4
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[ebp+0x50]
        call public_6d57760
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6d4a1b8
        mov edx, dword ptr ds : [public_6d64a44]
        lea ecx, ss:[esp+0x24]
        push ecx
        push ebp
        mov eax, 0x100003
/*FIXUP push offset public_6d6b458 @0x6d4a1ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b458
        push eax
        call dword ptr ds : [edx]
        add esp, 0x10
        public_6d4a1b8 : nop
        mov al, 1
        jmp public_6d4a1be
        public_6d4a1bc : nop
        xor al, al
        public_6d4a1be : nop
        mov ecx, dword ptr ss : [esp+0x330]
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x334
        ret 8
        UNREACHABLE_TRAP(0x6d49f60)
    }
}

#undef public_6d49fa7
#undef public_6d4a06a
#undef public_6d4a081
#undef public_6d4a10f
#undef public_6d4a14d
#undef public_6d4a1b8
#undef public_6d4a1bc
#undef public_6d4a1be
