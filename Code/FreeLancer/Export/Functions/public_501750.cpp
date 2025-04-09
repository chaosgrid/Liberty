#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_501750);
CLANG_FORWARD_PROC_SYMBOL(public_5018a0);
CLANG_FORWARD_PROC_SYMBOL(public_537260);

#define public_501769 _public_501769
#define public_501771 _public_501771
#define public_501781 _public_501781
#define public_501789 _public_501789
#define public_5017a0 _public_5017a0
#define public_5017c0 _public_5017c0
#define public_5017ce _public_5017ce
#define public_5017d1 _public_5017d1
#define public_5017e7 _public_5017e7
#define public_5017f7 _public_5017f7

PROC_DECLARE(0x501750, internal_501750, public_501750);
extern "C" NAKED register_t __cdecl internal_501750()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        push edi
        mov dword ptr ss : [esp+0xC], 0
        jne public_501769
        xor eax, eax
        jmp public_501771
        public_501769 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 2
        public_501771 : nop
        mov edi, dword ptr ss : [esp+0x14]
        cmp eax, edi
        jae public_5017a0
        test edx, edx
        jne public_501781
        xor eax, eax
        jmp public_501789
        public_501781 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 2
        public_501789 : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        mov edx, edi
        sub edx, eax
        mov eax, dword ptr ds : [esi+8]
        push edx
        push eax
        mov ecx, esi
        call public_537260
        jmp public_5017d1
        public_5017a0 : nop
        test edx, edx
        je public_5017d1
        mov ecx, dword ptr ds : [esi+8]
        mov eax, ecx
        sub eax, edx
        sar eax, 2
        cmp edi, eax
        jae public_5017d1
        mov eax, ecx
        cmp eax, ecx
        lea edx, ds:[edx+edi*4]
        je public_5017ce
        nop 
        lea esp, ss:[esp]
        public_5017c0 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ebx
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_5017c0
        public_5017ce : nop
        mov dword ptr ds : [esi+8], edx
        public_5017d1 : nop
        xor eax, eax
        test edi, edi
        jle public_5017f7
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ds:[ecx*4]
        mov ecx, dword ptr ss : [esp+0x18]
        push ebp
        public_5017e7 : nop
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+eax*4], ebp
        inc eax
        add ecx, edx
        cmp eax, edi
        jl public_5017e7
        pop ebp
        public_5017f7 : nop
        mov eax, dword ptr ds : [esi+4]
        lea edx, ds:[esi+0x10]
        push edx
        dec edi
        push edi
        push eax
        call public_5018a0
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x501750)
    }
}

#undef public_501769
#undef public_501771
#undef public_501781
#undef public_501789
#undef public_5017a0
#undef public_5017c0
#undef public_5017ce
#undef public_5017d1
#undef public_5017e7
#undef public_5017f7
