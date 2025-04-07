#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7c80);
CLANG_FORWARD_PROC_SYMBOL(public_6ea94c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ea94f3 _public_6ea94f3
#define public_6ea94fb _public_6ea94fb
#define public_6ea9500 _public_6ea9500
#define public_6ea9520 _public_6ea9520
#define public_6ea9524 _public_6ea9524
#define public_6ea9529 _public_6ea9529
#define public_6ea952d _public_6ea952d
#define public_6ea9541 _public_6ea9541
#define public_6ea957a _public_6ea957a
#define public_6ea958f _public_6ea958f
#define public_6ea95d4 _public_6ea95d4

PROC_DECLARE(0x6ea94c0, internal_6ea94c0, public_6ea94c0);
extern "C" NAKED register_t __cdecl internal_6ea94c0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [ebp+8]
        push esi
        dec eax
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [ebp+8], eax
        jne public_6ea95d4
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        je public_6ea9541
        mov edx, dword ptr ds : [eax+8]
        mov edi, dword ptr ds : [eax+4]
        cmp edi, edx
        mov dword ptr ss : [esp+0x1C], edx
        je public_6ea9541
        lea ecx, ss:[ebp+0x28]
        public_6ea94f3 : nop
        test ecx, ecx
        jne public_6ea94fb
        mov eax, dword ptr ds : [edi]
        jmp public_6ea952d
        public_6ea94fb : nop
        mov esi, ecx
        lea eax, ds:[edi+4]
        public_6ea9500 : nop
        mov bl, byte ptr ds : [eax]
        mov dl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_6ea9524
        test dl, dl
        je public_6ea9520
        mov bl, byte ptr ds : [eax+1]
        mov dl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_6ea9524
        add eax, 2
        add esi, 2
        test dl, dl
        jne public_6ea9500
        public_6ea9520 : nop
        xor eax, eax
        jmp public_6ea9529
        public_6ea9524 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ea9529 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        public_6ea952d : nop
        test eax, eax
        sete al
        test al, al
        jne public_6ea95d4
        add edi, 0x3C
        cmp edi, edx
        jne public_6ea94f3
        public_6ea9541 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x10]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[eax+0x70]
        call public_6f7b0f0
        mov eax, dword ptr ss : [ebp+0x5C]
        test eax, eax
        je public_6ea958f
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0xFFFFFFFF
        lea esi, ss:[ebp+0xC]
        je public_6ea957a
        push esi
        call dword ptr ds : [public_6fb3604]
        add esp, 4
        public_6ea957a : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        push 0xFFFFFFFF
        push ecx
        call dword ptr ds : [public_6fb3608]
        add esp, 8
        mov dword ptr ds : [esi], 0xFFFFFFFF
        public_6ea958f : nop
        mov edx, dword ptr ss : [ebp+0x14]
        lea eax, ss:[esp+0x20]
        push eax
        mov dword ptr ss : [esp+0x24], edx
        call dword ptr ds : [public_6fb35d4]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ss : [ebp+4]
        lea esi, ds:[ecx+0x1C]
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ds : [ecx+4], edx
        add esp, 4
        lea ecx, ss:[ebp+8]
        call public_6ea7c80
        push ebp
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+8], eax
        public_6ea95d4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6ea94c0)
    }
}

#undef public_6ea94f3
#undef public_6ea94fb
#undef public_6ea9500
#undef public_6ea9520
#undef public_6ea9524
#undef public_6ea9529
#undef public_6ea952d
#undef public_6ea9541
#undef public_6ea957a
#undef public_6ea958f
#undef public_6ea95d4
