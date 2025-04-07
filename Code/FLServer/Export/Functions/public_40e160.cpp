#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401cb0);
CLANG_FORWARD_PROC_SYMBOL(public_40e0b0);
CLANG_FORWARD_PROC_SYMBOL(public_40e160);
CLANG_FORWARD_PROC_SYMBOL(public_419032);
CLANG_FORWARD_PROC_SYMBOL(public_419050);

#define public_40e1a8 _public_40e1a8
#define public_40e1c1 _public_40e1c1
#define public_40e1cc _public_40e1cc
#define public_40e1d0 _public_40e1d0
#define public_40e1e7 _public_40e1e7
#define public_40e237 _public_40e237
#define public_40e263 _public_40e263
#define public_40e2e7 _public_40e2e7
#define public_40e2f0 _public_40e2f0
#define public_40e332 _public_40e332
#define public_40e37c _public_40e37c
#define public_40e3ad _public_40e3ad
#define public_40e3ec _public_40e3ec
#define public_40e40c _public_40e40c
#define public_40e421 _public_40e421
#define public_40e476 _public_40e476
#define public_40e49d _public_40e49d

PROC_DECLARE(0x40e160, internal_40e160, public_40e160);
extern "C" NAKED register_t __cdecl internal_40e160()
{
    __asm
    {
        mov eax, dword ptr ds : [public_427870]
        sub esp, 0x3C
        push ebx
        push ebp
        push esi
        push edi
        push 0xFFFFFFFF
        push eax
        call dword ptr ds : [public_41b1b4]
        mov eax, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ds : [public_427828]
        mov ecx, dword ptr ds : [edx+0x84C]
        mov ebp, eax
        shl ebp, 0x1C
        sar ebp, 0x1C
        cmp ebp, ecx
        jle public_40e1a8
        mov ecx, dword ptr ds : [public_427870]
        push ecx
        call dword ptr ds : [public_41b1a4]
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 
        public_40e1a8 : nop
        test ebp, ebp
        je public_40e1e7
        mov ecx, dword ptr ds : [edx+0x844]
        sar eax, 4
        mov esi, eax
        mov eax, dword ptr ds : [edx+0x840]
        cmp ecx, eax
        je public_40e1d0
        public_40e1c1 : nop
        cmp dword ptr ds : [eax], esi
        je public_40e1cc
        add eax, 4
        cmp eax, ecx
        jne public_40e1c1
        public_40e1cc : nop
        cmp ecx, eax
        jne public_40e1e7
        public_40e1d0 : nop
        mov edx, dword ptr ds : [public_427870]
        push edx
        call dword ptr ds : [public_41b1a4]
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 
        public_40e1e7 : nop
        mov ecx, dword ptr ss : [esp+0x54]
        lea eax, ss:[esp+0x58]
        push eax
        push ecx
        push 0x400
/*FIXUP push offset public_427890 @0x40e1f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_427890
        call dword ptr ds : [public_41b948]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add esp, 0x10
        mov edi, offset public_427890
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        mov cl, byte ptr ds : [ebx+public_42788f]
        mov al, 0xA
        cmp cl, al
        je public_40e237
        cmp ebx, 0x400
        jae public_40e237
        mov byte ptr ds : [ebx+public_427890], al
        inc ebx
        mov byte ptr ds : [ebx+public_427890], 0
/*FIXUP public_40e237 : nop
        push offset public_427890 @0x40e237*/
  FIXUP public_40e237 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_427890
        call dword ptr ds : [public_41b148]
        mov edx, dword ptr ds : [public_427c9c]
        test edx, edx
        jne public_40e263
        mov edx, dword ptr ds : [public_427870]
        push edx
        call dword ptr ds : [public_41b1a4]
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 
        public_40e263 : nop
        xor eax, eax
        mov ecx, 0xF
        lea edi, ss:[esp+0x10]
        rep stosd
        mov eax, dword ptr ds : [public_425824]
        sub esp, 0x3C
        mov edi, esp
        mov dword ptr ss : [esp+0x60], eax
        mov ecx, 0xF
        lea esi, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x4C], 0x3C
        mov dword ptr ss : [esp+0x50], 0x40000000
        rep movsd
        mov ecx, edx
        call public_419032
        cmp ebp, 2
        jne public_40e2e7
        xor eax, eax
        mov ecx, 0xF
        lea edi, ss:[esp+0x10]
        rep stosd
        mov ecx, dword ptr ds : [public_425828]
        mov dword ptr ss : [esp+0x24], ecx
        sub esp, 0x3C
        mov edi, esp
        mov ecx, 0xF
        lea esi, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x4C], 0x3C
        mov dword ptr ss : [esp+0x50], 0x40000000
        rep movsd
        mov ecx, dword ptr ds : [public_427c9c]
        call public_419032
        public_40e2e7 : nop
        cmp ebp, 1
        je public_40e2f0
        test ebp, ebp
        jne public_40e332
        public_40e2f0 : nop
        mov edx, dword ptr ds : [public_425820]
        xor eax, eax
        mov ecx, 0xF
        lea edi, ss:[esp+0x10]
        rep stosd
        sub esp, 0x3C
        mov edi, esp
        mov dword ptr ss : [esp+0x60], edx
        mov ecx, 0xF
        lea esi, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x4C], 0x3C
        mov dword ptr ss : [esp+0x50], 0x40000000
        rep movsd
        mov ecx, dword ptr ds : [public_427c9c]
        call public_419032
        public_40e332 : nop
        cmp byte ptr ds : [public_427895], 0x3E
        jne public_40e37c
        xor eax, eax
        mov ecx, 0xF
        lea edi, ss:[esp+0x10]
        rep stosd
        mov eax, dword ptr ds : [public_425834]
        sub esp, 0x3C
        mov edi, esp
        mov dword ptr ss : [esp+0x60], eax
        mov ecx, 0xF
        lea esi, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x4C], 0x3C
        mov dword ptr ss : [esp+0x50], 0x40000000
        rep movsd
        mov ecx, dword ptr ds : [public_427c9c]
        call public_419032
        public_40e37c : nop
        mov esi, dword ptr ds : [public_427c9c]
        test esi, esi
        je public_40e3ad
        push 0xFFFFFFFF
        push 0xFFFFFFFF
        mov ecx, esi
        call public_419050
        mov ecx, dword ptr ds : [esi+0x20]
