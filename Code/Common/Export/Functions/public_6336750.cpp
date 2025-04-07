#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262630);
CLANG_FORWARD_PROC_SYMBOL(public_630f660);
CLANG_FORWARD_PROC_SYMBOL(public_630f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_6336380);
CLANG_FORWARD_PROC_SYMBOL(public_6336750);
CLANG_FORWARD_PROC_SYMBOL(public_6336a80);
CLANG_FORWARD_PROC_SYMBOL(public_633de40);
CLANG_FORWARD_PROC_SYMBOL(public_633e730);
CLANG_FORWARD_PROC_SYMBOL(public_633f080);
CLANG_FORWARD_PROC_SYMBOL(public_6340e70);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);
CLANG_FORWARD_JUMP_SYMBOL(public_6397691);

#define public_63367cd _public_63367cd
#define public_63367e0 _public_63367e0
#define public_63367ea _public_63367ea
#define public_6336843 _public_6336843
#define public_63368a4 _public_63368a4
#define public_63368b8 _public_63368b8
#define public_6336922 _public_6336922
#define public_6336956 _public_6336956
#define public_633696a _public_633696a
#define public_63369f4 _public_63369f4

PROC_DECLARE(0x6336750, internal_6336750, public_6336750);
extern "C" NAKED register_t __cdecl internal_6336750()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6397691 @0x6336758*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397691
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1774
        mov dword ptr fs : [0], esp
        call public_6391dc0
        mov eax, dword ptr ds : [public_658a998]
        push ebx
        push eax
        mov eax, dword ptr ds : [public_658a99c]
        push eax
        push eax
        call public_6340e70
        mov dword ptr ds : [public_658a99c], eax
        mov eax, dword ptr ds : [public_658a9b4]
        xor ebx, ebx
        add esp, 0xC
        cmp eax, ebx
        je public_63367cd
        mov ecx, dword ptr ds : [eax]
        push 0x104
        lea edx, ss:[esp+0x110]
        push edx
        push eax
        call dword ptr ds : [ecx+0x84]
        mov eax, dword ptr ss : [esp+0x1788]
        push ebx
        push eax
        lea ecx, ss:[esp+0x114]
        push ecx
        lea edx, ss:[esp+0x14]
        push ebx
        push edx
        call dword ptr ds : [public_6399208]
        add esp, 0x14
        jmp public_63367ea
        public_63367cd : nop
        mov eax, dword ptr ss : [esp+0x1788]
        lea edx, ss:[esp+8]
        sub edx, eax
        lea ebx, ds:[ebx]
        public_63367e0 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        cmp cl, bl
        jne public_63367e0
        public_63367ea : nop
        lea ecx, ss:[esp+0x210]
        call public_630f660
        push ebx
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x218]
        mov dword ptr ss : [esp+0x1788], ebx
        call public_630f9b0
        test al, al
        je public_63369f4
        mov eax, dword ptr ds : [public_658a998]
        cmp eax, ebx
        je public_6336843
        mov ecx, dword ptr ds : [public_658a9a0]
        sub ecx, eax
        mov eax, 0xEA0EA0EB
        imul ecx
        add edx, ecx
        sar edx, 8
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, 0x12C
        jae public_63368a4
        public_6336843 : nop
        push esi
        push 0x14820
        call public_6391d9c
        mov edx, dword ptr ds : [public_658a99c]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ds : [public_658a998]
        push esi
        push edx
        push eax
        mov ecx, offset public_658a994
        call public_633e730
        mov ecx, dword ptr ds : [public_658a998]
        push ecx
        call public_6391d5a
        lea edx, ds:[esi+0x14820]
        add esp, 4
        mov ecx, offset public_658a994
        mov dword ptr ds : [public_658a9a0], edx
        call public_633de40
        imul eax, 0x118
        add eax, esi
        mov dword ptr ds : [public_658a998], esi
        mov dword ptr ds : [public_658a99c], eax
        pop esi
        public_63368a4 : nop
        lea ecx, ss:[esp+0x210]
        call public_6310070
        test al, al
        je public_633696a
