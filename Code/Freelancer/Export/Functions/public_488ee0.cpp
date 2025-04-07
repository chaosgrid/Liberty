#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_488ee0);
CLANG_FORWARD_PROC_SYMBOL(public_489160);
CLANG_FORWARD_PROC_SYMBOL(public_489190);
CLANG_FORWARD_PROC_SYMBOL(public_4891d0);
CLANG_FORWARD_PROC_SYMBOL(public_489410);
CLANG_FORWARD_PROC_SYMBOL(public_489620);
CLANG_FORWARD_PROC_SYMBOL(public_5756d0);
CLANG_FORWARD_PROC_SYMBOL(public_575970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_488f4b _public_488f4b
#define public_488f50 _public_488f50
#define public_488f58 _public_488f58
#define public_488f6b _public_488f6b
#define public_488f78 _public_488f78
#define public_488f94 _public_488f94
#define public_488fa8 _public_488fa8
#define public_48900b _public_48900b
#define public_48906f _public_48906f
#define public_48909c _public_48909c
#define public_4890a0 _public_4890a0

PROC_DECLARE(0x488ee0, internal_488ee0, public_488ee0);
extern "C" NAKED register_t __cdecl internal_488ee0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, edi
        sub ecx, ebx
        mov eax, 0x38E38E39
        imul ecx
        mov ecx, dword ptr ds : [esi+8]
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_48900b
        test ebx, ebx
        je public_488f4b
        mov edx, ecx
        sub edx, ebx
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov ebp, edx
        ja public_488f50
        public_488f4b : nop
        mov ebp, 1
        public_488f50 : nop
        test ebx, ebx
        jne public_488f58
        xor edx, edx
        jmp public_488f6b
        public_488f58 : nop
        sub ecx, ebx
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_488f6b : nop
        lea eax, ds:[edx+ebp]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_488f78
        xor eax, eax
        public_488f78 : nop
        lea edx, ds:[eax+eax*8]
        shl edx, 2
        push edx
        call public_5b7e84
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_488fa8
        public_488f94 : nop
        push ebx
        push ebp
        call public_489620
        add ebx, 0x24
        add esp, 8
        add ebp, 0x24
        cmp ebx, edi
        jne public_488f94
        public_488fa8 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        call public_489620
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x24
        push ebp
        push ecx
        push edi
        mov ecx, esi
        call public_489190
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_489160
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        lea edx, ds:[eax+eax*8]
        lea eax, ds:[edi+edx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_5756d0
        inc eax
        lea ecx, ds:[eax+eax*8]
        lea edx, ds:[edi+ecx*4]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], edi
        jmp public_4890a0
        public_48900b : nop
        mov edx, ecx
        sub edx, edi
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_48906f
        lea edx, ds:[edi+0x24]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_489190
        mov ebx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        push ebp
        mov ecx, 1
        sub ecx, edx
        push ecx
        push ebx
        mov ecx, esi
        call public_4891d0
        mov edx, dword ptr ds : [esi+8]
        push ebp
        push edx
        push edi
        call public_489410
        add esp, 0xC
        jmp public_48909c
        public_48906f : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFDC
        push ecx
        mov ecx, esi
        call public_489190
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFFDC
        push eax
        push edi
        call public_575970
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        lea ecx, ds:[edi+0x24]
        push ecx
        push edi
        call public_489410
        add esp, 0x18
        public_48909c : nop
        add dword ptr ds : [esi+8], 0x24
        public_4890a0 : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        lea edx, ds:[eax+eax*8]
        mov eax, dword ptr ds : [esi+4]
        pop esi
        pop ebp
        lea eax, ds:[eax+edx*4]
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x488ee0)
    }
}

#undef public_488f4b
#undef public_488f50
#undef public_488f58
#undef public_488f6b
#undef public_488f78
#undef public_488f94
#undef public_488fa8
#undef public_48900b
#undef public_48906f
#undef public_48909c
#undef public_4890a0
