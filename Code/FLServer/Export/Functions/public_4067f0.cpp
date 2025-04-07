#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_409840);
CLANG_FORWARD_PROC_SYMBOL(public_40ae40);
CLANG_FORWARD_PROC_SYMBOL(public_418912);
CLANG_FORWARD_PROC_SYMBOL(public_418972);
CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_418aaa);
CLANG_FORWARD_PROC_SYMBOL(public_418bee);
CLANG_FORWARD_PROC_SYMBOL(public_418bf4);
CLANG_FORWARD_JUMP_SYMBOL(public_419d4b);

#define public_4069c0 _public_4069c0
#define public_406a2c _public_406a2c
#define public_406a37 _public_406a37
#define public_406b53 _public_406b53

PROC_DECLARE(0x4067f0, internal_4067f0, public_4067f0);
extern "C" NAKED register_t __cdecl internal_4067f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_419d4b @0x4067f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419d4b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x57C
        push ebp
        push esi
        push edi
        push 0x3F3
        mov esi, ecx
        call public_418bf4
        push 0x3F4
        mov ecx, esi
        mov dword ptr ds : [esi+0x60], eax
        call public_418bf4
        push 0x3F2
        mov ecx, esi
        mov dword ptr ds : [esi+0x70], eax
        call public_418bf4
        push 0x423
        mov ecx, esi
        mov dword ptr ds : [esi+0x78], eax
        call public_418bf4
        push 0x3F6
        mov ecx, esi
        mov dword ptr ds : [esi+0x7C], eax
        call public_418bf4
        push 0x3EE
        mov ecx, esi
        mov dword ptr ds : [esi+0x74], eax
        call public_418bf4
        push 0x3EF
        mov ecx, esi
        mov dword ptr ds : [esi+0x64], eax
        call public_418bf4
        push 0x3F0
        mov ecx, esi
        mov dword ptr ds : [esi+0x68], eax
        call public_418bf4
        push 0x42E
        mov ecx, esi
        mov dword ptr ds : [esi+0x6C], eax
        call public_418bf4
        mov ebp, dword ptr ds : [public_41bbe8]
        push 0
        mov dword ptr ds : [esi+0x80], eax
        mov eax, dword ptr ds : [esi+0x70]
        mov eax, dword ptr ds : [eax+0x20]
        push 3
        push 0xC5
        push eax
        call ebp
        mov eax, dword ptr ds : [esi+0x64]
        mov ecx, dword ptr ds : [eax+0x20]
        push 0x20
        push 0
        push 0x435
        push ecx
        call ebp
        mov eax, dword ptr ds : [esi+0x68]
        mov edx, dword ptr ds : [eax+0x20]
        push 0x80
        push 0
        push 0x435
        push edx
        call ebp
        mov eax, dword ptr ds : [esi+0x6C]
        mov eax, dword ptr ds : [eax+0x20]
        push 0x10
        push 0
        push 0x435
        push eax
        call ebp
        mov dx, word ptr ds : [public_425f48]
        xor eax, eax
        mov ecx, 0x10
        lea edi, ss:[esp+0x42]
        mov word ptr ss : [esp+0x40], dx
        rep stosd
        mov ecx, 0x40
        lea edi, ss:[esp+0x86]
        mov word ptr ss : [esp+0x84], dx
        rep stosd
        mov dword ptr ss : [esp+0x14], 3
        mov word ptr ss : [esp+0x1C], dx
        mov ecx, 8
        lea edi, ss:[esp+0x1E]
        rep stosd
        mov cl, byte ptr ds : [public_42621c]
        mov byte ptr ss : [esp+0x188], cl
        mov byte ptr ss : [esp+0xF], al
        mov ecx, 0xFF
        lea edi, ss:[esp+0x189]
        rep stosd
        mov ecx, dword ptr ds : [public_41baf8]
        stosw 
