#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a50);
CLANG_FORWARD_PROC_SYMBOL(public_6f71bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f71c1a _public_6f71c1a
#define public_6f71c1f _public_6f71c1f
#define public_6f71c27 _public_6f71c27
#define public_6f71c2c _public_6f71c2c
#define public_6f71c38 _public_6f71c38
#define public_6f71c57 _public_6f71c57
#define public_6f71c6b _public_6f71c6b
#define public_6f71cd0 _public_6f71cd0
#define public_6f71cea _public_6f71cea
#define public_6f71d30 _public_6f71d30
#define public_6f71d4e _public_6f71d4e
#define public_6f71d63 _public_6f71d63
#define public_6f71d72 _public_6f71d72
#define public_6f71d80 _public_6f71d80
#define public_6f71d8d _public_6f71d8d

PROC_DECLARE(0x6f71bd0, internal_6f71bd0, public_6f71bd0);
extern "C" NAKED register_t __cdecl internal_6f71bd0()
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
        mov ecx, dword ptr ds : [esi+0x50]
        add esi, 0x44
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov edi, eax
        jae public_6f71cea
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6f71c1a
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6f71c1f
        public_6f71c1a : nop
        mov ecx, 1
        public_6f71c1f : nop
        test edx, edx
        jne public_6f71c27
        xor eax, eax
        jmp public_6f71c2c
        public_6f71c27 : nop
        sub eax, edx
        sar eax, 2
        public_6f71c2c : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0xC], eax
        jge public_6f71c38
        xor eax, eax
        public_6f71c38 : nop
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
        je public_6f71c6b
        public_6f71c57 : nop
        push ebp
        push ebx
        call public_6eb6740
        add ebp, 4
        add esp, 8
        add ebx, 4
        cmp ebp, edi
        jne public_6f71c57
        public_6f71c6b : nop
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
        jne public_6f71cd0
        xor ecx, ecx
        lea eax, ds:[edx+ecx*4+4]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 4
        public_6f71cd0 : nop
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
        public_6f71cea : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6f71d4e
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
        je public_6f71d8d
        lea esp, ss:[esp]
        public_6f71d30 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6f71d30
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 4
        public_6f71d4e : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6f71d72
        public_6f71d63 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6f71d63
        public_6f71d72 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_6f71d8d
        nop 
        lea esp, ss:[esp]
        public_6f71d80 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6f71d80
        public_6f71d8d : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f71bd0)
    }
}

#undef public_6f71c1a
#undef public_6f71c1f
#undef public_6f71c27
#undef public_6f71c2c
#undef public_6f71c38
#undef public_6f71c57
#undef public_6f71c6b
#undef public_6f71cd0
#undef public_6f71cea
#undef public_6f71d30
#undef public_6f71d4e
#undef public_6f71d63
#undef public_6f71d72
#undef public_6f71d80
#undef public_6f71d8d
