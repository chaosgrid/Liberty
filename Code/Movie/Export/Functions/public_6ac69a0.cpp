#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3140);
CLANG_FORWARD_PROC_SYMBOL(public_6ac69a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7760);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7e60);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7f20);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8190);

#define public_6ac69e7 _public_6ac69e7
#define public_6ac6a20 _public_6ac6a20
#define public_6ac6a4d _public_6ac6a4d
#define public_6ac6a4f _public_6ac6a4f
#define public_6ac6a65 _public_6ac6a65
#define public_6ac6a77 _public_6ac6a77
#define public_6ac6a79 _public_6ac6a79
#define public_6ac6a88 _public_6ac6a88

PROC_DECLARE(0x6ac69a0, internal_6ac69a0, public_6ac69a0);
extern "C" NAKED register_t __cdecl internal_6ac69a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebp
        mov ecx, eax
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        shl ecx, 7
        mov esi, dword ptr ds : [edi]
        mov ebp, dword ptr ds : [edi+0x10]
        add ecx, eax
        test esi, esi
        lea edx, ds:[edi+ecx*4+0x114]
        mov dword ptr ss : [esp+0x18], edx
        je public_6ac6a88
        push ebx
        mov ebx, dword ptr ds : [edi+0x11158]
        test ebx, ebx
        lea eax, ds:[ebx+1]
        mov dword ptr ds : [edi+0x11158], eax
        je public_6ac69e7
        cmp ebx, 1
        je public_6ac69e7
        xor esi, esi
        jmp public_6ac6a65
        public_6ac69e7 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ebp
        push ecx
        call public_6ac7e60
        test eax, eax
        jne public_6ac6a65
        mov esi, dword ptr ss : [esp+0x1C]
        push ebp
        push esi
        call public_6ac7e60
        test eax, eax
        je public_6ac6a20
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        push ebp
        push esi
        push eax
        call public_6ac7f20
        mov esi, eax
        neg esi
        sbb esi, esi
        neg esi
        jmp public_6ac6a65
        public_6ac6a20 : nop
        mov ecx, dword ptr ss : [ebp]
        shl ebx, 9
        push ecx
        push 2
        lea ebx, ds:[ebx+edi+0x1115C]
        push ebx
        push esi
        call public_6ac3140
        test eax, eax
        je public_6ac6a4d
        push ebp
        push esi
        call public_6ac8190
        test eax, eax
        je public_6ac6a4d
        mov esi, 1
        jmp public_6ac6a4f
        public_6ac6a4d : nop
        xor esi, esi
        public_6ac6a4f : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        push edx
        push edi
        push eax
        push ecx
        push ebx
        call public_6ac7760
        public_6ac6a65 : nop
        mov eax, dword ptr ds : [edi]
        pop ebx
        test eax, eax
        je public_6ac6a77
        test esi, esi
        je public_6ac6a77
        mov eax, 1
        jmp public_6ac6a79
        public_6ac6a77 : nop
        xor eax, eax
        public_6ac6a79 : nop
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [edi+0x11158]
        dec eax
        mov dword ptr ds : [edi+0x11158], eax
        public_6ac6a88 : nop
        pop edi
        pop esi
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6ac69a0)
    }
}

#undef public_6ac69e7
#undef public_6ac6a20
#undef public_6ac6a4d
#undef public_6ac6a4f
#undef public_6ac6a65
#undef public_6ac6a77
#undef public_6ac6a79
#undef public_6ac6a88
