#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62752b0);
CLANG_FORWARD_PROC_SYMBOL(public_6279920);
CLANG_FORWARD_PROC_SYMBOL(public_627a710);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310040);
CLANG_FORWARD_PROC_SYMBOL(public_6310560);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);

#define public_62752c4 _public_62752c4
#define public_62752e1 _public_62752e1
#define public_62752f7 _public_62752f7
#define public_627531a _public_627531a
#define public_627535d _public_627535d
#define public_627537b _public_627537b
#define public_627539b _public_627539b
#define public_62753bf _public_62753bf
#define public_62753f3 _public_62753f3
#define public_6275438 _public_6275438
#define public_6275451 _public_6275451

PROC_DECLARE(0x62752b0, internal_62752b0, public_62752b0);
extern "C" NAKED register_t __cdecl internal_62752b0()
{
    __asm
    {
        sub esp, 0x408
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        xor esi, esi
        lea edi, ss:[esp+0x18]
        public_62752c4 : nop
        mov ebx, dword ptr ss : [esp+0x41C]
        push esi
        mov ecx, ebx
        call public_6310560
        test al, al
        jne public_62752f7
        push esi
        mov ecx, ebx
        call public_6310a30
        mov edx, edi
        public_62752e1 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edx], cl
        inc edx
        test cl, cl
        jne public_62752e1
        inc esi
        add edi, 0x100
        cmp esi, 4
        jl public_62752c4
        public_62752f7 : nop
        xor edi, edi
        cmp esi, 1
        jl public_627531a
        lea eax, ss:[esp+0x18]
/*FIXUP push offset public_639a418 @0x6275302*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a418
        push eax
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        jne public_627531a
        mov edi, 1
        public_627531a : nop
        sub esi, edi
        xor ebp, ebp
        cmp esi, 2
        je public_627535d
        cmp esi, 3
        je public_627535d
        mov ecx, ebx
        mov esi, 0x100001
        call public_6310040
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x38A
/*FIXUP push offset public_639a188 @0x6275340*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
/*FIXUP push offset public_639a388 @0x6275345*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a388
        push esi
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x408
        ret 4
        public_627535d : nop
        shl edi, 8
        cmp esi, 3
        lea edx, ss:[esp+edi+0x118]
        lea ebx, ss:[esp+edi+0x18]
        mov dword ptr ss : [esp+0x10], edx
        jne public_627537b
        lea ebp, ss:[esp+edi+0x218]
        public_627537b : nop
        xor edi, edi
        test ebx, ebx
        je public_627539b
        mov esi, dword ptr ds : [public_639902c]
/*FIXUP push offset public_639a37c @0x6275387*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a37c
        push ebx
        call esi
        add esp, 8
        test eax, eax
        jne public_62753f3
        mov edi, 1
        public_627539b : nop
        xor ebx, ebx
        test ebp, ebp
        je public_62753bf
        mov ecx, dword ptr ss : [esp+0x41C]
        call public_6310040
        push eax
        push ebp
        call public_627a710
        push ebp
        call public_630d3f0
        add esp, 0xC
        mov ebx, eax
        public_62753bf : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edx+0x1B4]
        call public_6279920
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        lea ecx, ds:[esi+4]
        push ecx
        mov dword ptr ds : [esi], edi
        call public_6334400
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebx
        pop esi
        pop ebp
        pop ebx
        add esp, 0x408
        ret 4
/*FIXUP public_62753f3 : nop
        push offset public_639a374 @0x62753f3*/
  FIXUP public_62753f3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a374
        push ebx
        call esi
        add esp, 8
        test eax, eax
        jne public_6275438
        mov ecx, dword ptr ss : [esp+0x41C]
        mov edi, 2
        mov esi, 0x100002
        call public_6310040
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x3A3
/*FIXUP push offset public_639a188 @0x6275423*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
/*FIXUP push offset public_639a330 @0x6275428*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a330
        push esi
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_627539b
/*FIXUP public_6275438 : nop
        push offset public_639a324 @0x6275438*/
  FIXUP public_6275438 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a324
        push ebx
        call esi
        add esp, 8
        test eax, eax
        jne public_6275451
        mov edi, 3
        jmp public_627539b
        public_6275451 : nop
        mov ecx, dword ptr ss : [esp+0x41C]
        mov esi, 0x100001
        call public_6310040
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x3AD
/*FIXUP push offset public_639a188 @0x627546e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
/*FIXUP push offset public_639a2a0 @0x6275473*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a2a0
        push esi
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x408
        ret 4
        UNREACHABLE_TRAP(0x62752b0)
    }
}

#undef public_62752c4
#undef public_62752e1
#undef public_62752f7
#undef public_627531a
#undef public_627535d
#undef public_627537b
#undef public_627539b
#undef public_62753bf
#undef public_62753f3
#undef public_6275438
#undef public_6275451
