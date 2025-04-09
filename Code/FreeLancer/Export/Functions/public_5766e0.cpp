#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5765b0);
CLANG_FORWARD_PROC_SYMBOL(public_5766e0);
CLANG_FORWARD_PROC_SYMBOL(public_578690);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_576708 _public_576708
#define public_576727 _public_576727
#define public_576748 _public_576748
#define public_57675f _public_57675f
#define public_576781 _public_576781
#define public_5767a3 _public_5767a3
#define public_5767c3 _public_5767c3
#define public_5767e6 _public_5767e6
#define public_5767fe _public_5767fe
#define public_576816 _public_576816
#define public_57682c _public_57682c
#define public_57683e _public_57683e
#define public_576843 _public_576843
#define public_57684e _public_57684e
#define public_576884 _public_576884
#define public_576894 _public_576894

PROC_DECLARE(0x5766e0, internal_5766e0, public_5766e0);
extern "C" NAKED register_t __cdecl internal_5766e0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp], 0
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_576894
        public_576708 : nop
        mov esi, dword ptr ds : [public_5c6cf4]
/*FIXUP push offset public_5c866c @0x57670e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c866c
        mov ecx, edi
        call esi
        test al, al
        mov ecx, edi
        je public_57675f
        call dword ptr ds : [public_5c6698]
        mov ebx, eax
        xor esi, esi
        public_576727 : nop
        mov eax, dword ptr ds : [esi*4+public_614dd8]
        push eax
        push ebx
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_576748
        inc esi
        cmp esi, 0xCC
        jb public_576727
        xor esi, esi
        public_576748 : nop
        test esi, esi
        mov dword ptr ss : [ebp], esi
        jne public_576884
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0xC
        ret 4
/*FIXUP public_57675f : nop
        push offset public_5e4334 @0x57675f*/
  FIXUP public_57675f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4334
        call esi
        test al, al
        mov ecx, edi
        je public_576781
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ss : [ebp+4], eax
        jmp public_576884
/*FIXUP public_576781 : nop
        push offset public_5c797c @0x576781*/
  FIXUP public_576781 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c797c
        call esi
        test al, al
        mov ecx, edi
        je public_5767a3
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ss : [ebp+8], eax
        jmp public_576884
/*FIXUP public_5767a3 : nop
        push offset public_5e432c @0x5767a3*/
  FIXUP public_5767a3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e432c
        call esi
        test al, al
        mov ecx, edi
        je public_57684e
        xor ebx, ebx
        push ebx
        xor ebp, ebp
        call dword ptr ds : [public_5c6cf8]
        test al, al
        jne public_57683e
        public_5767c3 : nop
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c6024]
        mov esi, eax
/*FIXUP push offset public_5e4324 @0x5767ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4324
        push esi
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_5767e6
        or ebp, 1
        jmp public_57682c
/*FIXUP public_5767e6 : nop
        push offset public_5e431c @0x5767e6*/
  FIXUP public_5767e6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e431c
        push esi
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_5767fe
        or ebp, 2
        jmp public_57682c
/*FIXUP public_5767fe : nop
        push offset public_5e4314 @0x5767fe*/
  FIXUP public_5767fe : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4314
        push esi
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_576816
        or ebp, 4
        jmp public_57682c
/*FIXUP public_576816 : nop
        push offset public_5e4304 @0x576816*/
  FIXUP public_576816 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4304
        push esi
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_57682c
        or ebp, 8
        public_57682c : nop
        inc ebx
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_5c6cf8]
        test al, al
        je public_5767c3
        test ebp, ebp
        jne public_576843
        public_57683e : nop
        mov ebp, 1
        public_576843 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0xC], ebp
        mov ebp, ecx
        jmp public_576884
/*FIXUP public_57684e : nop
        push offset public_5e4300 @0x57684e*/
  FIXUP public_57684e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4300
        call esi
        test al, al
        je public_576884
        xor eax, eax
        push edi
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        call public_5765b0
        test al, al
        je public_576884
        mov eax, dword ptr ss : [ebp+0x18]
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[ebp+0x10]
        push 1
        push eax
        call public_578690
        public_576884 : nop
        mov ecx, edi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_576708
        public_576894 : nop
        mov ecx, dword ptr ss : [ebp]
        pop edi
        pop esi
        xor eax, eax
        test ecx, ecx
        pop ebp
        setne al
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x5766e0)
    }
}

#undef public_576708
#undef public_576727
#undef public_576748
#undef public_57675f
#undef public_576781
#undef public_5767a3
#undef public_5767c3
#undef public_5767e6
#undef public_5767fe
#undef public_576816
#undef public_57682c
#undef public_57683e
#undef public_576843
#undef public_57684e
#undef public_576884
#undef public_576894
