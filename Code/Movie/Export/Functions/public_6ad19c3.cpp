#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad19c3);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5895);
CLANG_FORWARD_PROC_SYMBOL(public_6ad596d);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5b5d);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5ba1);

#define public_6ad19fb _public_6ad19fb
#define public_6ad1a23 _public_6ad1a23
#define public_6ad1a2e _public_6ad1a2e
#define public_6ad1a35 _public_6ad1a35
#define public_6ad1a65 _public_6ad1a65
#define public_6ad1a83 _public_6ad1a83
#define public_6ad1a88 _public_6ad1a88
#define public_6ad1a9b _public_6ad1a9b
#define public_6ad1aa5 _public_6ad1aa5
#define public_6ad1ab9 _public_6ad1ab9
#define public_6ad1ac5 _public_6ad1ac5
#define public_6ad1acf _public_6ad1acf
#define public_6ad1ad4 _public_6ad1ad4
#define public_6ad1ad7 _public_6ad1ad7

PROC_DECLARE(0x6ad19c3, internal_6ad19c3, public_6ad19c3);
extern "C" NAKED register_t __cdecl internal_6ad19c3()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [esi+0xC]
        mov ebx, dword ptr ds : [esi+0x10]
        test al, 0x82
        je public_6ad1acf
        test al, 0x40
        jne public_6ad1acf
        test al, 1
        je public_6ad19fb
        and dword ptr ds : [esi+4], 0
        test al, 0x10
        je public_6ad1acf
        mov ecx, dword ptr ds : [esi+8]
        and al, 0xFE
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [esi+0xC], eax
        public_6ad19fb : nop
        mov eax, dword ptr ds : [esi+0xC]
        and dword ptr ds : [esi+4], 0
        and dword ptr ss : [ebp+0xC], 0
        and al, 0xEF
        or al, 2
        test ax, 0x10C
        mov dword ptr ds : [esi+0xC], eax
        jne public_6ad1a35
        cmp esi, offset public_6adfd30
        je public_6ad1a23
        cmp esi, offset public_6adfd50
        jne public_6ad1a2e
        public_6ad1a23 : nop
        push ebx
        call public_6ad5ba1
        test eax, eax
        pop ecx
        jne public_6ad1a35
        public_6ad1a2e : nop
        push esi
        call public_6ad5b5d
        pop ecx
        public_6ad1a35 : nop
        test word ptr ds : [esi+0xC], 0x108
        push edi
        je public_6ad1aa5
        mov eax, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi]
        sub edi, eax
        lea ecx, ds:[eax+1]
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ds : [esi+0x18]
        dec ecx
        test edi, edi
        mov dword ptr ds : [esi+4], ecx
        jle public_6ad1a65
        push edi
        push eax
        push ebx
        call public_6ad596d
        add esp, 0xC
        mov dword ptr ss : [ebp+0xC], eax
        jmp public_6ad1a9b
        public_6ad1a65 : nop
        cmp ebx, 0xFFFFFFFF
        je public_6ad1a83
        mov ecx, ebx
        mov eax, ebx
        sar ecx, 5
        and eax, 0x1F
        mov ecx, dword ptr ds : [ecx*4+public_6ae2480]
        lea eax, ds:[eax+eax*8]
        lea eax, ds:[ecx+eax*4]
        jmp public_6ad1a88
        public_6ad1a83 : nop
        mov eax, offset public_6addac8
        public_6ad1a88 : nop
        test byte ptr ds : [eax+4], 0x20
        je public_6ad1a9b
        push 2
        push 0
        push ebx
        call public_6ad5895
        add esp, 0xC
        public_6ad1a9b : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ss : [ebp+8]
        mov byte ptr ds : [eax], cl
        jmp public_6ad1ab9
        public_6ad1aa5 : nop
        push 1
        lea eax, ss:[ebp+8]
        pop edi
        push edi
        push eax
        push ebx
        call public_6ad596d
        add esp, 0xC
        mov dword ptr ss : [ebp+0xC], eax
        public_6ad1ab9 : nop
        cmp dword ptr ss : [ebp+0xC], edi
        pop edi
        je public_6ad1ac5
        or dword ptr ds : [esi+0xC], 0x20
        jmp public_6ad1ad4
        public_6ad1ac5 : nop
        mov eax, dword ptr ss : [ebp+8]
        and eax, 0xFF
        jmp public_6ad1ad7
        public_6ad1acf : nop
        or al, 0x20
        mov dword ptr ds : [esi+0xC], eax
        public_6ad1ad4 : nop
        or eax, 0xFFFFFFFF
        public_6ad1ad7 : nop
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ad19c3)
    }
}

#undef public_6ad19fb
#undef public_6ad1a23
#undef public_6ad1a2e
#undef public_6ad1a35
#undef public_6ad1a65
#undef public_6ad1a83
#undef public_6ad1a88
#undef public_6ad1a9b
#undef public_6ad1aa5
#undef public_6ad1ab9
#undef public_6ad1ac5
#undef public_6ad1acf
#undef public_6ad1ad4
#undef public_6ad1ad7
