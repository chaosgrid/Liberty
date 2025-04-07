#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a5e0);
CLANG_FORWARD_PROC_SYMBOL(public_626b560);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62664a4 _public_62664a4
#define public_62664b8 _public_62664b8
#define public_62664da _public_62664da
#define public_62664e8 _public_62664e8
#define public_62664f3 _public_62664f3
#define public_62664fb _public_62664fb
#define public_6266507 _public_6266507
#define public_6266528 _public_6266528
#define public_626653c _public_626653c
#define public_626657a _public_626657a
#define public_6266582 _public_6266582
#define public_62665ac _public_62665ac

PROC_DECLARE(0x6266490, internal_6266490, public_6266490);
extern "C" NAKED register_t __cdecl internal_6266490()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        mov eax, ecx
        cmp eax, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        je public_62664b8
        public_62664a4 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], edx
        add eax, 8
        add edi, 8
        cmp eax, ecx
        jne public_62664a4
        public_62664b8 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        push edi
        mov ecx, esi
        call public_628f050
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], edi
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_62664da
        xor edx, edx
        mov dword ptr ss : [esp+0xC], edx
        jmp public_62664e8
        public_62664da : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ss : [esp+0xC], eax
        mov edx, eax
        public_62664e8 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_62664f3
        xor eax, eax
        jmp public_62664fb
        public_62664f3 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 3
        public_62664fb : nop
        cmp eax, edx
        jae public_626657a
        test edx, edx
        mov eax, edx
        jge public_6266507
        xor eax, eax
        public_6266507 : nop
        lea ecx, ds:[eax*8]
        push ebp
        push ecx
        call public_6391d9c
        mov ebp, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x14], eax
        mov ebx, eax
        je public_626653c
        public_6266528 : nop
        push edi
        push ebx
        call public_62bee40
        add edi, 8
        add esp, 8
        add ebx, 8
        cmp edi, ebp
        jne public_6266528
        public_626653c : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_628f050
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        lea eax, ds:[edi+edx*8]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_626a5e0
        mov ebx, dword ptr ss : [esp+0x20]
        lea ecx, ds:[edi+eax*8]
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+4], edi
        pop ebp
        public_626657a : nop
        mov edi, dword ptr ds : [ebx+4]
        cmp edi, dword ptr ds : [ebx+8]
        je public_62665ac
        public_6266582 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], 0x3F800000
        call public_626b560
        mov eax, dword ptr ds : [ebx+8]
        add edi, 4
        cmp edi, eax
        jne public_6266582
        public_62665ac : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6266490)
    }
}

#undef public_62664a4
#undef public_62664b8
#undef public_62664da
#undef public_62664e8
#undef public_62664f3
#undef public_62664fb
#undef public_6266507
#undef public_6266528
#undef public_626653c
#undef public_626657a
#undef public_6266582
#undef public_62665ac
