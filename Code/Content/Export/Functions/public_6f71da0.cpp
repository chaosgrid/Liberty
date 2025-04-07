#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a50);
CLANG_FORWARD_PROC_SYMBOL(public_6f71da0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f71dea _public_6f71dea
#define public_6f71def _public_6f71def
#define public_6f71df7 _public_6f71df7
#define public_6f71dfc _public_6f71dfc
#define public_6f71e08 _public_6f71e08
#define public_6f71e27 _public_6f71e27
#define public_6f71e3b _public_6f71e3b
#define public_6f71ea0 _public_6f71ea0
#define public_6f71eba _public_6f71eba
#define public_6f71f00 _public_6f71f00
#define public_6f71f1e _public_6f71f1e
#define public_6f71f33 _public_6f71f33
#define public_6f71f42 _public_6f71f42
#define public_6f71f50 _public_6f71f50
#define public_6f71f5d _public_6f71f5d

PROC_DECLARE(0x6f71da0, internal_6f71da0, public_6f71da0);
extern "C" NAKED register_t __cdecl internal_6f71da0()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0x10]
        lea ecx, ds:[edi+0x10]
        call dword ptr ds : [public_6fb3130]
        mov ecx, dword ptr ds : [esi+0x40]
        add esi, 0x34
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov edi, eax
        jae public_6f71eba
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6f71dea
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6f71def
        public_6f71dea : nop
        mov ecx, 1
        public_6f71def : nop
        test edx, edx
        jne public_6f71df7
        xor eax, eax
        jmp public_6f71dfc
        public_6f71df7 : nop
        sub eax, edx
        sar eax, 2
        public_6f71dfc : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0xC], eax
        jge public_6f71e08
        xor eax, eax
        public_6f71e08 : nop
        push ebx
        lea edx, ds:[eax*4]
        push ebp
        push edx
        call public_6fa912a
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebx, eax
        je public_6f71e3b
        public_6f71e27 : nop
        push ebp
        push ebx
        call public_6eb6740
        add ebp, 4
        add esp, 8
        add ebx, 4
        cmp ebp, edi
        jne public_6f71e27
        public_6f71e3b : nop
        lea eax, ss:[esp+0x1C]
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
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        add esp, 4
        lea ecx, ds:[edx+eax*4]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        pop ebp
        mov dword ptr ds : [esi+0xC], ecx
        pop ebx
        jne public_6f71ea0
        xor ecx, ecx
        lea eax, ds:[edx+ecx*4+4]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 4
        public_6f71ea0 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        lea eax, ds:[edx+ecx*4+4]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 4
        public_6f71eba : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6f71f1e
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6eed270
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x14]
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
        je public_6f71f5d
        lea esp, ss:[esp]
        public_6f71f00 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6f71f00
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 4
        public_6f71f1e : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6f71f42
        public_6f71f33 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6f71f33
        public_6f71f42 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_6f71f5d
        nop 
        lea esp, ss:[esp]
        public_6f71f50 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6f71f50
        public_6f71f5d : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f71da0)
    }
}

#undef public_6f71dea
#undef public_6f71def
#undef public_6f71df7
#undef public_6f71dfc
#undef public_6f71e08
#undef public_6f71e27
#undef public_6f71e3b
#undef public_6f71ea0
#undef public_6f71eba
#undef public_6f71f00
#undef public_6f71f1e
#undef public_6f71f33
#undef public_6f71f42
#undef public_6f71f50
#undef public_6f71f5d