/*FIXUP push offset public_42546c @0x406957*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42546c
        lea edx, ss:[esp+0x18C]
        push edx
        mov byte ptr ss : [esp+0x16], 1
        mov byte ptr ss : [esp+0x15], 1
        mov dword ptr ss : [esp+0x20], 0x10
        stosb 
        call public_418912
        lea eax, ss:[esp+0x188]
/*FIXUP push offset public_425468 @0x406983*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425468
        push eax
        call dword ptr ds : [public_41b978]
        mov edi, eax
        add esp, 8
        test edi, edi
        je public_406a37
        push ebx
        mov ebx, dword ptr ds : [public_41b974]
        push edi
        push 1
        lea ecx, ss:[esp+0x20]
        push 4
        push ecx
        call ebx
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0x10
        cmp eax, 2
        je public_4069c0
        cmp eax, 3
        jne public_406a2c
        public_4069c0 : nop
        push edi
        push 1
        lea edx, ss:[esp+0x4C]
        push 0x42
        push edx
        call ebx
        push edi
        push 1
        lea eax, ss:[esp+0xA0]
        push 0x102
        push eax
        call ebx
        push edi
        push 1
        lea ecx, ss:[esp+0x48]
        push 0x22
        push ecx
        call ebx
        push edi
        push 1
        lea edx, ss:[esp+0x4A]
        push 1
        push edx
        call ebx
        add esp, 0x40
        push edi
        push 1
        lea eax, ss:[esp+0x19]
        push 1
        push eax
        call ebx
        push edi
        push 1
        lea ecx, ss:[esp+0x34]
        push 4
        push ecx
        call ebx
        mov eax, dword ptr ss : [esp+0x38]
        add esp, 0x20
        cmp eax, 3
        jne public_406a2c
        push edi
        push 1
        lea edx, ss:[esp+0x1B]
        push 1
        push edx
        call ebx
        add esp, 0x10
        public_406a2c : nop
        push edi
        call dword ptr ds : [public_41b970]
        add esp, 4
        pop ebx
        public_406a37 : nop
        mov eax, dword ptr ds : [esi+0x60]
        mov eax, dword ptr ds : [eax+0x20]
        push 0x10080
        push 0
        push 0x465
        push eax
        call ebp
        movzx ecx, word ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+0x60]
        mov edx, dword ptr ds : [eax+0x20]
        push ecx
        push 0
        push 0x467
        push edx
        call ebp
        movzx eax, byte ptr ss : [esp+0xE]
        mov ecx, dword ptr ds : [esi+0x78]
        push 0
        push eax
        mov eax, dword ptr ds : [ecx+0x20]
        push 0xF1
        push eax
        call ebp
        movzx eax, byte ptr ss : [esp+0xD]
        mov ecx, dword ptr ds : [esi+0x74]
        mov ecx, dword ptr ds : [ecx+0x20]
        push 0
        push eax
        push 0xF1
        push ecx
        call ebp
        movzx eax, byte ptr ss : [esp+0xF]
        mov ecx, dword ptr ds : [esi+0x7C]
        mov edx, dword ptr ds : [ecx+0x20]
        push 0
        push eax
        push 0xF1
        push edx
        call ebp
        mov ecx, dword ptr ds : [esi+0x64]
        mov edx, dword ptr ds : [ecx+0x20]
        lea eax, ss:[esp+0x40]
        push eax
        push edx
        call public_409840
        mov ecx, dword ptr ds : [esi+0x68]
        mov edx, dword ptr ds : [ecx+0x20]
        lea eax, ss:[esp+0x8C]
        push eax
        push edx
        call public_409840
        mov ecx, dword ptr ds : [esi+0x6C]
        mov edx, dword ptr ds : [ecx+0x20]
        lea eax, ss:[esp+0x2C]
        push eax
        push edx
        call public_409840
        mov eax, dword ptr ds : [esi+0x6C]
        mov ecx, dword ptr ds : [eax+0x20]
        add esp, 0x18
        push 0
        push ecx
        call public_418972
        lea ecx, ss:[esp+0x10]
        call public_418aaa
        lea edx, ss:[esp+0x10]
        push 0xF02D
        push edx
        mov dword ptr ss : [esp+0x598], 0
        call public_40ae40
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+0x80]
        add esp, 8
        push eax
        call public_418bee
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x590], 0xFFFFFFFF
        call public_418aa4
        mov ecx, dword ptr ds : [public_427828]
        mov al, byte ptr ds : [ecx+0xA7A]
        test al, al
        je public_406b53
        test edi, edi
        je public_406b53
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xCC]
        public_406b53 : nop
        mov ecx, dword ptr ss : [esp+0x588]
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x588
        ret 
        UNREACHABLE_TRAP(0x4067f0)
    }
}

#undef public_4069c0
#undef public_406a2c
#undef public_406a37
#undef public_406b53
