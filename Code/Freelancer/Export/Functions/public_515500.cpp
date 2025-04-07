#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5139d0);
CLANG_FORWARD_PROC_SYMBOL(public_515500);
CLANG_FORWARD_PROC_SYMBOL(public_515640);
CLANG_FORWARD_PROC_SYMBOL(public_515730);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_515507 _public_515507
#define public_515514 _public_515514
#define public_51552e _public_51552e
#define public_515532 _public_515532
#define public_515543 _public_515543
#define public_515549 _public_515549
#define public_51556d _public_51556d
#define public_51556f _public_51556f
#define public_515591 _public_515591
#define public_5155ab _public_5155ab
#define public_5155c1 _public_5155c1
#define public_5155ce _public_5155ce
#define public_5155d0 _public_5155d0
#define public_5155dc _public_5155dc
#define public_5155f3 _public_5155f3
#define public_5155f7 _public_5155f7
#define public_515607 _public_515607
#define public_51560d _public_51560d
#define public_51562c _public_51562c

PROC_DECLARE(0x515500, internal_515500, public_515500);
extern "C" NAKED register_t __cdecl internal_515500()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        xor ebp, ebp
        public_515507 : nop
        test ebp, ebp
        mov esi, dword ptr ds : [public_6751c0]
        je public_515514
        mov esi, dword ptr ss : [ebp]
        public_515514 : nop
        test esi, esi
        je public_5155ce
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov ebp, dword ptr ds : [esi]
        jne public_51552e
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [public_6751c0], eax
        jmp public_515532
        public_51552e : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        public_515532 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        jne public_515543
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [public_6751c4], edx
        jmp public_515549
        public_515543 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        public_515549 : nop
        mov edx, dword ptr ds : [public_6751c8]
        mov eax, dword ptr ds : [public_6751b8]
        dec edx
        test eax, eax
        mov dword ptr ds : [public_6751c8], edx
        mov dword ptr ds : [public_6751b8], esi
        jne public_51556d
        mov dword ptr ds : [public_6751b4], esi
        jmp public_51556f
        public_51556d : nop
        mov dword ptr ds : [eax], esi
        public_51556f : nop
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], 0
        inc dword ptr ds : [public_6751bc]
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_5155c1
        mov eax, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_5155c1
        lea ebx, ds:[esi+8]
        public_515591 : nop
        mov edx, dword ptr ds : [edi+8]
        push 1
        push edx
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_5155ab
        push eax
        mov ecx, esi
        call public_5139d0
        public_5155ab : nop
        push edi
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebx
        call public_516f70
        mov eax, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        jne public_515591
        public_5155c1 : nop
        lea ecx, ds:[esi+0x30]
        call public_515640
        jmp public_515507
        public_5155ce : nop
        xor edi, edi
        public_5155d0 : nop
        test edi, edi
        mov esi, dword ptr ds : [public_6751b4]
        je public_5155dc
        mov esi, dword ptr ds : [edi]
        public_5155dc : nop
        test esi, esi
        je public_51562c
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov edi, dword ptr ds : [esi]
        jne public_5155f3
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [public_6751b4], ecx
        jmp public_5155f7
        public_5155f3 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        public_5155f7 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        jne public_515607
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [public_6751b8], eax
        jmp public_51560d
        public_515607 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        public_51560d : nop
        mov edx, dword ptr ds : [public_6751bc]
        dec edx
        mov ecx, esi
        mov dword ptr ds : [public_6751bc], edx
        call public_515730
        push esi
        call public_5b7e1d
        add esp, 4
        jmp public_5155d0
        public_51562c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x515500)
    }
}

#undef public_515507
#undef public_515514
#undef public_51552e
#undef public_515532
#undef public_515543
#undef public_515549
#undef public_51556d
#undef public_51556f
#undef public_515591
#undef public_5155ab
#undef public_5155c1
#undef public_5155ce
#undef public_5155d0
#undef public_5155dc
#undef public_5155f3
#undef public_5155f7
#undef public_515607
#undef public_51560d
#undef public_51562c
