#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a0f0);
CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_543f00);
CLANG_FORWARD_PROC_SYMBOL(public_549e70);
CLANG_FORWARD_PROC_SYMBOL(public_54b230);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);

#define public_54b2bb _public_54b2bb
#define public_54b2df _public_54b2df
#define public_54b2e1 _public_54b2e1
#define public_54b394 _public_54b394
#define public_54b44c _public_54b44c
#define public_54b466 _public_54b466
#define public_54b484 _public_54b484
#define public_54b4a6 _public_54b4a6
#define public_54b4b0 _public_54b4b0
#define public_54b4b6 _public_54b4b6
#define public_54b4f2 _public_54b4f2
#define public_54b4fd _public_54b4fd

PROC_DECLARE(0x54b230, internal_54b230, public_54b230);
extern "C" NAKED register_t __cdecl internal_54b230()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        mov ebx, ecx
        mov al, byte ptr ds : [ebx+0xBA9]
        test al, al
        push ebp
        push esi
        je public_54b2bb
        mov edx, dword ptr ds : [public_679744]
        test edx, edx
        je public_54b4b6
        lea eax, ds:[edx-8]
        test eax, eax
        je public_54b4b6
        add eax, 0xC
        test eax, eax
        je public_54b4b6
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_54b4b6
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_54b4b6
        push 4
        call dword ptr ds : [public_5c6648]
        test al, al
        jne public_54b4b0
        mov byte ptr ds : [ebx+0xBA9], al
        mov al, byte ptr ds : [ebx+0xBA8]
        test al, al
        jne public_54b4b0
        push 0
/*FIXUP push offset public_5cc404 @0x54b2aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cc404
        mov ecx, ebx
        call public_549e70
        jmp public_54b4b0
        public_54b2bb : nop
        mov al, byte ptr ds : [ebx+0xBAA]
        test al, al
        jne public_54b4b0
        mov eax, dword ptr ds : [ebx+0xBA0]
        add eax, 0xC0
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_54b2df
        lea esi, ds:[eax-8]
        jmp public_54b2e1
        public_54b2df : nop
        xor esi, esi
        public_54b2e1 : nop
        mov edx, dword ptr ds : [public_679744]
        test edx, edx
        je public_54b4b6
        lea ecx, ds:[edx-8]
        test ecx, ecx
        je public_54b4b6
        lea eax, ds:[ecx+0xC]
        test eax, eax
        je public_54b4b6
        mov ebp, dword ptr ds : [eax+4]
        test ebp, ebp
        je public_54b4b6
        mov eax, dword ptr ss : [ebp+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_54b4b6
        cmp esi, ecx
        jne public_54b4b6
        mov ecx, ebp
        call dword ptr ds : [public_5c62e8]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, eax
        call dword ptr ds : [public_5c6b38]
        test al, al
        mov byte ptr ds : [ebx+0xBAA], al
        je public_54b4b0
        mov edx, dword ptr ds : [public_673344]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [ebp+0xB0]
        push 2
        push 1
        push edx
        call dword ptr ds : [eax+0xE4]
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0
        je public_54b394
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [eax+0x88]
        mov ecx, dword ptr ss : [esp+0xC]
        public_54b394 : nop
        test dword ptr ss : [esp+0x10], 0x120
        je public_54b44c
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x18]
        push eax
        push edx
        push ecx
        mov dword ptr ss : [esp+0x44], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        call public_543f00
        add esp, 0xC
        test al, al
        je public_54b44c
        push edi
        mov ecx, 0xC
        lea esi, ss:[esp+0x1C]
        mov edi, offset public_679638
        mov byte ptr ds : [public_679668], 1
        rep movsd
        mov al, byte ptr ds : [public_678ba0]
        test al, al
        pop edi
        je public_54b44c
        push 0
/*FIXUP push offset public_5e0778 @0x54b43d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0778
        mov ecx, offset public_678b98
        call public_549e70
        public_54b44c : nop
        mov eax, dword ptr ds : [public_674aa0]
        cmp byte ptr ds : [eax+0x5BA], 1
        jne public_54b466
        push 0
        push 0x39
        call public_5763b0
        add esp, 8
        public_54b466 : nop
        mov ecx, dword ptr ds : [public_674aa0]
        cmp byte ptr ds : [ecx+0x5B9], 1
        jne public_54b484
        push 0
        push 0xBF
        call public_5763b0
        add esp, 8
        public_54b484 : nop
        call public_41a3e0
        test al, al
        jne public_54b4a6
        push 0x40400000
        push 0x3F800000
        call public_41a0f0
        push 0
        call public_41dda0
        add esp, 0xC
        public_54b4a6 : nop
        push 4
        mov ecx, ebp
        call dword ptr ds : [public_5c6a54]
        public_54b4b0 : nop
        mov edx, dword ptr ds : [public_679744]
        public_54b4b6 : nop
        mov al, byte ptr ds : [ebx+0xBAA]
        test al, al
        je public_54b4fd
        test edx, edx
        je public_54b4fd
        lea eax, ds:[edx-8]
        test eax, eax
        je public_54b4fd
        mov cl, byte ptr ds : [ebx+0xBAB]
        test cl, cl
        mov eax, dword ptr ds : [eax+0x158]
        je public_54b4f2
        test eax, eax
        jne public_54b4fd
        pop esi
        pop ebp
        mov byte ptr ds : [ebx+0xBAB], al
        mov byte ptr ds : [ebx+0xBAA], al
        pop ebx
        add esp, 0x3C
        ret 
        public_54b4f2 : nop
        test eax, eax
        je public_54b4fd
        mov byte ptr ds : [ebx+0xBAB], 1
        public_54b4fd : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x54b230)
    }
}

#undef public_54b2bb
#undef public_54b2df
#undef public_54b2e1
#undef public_54b394
#undef public_54b44c
#undef public_54b466
#undef public_54b484
#undef public_54b4a6
#undef public_54b4b0
#undef public_54b4b6
#undef public_54b4f2
#undef public_54b4fd
