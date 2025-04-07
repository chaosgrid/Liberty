#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262d50);
CLANG_FORWARD_PROC_SYMBOL(public_6282da0);
CLANG_FORWARD_PROC_SYMBOL(public_6282dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6288b30);
CLANG_FORWARD_PROC_SYMBOL(public_6288e60);
CLANG_FORWARD_PROC_SYMBOL(public_6289100);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_628f700);
CLANG_FORWARD_PROC_SYMBOL(public_62902d0);
CLANG_FORWARD_PROC_SYMBOL(public_62aee50);
CLANG_FORWARD_PROC_SYMBOL(public_62f0d70);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6288bfb _public_6288bfb
#define public_6288c62 _public_6288c62
#define public_6288c6a _public_6288c6a
#define public_6288c72 _public_6288c72
#define public_6288c84 _public_6288c84
#define public_6288c94 _public_6288c94
#define public_6288d1e _public_6288d1e
#define public_6288d77 _public_6288d77
#define public_6288d94 _public_6288d94
#define public_6288d9a _public_6288d9a
#define public_6288db3 _public_6288db3
#define public_6288db7 _public_6288db7
#define public_6288ddb _public_6288ddb
#define public_6288de2 _public_6288de2
#define public_6288dff _public_6288dff
#define public_6288e03 _public_6288e03
#define public_6288e09 _public_6288e09
#define public_6288e25 _public_6288e25
#define public_6288e4c _public_6288e4c

PROC_DECLARE(0x6288b30, internal_6288b30, public_6288b30);
extern "C" NAKED register_t __cdecl internal_6288b30()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x28]
        push esi
        push edi
        push ebp
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x68]
        mov edi, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x2C]
        push edi
        mov ecx, ebx
        call public_6262d50
        mov ecx, eax
        call public_62f0d70
        test eax, eax
        mov dword ptr ss : [esp+0x30], eax
        je public_6288bfb
        cmp byte ptr ds : [eax], 0
        jne public_6288bfb
        push 1
        call public_62aee50
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        add esp, 4
        mov ecx, ebx
        mov dword ptr ss : [esp+0x2C], eax
        call public_6262d50
        push eax
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, esi
        call dword ptr ds : [eax+0x4C]
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ebp
        push eax
        call dword ptr ds : [ecx+0x70]
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ebp
        push eax
        call dword ptr ds : [ecx+0x7C]
        mov eax, dword ptr ds : [esi+0x6C]
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ds:[esi+0x64]
        push 1
        push eax
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x2C], ebp
        mov byte ptr ss : [esp+0x30], 0
        call public_628f700
        mov ebx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x30]
        push ebx
        push ecx
        push esi
        call public_6289100
        push ebx
        push esi
        call public_6288e60
        add esp, 0x14
        jmp public_6288e09
        public_6288bfb : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        push eax
        call dword ptr ds : [ecx+0x7C]
        mov ecx, dword ptr ds : [ebx+0x6C]
        mov edx, dword ptr ds : [ebx+0x70]
        lea esi, ds:[ebx+0x64]
        sub edx, ecx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], ebp
        mov byte ptr ss : [esp+0x24], 0
        mov edi, ecx
        jae public_6288d1e
        mov ebx, dword ptr ds : [esi+4]
        test ebx, ebx
        je public_6288c62
        mov edx, ecx
        sub edx, ebx
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov dword ptr ss : [esp+0x30], edx
        ja public_6288c6a
        public_6288c62 : nop
        mov dword ptr ss : [esp+0x30], 1
        public_6288c6a : nop
        test ebx, ebx
        jne public_6288c72
        xor edx, edx
        jmp public_6288c84
        public_6288c72 : nop
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6288c84 : nop
        mov eax, dword ptr ss : [esp+0x30]
        add eax, edx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_6288c94
        xor eax, eax
        public_6288c94 : nop
        lea ecx, ds:[eax+eax*2]
        shl ecx, 2
        push ecx
        call public_6391d9c
        mov edx, dword ptr ds : [esi+4]
        add esp, 4
        mov ebx, eax
        push ebx
        push edi
        push edx
        mov ecx, esi
        call public_6282dc0
        lea ecx, ss:[esp+0x1C]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x3C], eax
        call public_62902d0
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [esi+8]
        add edx, 0xC
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_6282dc0
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_628f050
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ds:[eax+eax*2]
        lea edx, ds:[ebx+ecx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], edx
        call public_6282da0
        inc eax
        lea eax, ds:[eax+eax*2]
        lea ecx, ds:[ebx+eax*4]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+8], ecx
        jmp public_6288e03
        public_6288d1e : nop
        mov edx, ecx
        sub edx, edi
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6288d9a
        lea edx, ds:[edi+0xC]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_6282dc0
        mov ebx, dword ptr ds : [esi+8]
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, 1
        sub eax, edx
        push eax
        push ebx
        mov ecx, esi
        call public_62902d0
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6288d94
        public_6288d77 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x24]
        add edi, 0xC
        cmp edi, eax
        mov dword ptr ds : [ecx+8], edx
        jne public_6288d77
        public_6288d94 : nop
        mov ebx, dword ptr ss : [esp+0x2C]
        jmp public_6288dff
        public_6288d9a : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFF4
        push ecx
        mov ecx, esi
        call public_6282dc0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-0xC]
        cmp edi, eax
        je public_6288ddb
        jmp public_6288db7
        public_6288db3 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        public_6288db7 : nop
        sub eax, 0xC
        sub ecx, 0xC
        cmp eax, edi
        mov edx, eax
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], ebx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        jne public_6288db3
        mov ebx, dword ptr ss : [esp+0x2C]
        public_6288ddb : nop
        lea eax, ds:[edi+0xC]
        cmp edi, eax
        je public_6288dff
        public_6288de2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x24]
        add edi, 0xC
        cmp edi, eax
        mov dword ptr ds : [ecx+8], edx
        jne public_6288de2
        public_6288dff : nop
        add dword ptr ds : [esi+8], 0xC
        public_6288e03 : nop
        mov esi, ebx
        mov ebx, dword ptr ss : [esp+0x34]
        public_6288e09 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push ebp
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6288e4c
        public_6288e25 : nop
        push ebx
        push edi
        push esi
        call public_6288b30
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        push edi
        push 1
        push ebp
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jne public_6288e25
        public_6288e4c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6288b30)
    }
}

#undef public_6288bfb
#undef public_6288c62
#undef public_6288c6a
#undef public_6288c72
#undef public_6288c84
#undef public_6288c94
#undef public_6288d1e
#undef public_6288d77
#undef public_6288d94
#undef public_6288d9a
#undef public_6288db3
#undef public_6288db7
#undef public_6288ddb
#undef public_6288de2
#undef public_6288dff
#undef public_6288e03
#undef public_6288e09
#undef public_6288e25
#undef public_6288e4c
