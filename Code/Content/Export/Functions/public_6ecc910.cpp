#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ecc947 _public_6ecc947
#define public_6ecc987 _public_6ecc987
#define public_6ecc98c _public_6ecc98c
#define public_6ecc994 _public_6ecc994
#define public_6ecc999 _public_6ecc999
#define public_6ecc9a5 _public_6ecc9a5
#define public_6ecc9c2 _public_6ecc9c2
#define public_6ecc9d6 _public_6ecc9d6
#define public_6ecca29 _public_6ecca29
#define public_6ecca31 _public_6ecca31
#define public_6ecca48 _public_6ecca48
#define public_6ecca87 _public_6ecca87
#define public_6ecca96 _public_6ecca96
#define public_6eccab0 _public_6eccab0
#define public_6eccabf _public_6eccabf
#define public_6eccac6 _public_6eccac6
#define public_6eccad3 _public_6eccad3
#define public_6eccad7 _public_6eccad7
#define public_6eccaee _public_6eccaee

PROC_DECLARE(0x6ecc910, internal_6ecc910, public_6ecc910);
extern "C" NAKED register_t __cdecl internal_6ecc910()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, ecx
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_6fb3040]
        mov ebx, 1
        push ebx
        mov ecx, ebp
        mov byte ptr ds : [esi+0xC], al
        mov dword ptr ss : [esp+0x14], ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6eccaee
        add esi, 0x10
        push edi
        public_6ecc947 : nop
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        add esp, 4
        cmp ecx, 1
        mov edi, eax
        jae public_6ecca48
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6ecc987
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6ecc98c
        public_6ecc987 : nop
        mov ecx, 1
        public_6ecc98c : nop
        test edx, edx
        jne public_6ecc994
        xor eax, eax
        jmp public_6ecc999
        public_6ecc994 : nop
        sub eax, edx
        sar eax, 2
        public_6ecc999 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6ecc9a5
        xor eax, eax
        public_6ecc9a5 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x18], eax
        mov ebx, eax
        je public_6ecc9d6
        public_6ecc9c2 : nop
        push ebp
        push ebx
        call public_6eb6740
        add ebp, 4
        add esp, 8
        add ebx, 4
        cmp ebp, edi
        jne public_6ecc9c2
        public_6ecc9d6 : nop
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ebx
        mov ecx, esi
        call public_6f38a50
        mov ecx, dword ptr ds : [esi+8]
        add ebx, 4
        push ebx
        push ecx
        push edi
        mov ecx, esi
        call public_6eed270
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        lea ecx, ds:[eax+edx*4]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6ecca29
        xor edx, edx
        jmp public_6ecca31
        public_6ecca29 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 2
        public_6ecca31 : nop
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ss : [esp+0x14]
        lea edx, ds:[eax+edx*4+4]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], eax
        jmp public_6eccad7
        public_6ecca48 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6ecca96
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6eed270
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x10]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6f38a50
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6eccad3
        public_6ecca87 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6ecca87
        jmp public_6eccad3
        public_6ecca96 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6eccabf
        nop 
        lea esp, ss:[esp]
        public_6eccab0 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6eccab0
        public_6eccabf : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_6eccad3
        public_6eccac6 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_6eccac6
        public_6eccad3 : nop
        add dword ptr ds : [esi+8], 4
        public_6eccad7 : nop
        inc ebx
        push ebx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6ecc947
        pop edi
        public_6eccaee : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6ecc910)
    }
}

#undef public_6ecc947
#undef public_6ecc987
#undef public_6ecc98c
#undef public_6ecc994
#undef public_6ecc999
#undef public_6ecc9a5
#undef public_6ecc9c2
#undef public_6ecc9d6
#undef public_6ecca29
#undef public_6ecca31
#undef public_6ecca48
#undef public_6ecca87
#undef public_6ecca96
#undef public_6eccab0
#undef public_6eccabf
#undef public_6eccac6
#undef public_6eccad3
#undef public_6eccad7
#undef public_6eccaee
