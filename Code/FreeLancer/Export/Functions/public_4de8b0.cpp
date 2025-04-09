#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de8b0);
CLANG_FORWARD_PROC_SYMBOL(public_4deb40);
CLANG_FORWARD_PROC_SYMBOL(public_4df3b0);
CLANG_FORWARD_PROC_SYMBOL(public_4df3f0);
CLANG_FORWARD_PROC_SYMBOL(public_4df420);
CLANG_FORWARD_PROC_SYMBOL(public_4df5b0);
CLANG_FORWARD_PROC_SYMBOL(public_4df750);
CLANG_FORWARD_PROC_SYMBOL(public_5756d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4de91b _public_4de91b
#define public_4de920 _public_4de920
#define public_4de928 _public_4de928
#define public_4de93b _public_4de93b
#define public_4de948 _public_4de948
#define public_4de964 _public_4de964
#define public_4de978 _public_4de978
#define public_4de9db _public_4de9db
#define public_4dea3f _public_4dea3f
#define public_4dea6c _public_4dea6c
#define public_4dea70 _public_4dea70

PROC_DECLARE(0x4de8b0, internal_4de8b0, public_4de8b0);
extern "C" NAKED register_t __cdecl internal_4de8b0()
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
        jae public_4de9db
        test ebx, ebx
        je public_4de91b
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
        ja public_4de920
        public_4de91b : nop
        mov ebp, 1
        public_4de920 : nop
        test ebx, ebx
        jne public_4de928
        xor edx, edx
        jmp public_4de93b
        public_4de928 : nop
        sub ecx, ebx
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_4de93b : nop
        lea eax, ds:[edx+ebp]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_4de948
        xor eax, eax
        public_4de948 : nop
        lea edx, ds:[eax+eax*8]
        shl edx, 2
        push edx
        call public_5b7e84
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_4de978
        public_4de964 : nop
        push ebx
        push ebp
        call public_4df750
        add ebx, 0x24
        add esp, 8
        add ebp, 0x24
        cmp ebx, edi
        jne public_4de964
        public_4de978 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        call public_4df750
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x24
        push ebp
        push ecx
        push edi
        mov ecx, esi
        call public_4df3b0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_4deb40
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
        jmp public_4dea70
        public_4de9db : nop
        mov edx, ecx
        sub edx, edi
        mov eax, 0x38E38E39
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_4dea3f
        lea edx, ds:[edi+0x24]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_4df3b0
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
        call public_4df3f0
        mov edx, dword ptr ds : [esi+8]
        push ebp
        push edx
        push edi
        call public_4df420
        add esp, 0xC
        jmp public_4dea6c
        public_4dea3f : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFDC
        push ecx
        mov ecx, esi
        call public_4df3b0
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFFDC
        push eax
        push edi
        call public_4df5b0
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        lea ecx, ds:[edi+0x24]
        push ecx
        push edi
        call public_4df420
        add esp, 0x18
        public_4dea6c : nop
        add dword ptr ds : [esi+8], 0x24
        public_4dea70 : nop
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
        UNREACHABLE_TRAP(0x4de8b0)
    }
}

#undef public_4de91b
#undef public_4de920
#undef public_4de928
#undef public_4de93b
#undef public_4de948
#undef public_4de964
#undef public_4de978
#undef public_4de9db
#undef public_4dea3f
#undef public_4dea6c
#undef public_4dea70
