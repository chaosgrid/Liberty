#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eaed70);
CLANG_FORWARD_PROC_SYMBOL(public_6eb23d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2400);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2570);
CLANG_FORWARD_PROC_SYMBOL(public_6eb25a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb3b03 _public_6eb3b03
#define public_6eb3b07 _public_6eb3b07
#define public_6eb3b28 _public_6eb3b28
#define public_6eb3b30 _public_6eb3b30
#define public_6eb3b72 _public_6eb3b72
#define public_6eb3bc8 _public_6eb3bc8
#define public_6eb3bef _public_6eb3bef
#define public_6eb3c14 _public_6eb3c14
#define public_6eb3c17 _public_6eb3c17
#define public_6eb3c34 _public_6eb3c34
#define public_6eb3c4c _public_6eb3c4c
#define public_6eb3c5f _public_6eb3c5f
#define public_6eb3cba _public_6eb3cba
#define public_6eb3cc8 _public_6eb3cc8
#define public_6eb3cd0 _public_6eb3cd0
#define public_6eb3d00 _public_6eb3d00
#define public_6eb3d32 _public_6eb3d32

PROC_DECLARE(0x6eb3ae0, internal_6eb3ae0, public_6eb3ae0);
extern "C" NAKED register_t __cdecl internal_6eb3ae0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        sub esp, 0x2C
        cmp eax, ecx
        je public_6eb3d32
        mov ecx, dword ptr ss : [esp+0x38]
        push ebx
        push ebp
        push esi
        push edi
        lea ebp, ds:[eax+8]
        lea ebx, ds:[ecx+8]
        jmp public_6eb3b07
        public_6eb3b03 : nop
        mov eax, dword ptr ss : [esp+0x40]
        public_6eb3b07 : nop
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [eax], edx
        lea ecx, ds:[ebx-4]
        lea edx, ss:[ebp-4]
        cmp ecx, edx
        je public_6eb3c17
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        jne public_6eb3b28
        xor edi, edi
        jmp public_6eb3b30
        public_6eb3b28 : nop
        mov edi, dword ptr ss : [ebp+4]
        sub edi, eax
        sar edi, 2
        public_6eb3b30 : nop
        lea esi, ds:[ebx-4]
        mov ecx, esi
        call public_6fa3db0
        cmp edi, eax
        ja public_6eb3b72
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ss : [ebp+4]
        push ecx
        push eax
        mov eax, dword ptr ss : [ebp]
        push eax
        call public_6f6a640
        mov edx, dword ptr ds : [ebx+4]
        add esp, 0xC
        push edx
        push eax
        mov ecx, esi
        call public_6ea1490
        lea ecx, ss:[ebp-4]
        call public_6fa3db0
        mov ecx, dword ptr ds : [ebx]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [ebx+4], edx
        jmp public_6eb3c17
        public_6eb3b72 : nop
        lea ecx, ss:[ebp-4]
        call public_6fa3db0
        mov ecx, esi
        mov edi, eax
        call public_6eb6b30
        cmp edi, eax
        ja public_6eb3bc8
        mov edi, dword ptr ss : [ebp]
        mov ecx, esi
        call public_6fa3db0
        mov ecx, dword ptr ds : [ebx]
        lea eax, ds:[edi+eax*4]
        push ecx
        push eax
        push edi
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f6a640
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        push edx
        push eax
        push ecx
        mov ecx, esi
        call public_6eed270
        lea ecx, ss:[ebp-4]
        call public_6fa3db0
        mov edx, dword ptr ds : [ebx]
        lea eax, ds:[edx+eax*4]
        jmp public_6eb3c14
        public_6eb3bc8 : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ebx]
        push ecx
        push edx
        mov ecx, esi
        call public_6ea1490
        mov eax, dword ptr ds : [ebx]
        push eax
        call public_6fa8fe0
        add esp, 4
        lea ecx, ss:[ebp-4]
        call public_6fa3db0
        test eax, eax
        jge public_6eb3bef
        xor eax, eax
        public_6eb3bef : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ss : [ebp]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6eed270
        mov dword ptr ds : [ebx+8], eax
        public_6eb3c14 : nop
        mov dword ptr ds : [ebx+4], eax
        public_6eb3c17 : nop
        mov edx, dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ds : [ebx+0x10]
        push edx
        lea esi, ds:[ebx+0xC]
        push eax
        mov ecx, esi
        call public_6eb25a0
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        jne public_6eb3c34
        xor edi, edi
        jmp public_6eb3c4c
        public_6eb3c34 : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov edi, edx
        public_6eb3c4c : nop
        mov ecx, esi
        call public_6eb2570
        cmp eax, edi
        jae public_6eb3cba
        test edi, edi
        mov eax, edi
        jge public_6eb3c5f
        xor eax, eax
        public_6eb3c5f : nop
        lea edx, ds:[eax+eax*4]
        shl edx, 3
        push edx
        call public_6fa912a
        mov ecx, dword ptr ds : [ebx+0x10]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ds : [ebx+0x14]
        push esi
        push eax
        push ecx
        lea ecx, ds:[ebx+0xC]
        call public_6eb2400
        mov edx, dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ds : [ebx+0x10]
        push edx
        push eax
        lea ecx, ds:[ebx+0xC]
        call public_6ea1490
        mov ecx, dword ptr ds : [ebx+0x10]
        push ecx
        call public_6fa8fe0
        lea edx, ds:[edi+edi*4]
        lea eax, ds:[esi+edx*8]
        add esp, 4
        lea ecx, ds:[ebx+0xC]
        mov dword ptr ds : [ebx+0x18], eax
        call public_6eb23d0
        lea ecx, ds:[eax+eax*4]
        lea edx, ds:[esi+ecx*8]
        mov dword ptr ds : [ebx+0x14], edx
        mov dword ptr ds : [ebx+0x10], esi
        public_6eb3cba : nop
        mov esi, dword ptr ss : [ebp+0x10]
        cmp esi, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [esp+0x10], esi
        je public_6eb3d00
        jmp public_6eb3cd0
        public_6eb3cc8 : nop
        mov esi, dword ptr ss : [esp+0x10]
        lea esp, ss:[esp]
        public_6eb3cd0 : nop
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, 0xA
        lea edi, ss:[esp+0x18]
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x14]
        push 1
        push ecx
        lea ecx, ds:[ebx+0xC]
        call public_6eaed70
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add eax, 0x28
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6eb3cc8
        public_6eb3d00 : nop
        mov eax, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [ebp+0x1C]
        mov ecx, dword ptr ss : [esp+0x44]
        add eax, 0x28
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ss : [esp+0x40]
        add eax, 0x28
        mov dword ptr ds : [ebx+0x1C], edx
        add ebx, 0x28
        add ebp, 0x28
        cmp eax, ecx
        mov dword ptr ss : [esp+0x40], eax
        jne public_6eb3b03
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6eb3d32 : nop
        mov eax, dword ptr ss : [esp+0x38]
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x6eb3ae0)
    }
}

#undef public_6eb3b03
#undef public_6eb3b07
#undef public_6eb3b28
#undef public_6eb3b30
#undef public_6eb3b72
#undef public_6eb3bc8
#undef public_6eb3bef
#undef public_6eb3c14
#undef public_6eb3c17
#undef public_6eb3c34
#undef public_6eb3c4c
#undef public_6eb3c5f
#undef public_6eb3cba
#undef public_6eb3cc8
#undef public_6eb3cd0
#undef public_6eb3d00
#undef public_6eb3d32
