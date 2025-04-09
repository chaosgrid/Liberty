#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_549bc0);
CLANG_FORWARD_PROC_SYMBOL(public_549e70);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);

#define public_549e9c _public_549e9c
#define public_549eb0 _public_549eb0
#define public_549ee4 _public_549ee4
#define public_549f02 _public_549f02
#define public_549f18 _public_549f18
#define public_549f1b _public_549f1b
#define public_549f36 _public_549f36
#define public_549f63 _public_549f63
#define public_549f81 _public_549f81
#define public_549f8d _public_549f8d
#define public_549fba _public_549fba
#define public_549fd8 _public_549fd8
#define public_549fed _public_549fed
#define public_54a00c _public_54a00c
#define public_54a02b _public_54a02b
#define public_54a047 _public_54a047
#define public_54a068 _public_54a068
#define public_54a084 _public_54a084
#define public_54a09e _public_54a09e
#define public_54a0a8 _public_54a0a8
#define public_54a0ca _public_54a0ca

PROC_DECLARE(0x549e70, internal_549e70, public_549e70);
extern "C" NAKED register_t __cdecl internal_549e70()
{
    __asm
    {
        sub esp, 0x28
        mov eax, dword ptr ss : [esp+0x2C]
        push ebx
        push ebp
        xor ebp, ebp
        cmp eax, ebp
        push esi
        push edi
        mov ebx, ecx
        mov byte ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], ebp
        mov byte ptr ss : [esp+0x18], 0
        jne public_549e9c
        mov dword ptr ss : [esp+0x14], ebp
        mov byte ptr ss : [esp+0x18], 0
        jmp public_549eb0
        public_549e9c : nop
        push eax
        lea eax, ss:[esp+0x1C]
        push 0x20
        push eax
        call public_417c50
        add esp, 0xC
        mov dword ptr ss : [esp+0x14], eax
        public_549eb0 : nop
        mov edi, offset public_5cc404
        lea esi, ss:[esp+0x18]
        mov ecx, 7
        xor edx, edx
        repe cmpsb
        mov byte ptr ds : [public_614028], 1
        jne public_549f36
        mov eax, dword ptr ds : [public_674aa0]
        cmp byte ptr ds : [eax+0x5BA], 1
        jne public_549ee4
        push edx
        push 0x39
        call public_5763b0
        add esp, 8
        public_549ee4 : nop
        mov ecx, dword ptr ds : [public_674aa0]
        cmp byte ptr ds : [ecx+0x5B9], 1
        jne public_549f02
        push 0
        push 0xBF
        call public_5763b0
        add esp, 8
        public_549f02 : nop
        mov eax, dword ptr ds : [ebx+0xBA4]
        sub eax, 0
        je public_549f18
        dec eax
        jne public_549f1b
        lea ebp, ds:[ebx+0x1B0]
        jmp public_549f1b
        public_549f18 : nop
        lea ebp, ds:[ebx+0xC]
        public_549f1b : nop
        push 1
/*FIXUP push offset public_5d9588 @0x549f1d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9588
        call public_41dde0
        push 1
        call public_41dda0
        add esp, 0xC
        jmp public_54a0a8
        public_549f36 : nop
        mov edi, offset public_5e07ac
        lea esi, ss:[esp+0x18]
        mov ecx, 0xD
        xor edx, edx
        repe cmpsb
        jne public_549f8d
        mov eax, dword ptr ds : [public_674aa0]
        cmp byte ptr ds : [eax+0x5BA], 1
        jne public_549f63
        push edx
        push 0x39
        call public_5763b0
        add esp, 8
        public_549f63 : nop
        mov ecx, dword ptr ds : [public_674aa0]
        cmp byte ptr ds : [ecx+0x5B9], 1
        jne public_549f81
        push 0
        push 0xBF
        call public_5763b0
        add esp, 8
        public_549f81 : nop
        mov dword ptr ds : [ebx+0xBA4], 0
        jmp public_549f18
        public_549f8d : nop
        mov edi, offset public_5e079c
        lea esi, ss:[esp+0x18]
        mov ecx, 0xD
        xor edx, edx
        repe cmpsb
        jne public_549fed
        mov eax, dword ptr ds : [public_674aa0]
        cmp byte ptr ds : [eax+0x5BA], 1
        jne public_549fba
        push edx
        push 0x39
        call public_5763b0
        add esp, 8
        public_549fba : nop
        mov ecx, dword ptr ds : [public_674aa0]
        cmp byte ptr ds : [ecx+0x5B9], 1
        jne public_549fd8
        push 0
        push 0xBF
        call public_5763b0
        add esp, 8
        public_549fd8 : nop
        lea ebp, ds:[ebx+0x1B0]
        mov dword ptr ds : [ebx+0xBA4], 1
        jmp public_549f1b
        public_549fed : nop
        mov edi, offset public_5e0794
        lea esi, ss:[esp+0x18]
        mov ecx, 7
        xor edx, edx
        repe cmpsb
        jne public_54a00c
        lea ebp, ds:[ebx+0x3C8]
        jmp public_549f1b
        public_54a00c : nop
        mov edi, offset public_5e0788
        lea esi, ss:[esp+0x18]
        mov ecx, 9
        xor eax, eax
        repe cmpsb
        jne public_54a02b
        lea ebp, ds:[ebx+0x500]
        jmp public_549f1b
        public_54a02b : nop
        mov edi, offset public_5e0780
        lea esi, ss:[esp+0x18]
        mov ecx, 6
        xor edx, edx
        repe cmpsb
        jne public_54a047
        lea ebp, ds:[ebx+0x60C]
        jmp public_54a09e
        public_54a047 : nop
        mov edi, offset public_5cacd8
        lea esi, ss:[esp+0x18]
        mov ecx, 7
        xor eax, eax
        repe cmpsb
        jne public_54a068
        mov byte ptr ss : [esp+0x10], 1
        lea ebp, ds:[ebx+0x760]
        jmp public_54a09e
        public_54a068 : nop
        mov edi, offset public_5d7490
        lea esi, ss:[esp+0x18]
        mov ecx, 7
        xor edx, edx
        repe cmpsb
        jne public_54a084
        lea ebp, ds:[ebx+0x9A4]
        jmp public_54a09e
        public_54a084 : nop
        mov edi, offset public_5e0778
        lea esi, ss:[esp+0x18]
        mov ecx, 8
        xor eax, eax
        repe cmpsb
        jne public_54a0ca
        lea ebp, ds:[ebx+0xA9C]
        public_54a09e : nop
        push 0
        call public_41dda0
        add esp, 4
        public_54a0a8 : nop
        test ebp, ebp
        je public_54a0ca
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push ebp
        mov ecx, ebx
        call public_549bc0
        mov eax, dword ptr ss : [esp+0x40]
        test eax, eax
        je public_54a0ca
        mov edx, dword ptr ss : [ebp]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x58]
        public_54a0ca : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x549e70)
    }
}

#undef public_549e9c
#undef public_549eb0
#undef public_549ee4
#undef public_549f02
#undef public_549f18
#undef public_549f1b
#undef public_549f36
#undef public_549f63
#undef public_549f81
#undef public_549f8d
#undef public_549fba
#undef public_549fd8
#undef public_549fed
#undef public_54a00c
#undef public_54a02b
#undef public_54a047
#undef public_54a068
#undef public_54a084
#undef public_54a09e
#undef public_54a0a8
#undef public_54a0ca