/*FIXUP public_63368b8 : nop
        push offset public_639ecb8 @0x63368b8*/
  FIXUP public_63368b8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ecb8
        lea ecx, ss:[esp+0x214]
        call public_63103c0
        test al, al
        je public_6336956
        mov al, byte ptr ds : [public_658a990]
        test al, 1
        jne public_6336922
        mov dl, al
        or dl, 1
/*FIXUP push offset _public_6336a80 @0x63368df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6336a80
        mov byte ptr ds : [public_658a990], dl
        mov dword ptr ds : [public_658a878], ebx
        mov byte ptr ds : [public_658a87c], bl
        mov dword ptr ds : [public_658a8d4], ebx
        mov byte ptr ds : [public_658a8d8], bl
        mov dword ptr ds : [public_658a904], ebx
        mov byte ptr ds : [public_658a908], bl
        mov dword ptr ds : [public_658a948], ebx
        mov byte ptr ds : [public_658a94c], bl
        call public_6391f9e
        add esp, 4
        public_6336922 : nop
        mov eax, dword ptr ds : [public_658a99c]
/*FIXUP push offset public_658a878 @0x6336927*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658a878
        push 1
        push eax
        mov ecx, offset public_658a994
        call public_633f080
        mov edx, dword ptr ds : [public_658a99c]
        lea ecx, ss:[esp+0x210]
        push ecx
        add edx, 0xFFFFFEE8
        push edx
        call public_6336380
        add esp, 8
        public_6336956 : nop
        lea ecx, ss:[esp+0x210]
        call public_6310070
        test al, al
        jne public_63368b8
        public_633696a : nop
        lea eax, ss:[esp+0x1638]
        mov dword ptr ss : [esp+0x1780], 1
        mov dword ptr ss : [esp+4], eax
        lea ecx, ss:[esp+0x1638]
        mov byte ptr ss : [esp+0x1780], 2
        call public_6262630
        push 1
        lea ecx, ss:[esp+0x163C]
        mov byte ptr ss : [esp+0x1784], 1
        call dword ptr ds : [public_63991b8]
        lea ecx, ss:[esp+0x210]
        mov dword ptr ss : [esp+0x1780], 3
        call public_6262630
        push 1
        lea ecx, ss:[esp+0x214]
        mov dword ptr ss : [esp+0x1784], 0xFFFFFFFF
        call dword ptr ds : [public_63991b8]
        mov al, 1
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1774]
        mov dword ptr fs : [0], ecx
        add esp, 0x1780
        ret 
        public_63369f4 : nop
        mov ebx, 4
        lea ecx, ss:[esp+0x1638]
        mov dword ptr ss : [esp+0x1780], ebx
        mov dword ptr ss : [esp+4], ecx
        lea ecx, ss:[esp+0x1638]
        mov byte ptr ss : [esp+0x1780], 5
        call public_6262630
        push 1
        lea ecx, ss:[esp+0x163C]
        mov byte ptr ss : [esp+0x1784], bl
        call dword ptr ds : [public_63991b8]
        lea ecx, ss:[esp+0x210]
        mov dword ptr ss : [esp+0x1780], 6
        call public_6262630
        push 1
        lea ecx, ss:[esp+0x214]
        mov dword ptr ss : [esp+0x1784], 0xFFFFFFFF
        call dword ptr ds : [public_63991b8]
        mov ecx, dword ptr ss : [esp+0x1778]
        xor al, al
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1780
        ret 
        UNREACHABLE_TRAP(0x6336750)
    }
}

#undef public_63367cd
#undef public_63367e0
#undef public_63367ea
#undef public_6336843
#undef public_63368a4
#undef public_63368b8
#undef public_6336922
#undef public_6336956
#undef public_633696a
#undef public_63369f4
