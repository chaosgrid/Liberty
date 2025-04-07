#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d33584);
CLANG_FORWARD_PROC_SYMBOL(public_6d34b5b);
CLANG_FORWARD_PROC_SYMBOL(public_6d34c93);
CLANG_FORWARD_PROC_SYMBOL(public_6d34d84);
CLANG_FORWARD_PROC_SYMBOL(public_6d34f86);
CLANG_FORWARD_PROC_SYMBOL(public_6d3518a);
CLANG_FORWARD_PROC_SYMBOL(public_6d355ad);
CLANG_FORWARD_PROC_SYMBOL(public_6d35b3f);
CLANG_FORWARD_PROC_SYMBOL(public_6d35f25);
CLANG_FORWARD_PROC_SYMBOL(public_6d36656);
CLANG_FORWARD_PROC_SYMBOL(public_6d369f8);
CLANG_FORWARD_PROC_SYMBOL(public_6d37d51);
CLANG_FORWARD_PROC_SYMBOL(public_6d3be35);

#define public_6d36adb _public_6d36adb
#define public_6d36adf _public_6d36adf
#define public_6d36ae4 _public_6d36ae4
#define public_6d36af5 _public_6d36af5
#define public_6d36b04 _public_6d36b04
#define public_6d36b09 _public_6d36b09
#define public_6d36b0e _public_6d36b0e

PROC_DECLARE(0x6d369f8, internal_6d369f8, public_6d369f8);
extern "C" NAKED register_t __cdecl internal_6d369f8()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        and dword ptr ds : [esi+4], 0
        and dword ptr ds : [esi], 0
        mov ecx, eax
        and ecx, 0xFFFF
        mov dword ptr ds : [esi+8], eax
        jbe public_6d36b09
        cmp ecx, 5
        ja public_6d36b09
        test eax, 0xFFF00000
        jne public_6d36b09
        mov ecx, dword ptr ss : [esp+8]
        push ebx
        and eax, 0x80000
        push ecx
        mov dword ptr ds : [ecx+0x40], eax
        call public_6d3be35
        test eax, eax
        pop ecx
        mov dword ptr ds : [esi+4], eax
        je public_6d36adf
        push dword ptr ss : [esp+0x10]
        call public_6d3be35
        test eax, eax
        pop ecx
        mov dword ptr ds : [esi], eax
        je public_6d36adf
        mov ecx, dword ptr ds : [esi+4]
        push eax
        call public_6d37d51
        mov ebx, eax
        test ebx, ebx
        jl public_6d36ae4
        mov ecx, esi
        call public_6d34b5b
        test eax, eax
        jge public_6d36adb
        mov ecx, esi
        call public_6d34c93
        test eax, eax
        jge public_6d36adb
        mov ecx, esi
        call public_6d34d84
        test eax, eax
        jge public_6d36adb
        mov ecx, esi
        call public_6d34f86
        test eax, eax
        jge public_6d36adb
        mov ecx, esi
        call public_6d3518a
        test eax, eax
        jge public_6d36adb
        mov ecx, esi
        call public_6d355ad
        test eax, eax
        jge public_6d36adb
        mov ecx, esi
        call public_6d35b3f
        test eax, eax
        jge public_6d36adb
        mov ecx, esi
        call public_6d35f25
        test eax, eax
        jge public_6d36adb
        mov ecx, esi
        call public_6d36656
        test eax, eax
        jge public_6d36adb
        mov ecx, esi
        call public_6d33584
        test eax, eax
        jl public_6d36adf
        public_6d36adb : nop
        xor ebx, ebx
        jmp public_6d36ae4
        public_6d36adf : nop
        mov ebx, 0x80004005
        public_6d36ae4 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6d36af5
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        and dword ptr ds : [esi+4], 0
        public_6d36af5 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6d36b04
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        and dword ptr ds : [esi], 0
        public_6d36b04 : nop
        mov eax, ebx
        pop ebx
        jmp public_6d36b0e
        public_6d36b09 : nop
        mov eax, 0x8876086C
        public_6d36b0e : nop
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6d369f8)
    }
}

#undef public_6d36adb
#undef public_6d36adf
#undef public_6d36ae4
#undef public_6d36af5
#undef public_6d36b04
#undef public_6d36b09
#undef public_6d36b0e
