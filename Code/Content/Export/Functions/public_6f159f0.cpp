#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f159f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f683b0);

#define public_6f15a38 _public_6f15a38
#define public_6f15a44 _public_6f15a44
#define public_6f15a50 _public_6f15a50
#define public_6f15a70 _public_6f15a70
#define public_6f15a74 _public_6f15a74
#define public_6f15a79 _public_6f15a79
#define public_6f15a81 _public_6f15a81
#define public_6f15a92 _public_6f15a92
#define public_6f15a95 _public_6f15a95
#define public_6f15ad2 _public_6f15ad2

PROC_DECLARE(0x6f159f0, internal_6f159f0, public_6f159f0);
extern "C" NAKED register_t __cdecl internal_6f159f0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        push esi
        lea eax, ds:[ebx+0xC]
        xor esi, esi
        push eax
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0xC], esi
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f15ad2
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f15ad2
        mov edx, dword ptr ds : [ebx+0xC8]
        push ebp
        push edi
        mov edi, dword ptr ds : [edx]
        cmp edi, edx
        je public_6f15a95
        mov eax, dword ptr ss : [esp+0x1C]
        lea ebp, ds:[eax+4]
        public_6f15a38 : nop
        test ebp, ebp
        jne public_6f15a44
        mov eax, dword ptr ds : [edi+0x3F0]
        jmp public_6f15a81
        public_6f15a44 : nop
        mov esi, ebp
        lea eax, ds:[edi+0x3F4]
        lea esp, ss:[esp]
        public_6f15a50 : nop
        mov bl, byte ptr ds : [eax]
        mov cl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_6f15a74
        test cl, cl
        je public_6f15a70
        mov bl, byte ptr ds : [eax+1]
        mov cl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_6f15a74
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f15a50
        public_6f15a70 : nop
        xor eax, eax
        jmp public_6f15a79
        public_6f15a74 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f15a79 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+0x14]
        public_6f15a81 : nop
        test eax, eax
        sete al
        test al, al
        jne public_6f15a92
        mov edi, dword ptr ds : [edi]
        cmp edi, edx
        jne public_6f15a38
        jmp public_6f15a95
        public_6f15a92 : nop
        mov esi, dword ptr ds : [edi+8]
        public_6f15a95 : nop
        test esi, 0x3FFFFFFF
        pop edi
        pop ebp
        jne public_6f15ad2
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, 4
        push ecx
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        mov esi, eax
        call public_6f478c0
        push eax
        push esi
        call public_6f683b0
        add esp, 8
        test al, al
        jne public_6f15ad2
        pop esi
        xor eax, eax
        pop ebx
        add esp, 8
        ret 4
        public_6f15ad2 : nop
        mov eax, esi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f159f0)
    }
}

#undef public_6f15a38
#undef public_6f15a44
#undef public_6f15a50
#undef public_6f15a70
#undef public_6f15a74
#undef public_6f15a79
#undef public_6f15a81
#undef public_6f15a92
#undef public_6f15a95
#undef public_6f15ad2
