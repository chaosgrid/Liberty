#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54bb00);

#define public_535495 _public_535495
#define public_5354bb _public_5354bb
#define public_5354bd _public_5354bd
#define public_5354f1 _public_5354f1
#define public_535520 _public_535520
#define public_535543 _public_535543
#define public_535545 _public_535545
#define public_535586 _public_535586
#define public_5355a9 _public_5355a9
#define public_5355ab _public_5355ab
#define public_5355c0 _public_5355c0
#define public_535601 _public_535601
#define public_53562e _public_53562e
#define public_53563c _public_53563c

PROC_DECLARE(0x535470, internal_535470, public_535470);
extern "C" NAKED register_t __cdecl internal_535470()
{
    __asm
    {
        sub esp, 0x14
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        cmp edi, 0xFFFFFFFF
        mov esi, ecx
        mov dword ptr ss : [esp+8], 0
        je public_535495
        call public_54bb00
        cmp edi, eax
        jne public_53563c
        public_535495 : nop
        lea edi, ds:[esi-4]
        test edi, edi
        je public_5354bb
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_5354bb
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_5354bb
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_5354bd
        public_5354bb : nop
        xor eax, eax
        public_5354bd : nop
        mov edx, dword ptr ss : [esp+0x20]
        push ebx
        push ebp
        push edx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c6574]
        push eax
        call dword ptr ds : [public_5c69a4]
        add esp, 4
        test eax, eax
        je public_535601
        mov ecx, dword ptr ds : [eax+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        cmp ecx, edx
        mov ebp, ecx
        jb public_5354f1
        mov ebp, edx
        public_5354f1 : nop
        mov eax, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        sub eax, 0x1A
        je public_535586
        dec eax
        jne public_53562e
        push 0x100
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c64f4]
        mov ebx, dword ptr ds : [public_5c64f0]
        public_535520 : nop
        test edi, edi
        je public_535543
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_535543
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_535543
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_535545
        public_535543 : nop
        xor eax, eax
        public_535545 : nop
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[eax+0xE4]
        call ebx
        mov esi, eax
        test esi, esi
        je public_53562e
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x44]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_535520
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x38]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_535520
        jmp public_5355c0
        public_535586 : nop
        test edi, edi
        je public_5355a9
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_5355a9
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_5355a9
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_5355ab
        public_5355a9 : nop
        xor eax, eax
        public_5355ab : nop
        mov ecx, eax
        call dword ptr ds : [public_5c6504]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_53562e
        public_5355c0 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov dword ptr ss : [esp+0x14], eax
        mov ax, word ptr ss : [esp+0x28]
        mov word ptr ss : [esp+0x18], ax
        mov eax, dword ptr ds : [public_673344]
        push eax
        lea eax, ss:[esp+0x18]
        mov word ptr ss : [esp+0x1E], bp
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0xE0]
        mov eax, dword ptr ss : [esp+0x10]
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 0x14
        ret 0xC
        public_535601 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5de538 @0x535607*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de538
        push 0x540
/*FIXUP push offset public_5de4c4 @0x535611*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de4c4
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x53561b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFE
        public_53562e : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 0x14
        ret 0xC
        public_53563c : nop
        pop edi
        mov eax, 0xFFFFFFFB
        pop esi
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x535470)
    }
}

#undef public_535495
#undef public_5354bb
#undef public_5354bd
#undef public_5354f1
#undef public_535520
#undef public_535543
#undef public_535545
#undef public_535586
#undef public_5355a9
#undef public_5355ab
#undef public_5355c0
#undef public_535601
#undef public_53562e
#undef public_53563c
