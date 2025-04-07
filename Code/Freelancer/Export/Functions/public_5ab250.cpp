#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c3d20);
CLANG_FORWARD_PROC_SYMBOL(public_4c3d80);
CLANG_FORWARD_PROC_SYMBOL(public_4c3e20);
CLANG_FORWARD_PROC_SYMBOL(public_4c3f30);
CLANG_FORWARD_PROC_SYMBOL(public_4c4070);
CLANG_FORWARD_PROC_SYMBOL(public_4c4660);
CLANG_FORWARD_PROC_SYMBOL(public_4c4840);
CLANG_FORWARD_PROC_SYMBOL(public_4c4910);
CLANG_FORWARD_PROC_SYMBOL(public_4c4a10);
CLANG_FORWARD_PROC_SYMBOL(public_4c4cf0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4f80);
CLANG_FORWARD_PROC_SYMBOL(public_5a89b0);
CLANG_FORWARD_PROC_SYMBOL(public_5ab250);

#define public_5ab263 _public_5ab263
#define public_5ab322 _public_5ab322
#define public_5ab33c _public_5ab33c
#define public_5ab35e _public_5ab35e
#define public_5ab36f _public_5ab36f

PROC_DECLARE(0x5ab250, internal_5ab250, public_5ab250);
extern "C" NAKED register_t __cdecl internal_5ab250()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        xor ebx, ebx
        cmp esi, ebx
        jne public_5ab263
        pop esi
        xor al, al
        pop ebx
        ret 4
        public_5ab263 : nop
        push edi
        lea edi, ds:[ecx+0x21C]
        mov byte ptr ds : [edi], bl
        mov edx, dword ptr ds : [public_673344]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [ecx]
        push edx
        push esi
        call dword ptr ds : [eax+0x50]
        push 0x42700000
        push 0x40A00000
        push edi
        call public_5a89b0
        mov al, byte ptr ds : [edi]
        add esp, 0xC
        cmp al, bl
        je public_5ab36f
        mov eax, dword ptr ds : [esi+0x26C]
        push eax
        call public_4c4660
        mov ecx, dword ptr ds : [esi+0x244]
        push ecx
        call public_4c4f80
        mov edx, dword ptr ds : [esi+0x230]
        push edx
        call public_4c3e20
        lea eax, ds:[esi+0x254]
        push eax
        call public_4c3f30
        lea ecx, ds:[esi+0x248]
        push ecx
        call public_4c4070
        mov edx, dword ptr ds : [esi+0x234]
        push 1
        push edx
        call public_4c4cf0
        lea eax, ds:[esi+0x2A8]
        push eax
        call public_4c3d20
        lea ecx, ds:[esi+0x274]
        push ecx
        call public_4c3d80
        mov eax, dword ptr ds : [esi+0x264]
        lea edi, ds:[esi+0x264]
        add esp, 0x24
        test eax, 0x3FFFFFFF
        je public_5ab322
        push ebx
        call public_4c4840
        push edi
        call public_4c4910
        jmp public_5ab33c
        public_5ab322 : nop
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], ebx
        call public_4c4910
        mov eax, dword ptr ds : [esi+0x260]
        push eax
        call public_4c4840
        public_5ab33c : nop
        mov ecx, dword ptr ds : [esi+0x268]
        add esp, 8
        push ecx
        call public_4c4a10
        mov esi, dword ptr ds : [esi+0x208]
        add esp, 4
        cmp esi, ebx
        jne public_5ab35e
        mov esi, dword ptr ds : [public_5c700c]
        public_5ab35e : nop
        push esi
/*FIXUP push offset public_6732f0 @0x5ab35f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6732f0
        call dword ptr ds : [public_5c70b4]
        add esp, 8
        mov bl, 1
        public_5ab36f : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x5ab250)
    }
}

#undef public_5ab263
#undef public_5ab322
#undef public_5ab33c
#undef public_5ab35e
#undef public_5ab36f