/*FIXUP push offset public_427890 @0x40e394*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_427890
        push 0
        push 0xC2
        push ecx
        call dword ptr ds : [public_41bbe8]
        mov esi, dword ptr ds : [public_427c9c]
        public_40e3ad : nop
        inc dword ptr ds : [esi+0x184]
        mov ecx, dword ptr ds : [public_427c9c]
        mov eax, dword ptr ds : [public_427828]
        mov edx, dword ptr ds : [ecx+0x184]
        cmp edx, dword ptr ds : [eax+0x6F8]
        jbe public_40e3ec
        call public_40e0b0
        test al, al
        je public_40e3ec
        mov ecx, dword ptr ds : [public_427828]
        mov eax, dword ptr ds : [public_427c9c]
        mov edx, dword ptr ds : [ecx+0x6FC]
        sub dword ptr ds : [eax+0x184], edx
        public_40e3ec : nop
        mov eax, dword ptr ds : [public_427828]
        mov cl, byte ptr ds : [eax+0xA78]
        test cl, cl
        je public_40e40c
        push ebx
/*FIXUP push offset public_427890 @0x40e3fc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_427890
        lea ecx, ds:[eax+0xCC]
        call public_401cb0
        public_40e40c : nop
        mov eax, dword ptr ds : [public_427870]
        push eax
        call dword ptr ds : [public_41b1a4]
        test ebp, ebp
        je public_40e421
        cmp ebp, 1
        jne public_40e49d
/*FIXUP public_40e421 : nop
        push offset public_4258a8 @0x40e421*/
  FIXUP public_40e421 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_4258a8
/*FIXUP push offset public_425890 @0x40e426*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425890
        call dword ptr ds : [public_41b978]
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_40e49d
        cmp dword ptr ds : [public_42583c], 1
        mov edi, dword ptr ds : [public_41b950]
        jne public_40e476
        mov ax, word ptr ds : [public_427832]
        mov ecx, dword ptr ds : [public_427830]
        xor edx, edx
        mov dl, al
        and ecx, 0xFFFF
        push ecx
        movzx eax, ah
        and edx, 0xFF
        push edx
        push eax
/*FIXUP push offset public_42585c @0x40e46b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42585c
        push esi
        call edi
        add esp, 0x14
        public_40e476 : nop
        mov ecx, dword ptr ds : [public_42583c]
        mov eax, ecx
/*FIXUP push offset public_427890 @0x40e47e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_427890
        push eax
        inc ecx
/*FIXUP push offset public_425850 @0x40e485*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425850
        push esi
        mov dword ptr ds : [public_42583c], ecx
        call edi
        push esi
        call dword ptr ds : [public_41b970]
        add esp, 0x14
        public_40e49d : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x40e160)
    }
}

#undef public_40e1a8
#undef public_40e1c1
#undef public_40e1cc
#undef public_40e1d0
#undef public_40e1e7
#undef public_40e237
#undef public_40e263
#undef public_40e2e7
#undef public_40e2f0
#undef public_40e332
#undef public_40e37c
#undef public_40e3ad
#undef public_40e3ec
#undef public_40e40c
#undef public_40e421
#undef public_40e476
#undef public_40e49d
