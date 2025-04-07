#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6ed6800);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ed6845 _public_6ed6845
#define public_6ed684a _public_6ed684a
#define public_6ed6852 _public_6ed6852
#define public_6ed6857 _public_6ed6857
#define public_6ed6863 _public_6ed6863
#define public_6ed6882 _public_6ed6882
#define public_6ed6896 _public_6ed6896
#define public_6ed68fb _public_6ed68fb
#define public_6ed6915 _public_6ed6915
#define public_6ed6954 _public_6ed6954
#define public_6ed6972 _public_6ed6972
#define public_6ed6987 _public_6ed6987
#define public_6ed6996 _public_6ed6996
#define public_6ed69a0 _public_6ed69a0
#define public_6ed69ad _public_6ed69ad

PROC_DECLARE(0x6ed6800, internal_6ed6800, public_6ed6800);
extern "C" NAKED register_t __cdecl internal_6ed6800()
{
    __asm
    {
        sub esp, 0xC
        push esi
        lea eax, ss:[esp+0x18]
        push edi
        push eax
        mov esi, ecx
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ds : [esi+0x20]
        add esi, 0x14
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        add esp, 4
        cmp ecx, 1
        mov edi, eax
        jae public_6ed6915
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6ed6845
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6ed684a
        public_6ed6845 : nop
        mov ecx, 1
        public_6ed684a : nop
        test edx, edx
        jne public_6ed6852
        xor eax, eax
        jmp public_6ed6857
        public_6ed6852 : nop
        sub eax, edx
        sar eax, 2
        public_6ed6857 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_6ed6863
        xor eax, eax
        public_6ed6863 : nop
        push ebx
        lea edx, ds:[eax*4]
        push ebp
        push edx
        call public_6fa912a
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x14], eax
        mov ebx, eax
        je public_6ed6896
        public_6ed6882 : nop
        push ebp
        push ebx
        call public_6eb6740
        add ebp, 4
        add esp, 8
        add ebx, 4
        cmp ebp, edi
        jne public_6ed6882
        public_6ed6896 : nop
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
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 4
        lea ecx, ds:[edx+eax*4]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        pop ebp
        mov dword ptr ds : [esi+0xC], ecx
        pop ebx
        jne public_6ed68fb
        xor ecx, ecx
        lea eax, ds:[edx+ecx*4+4]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 0xC
        ret 0x44
        public_6ed68fb : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        lea eax, ds:[edx+ecx*4+4]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 0xC
        ret 0x44
        public_6ed6915 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6ed6972
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6eed270
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+8]
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
        je public_6ed69ad
        public_6ed6954 : nop
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6ed6954
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 0xC
        ret 0x44
        public_6ed6972 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6ed6996
        public_6ed6987 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6ed6987
        public_6ed6996 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_6ed69ad
        nop 
        public_6ed69a0 : nop
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6ed69a0
        public_6ed69ad : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 0xC
        ret 0x44
        UNREACHABLE_TRAP(0x6ed6800)
    }
}

#undef public_6ed6845
#undef public_6ed684a
#undef public_6ed6852
#undef public_6ed6857
#undef public_6ed6863
#undef public_6ed6882
#undef public_6ed6896
#undef public_6ed68fb
#undef public_6ed6915
#undef public_6ed6954
#undef public_6ed6972
#undef public_6ed6987
#undef public_6ed6996
#undef public_6ed69a0
#undef public_6ed69ad
