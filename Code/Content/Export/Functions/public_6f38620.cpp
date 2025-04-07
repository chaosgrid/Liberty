#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f310f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f38140);
CLANG_FORWARD_PROC_SYMBOL(public_6f38620);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a80);
CLANG_FORWARD_PROC_SYMBOL(public_6f38ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f38af0);
CLANG_FORWARD_PROC_SYMBOL(public_6f38b50);
CLANG_FORWARD_PROC_SYMBOL(public_6f38cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f3868b _public_6f3868b
#define public_6f38690 _public_6f38690
#define public_6f38698 _public_6f38698
#define public_6f386ab _public_6f386ab
#define public_6f386b8 _public_6f386b8
#define public_6f386d4 _public_6f386d4
#define public_6f386e8 _public_6f386e8
#define public_6f3874b _public_6f3874b
#define public_6f387af _public_6f387af
#define public_6f387dc _public_6f387dc
#define public_6f387e0 _public_6f387e0

PROC_DECLARE(0x6f38620, internal_6f38620, public_6f38620);
extern "C" NAKED register_t __cdecl internal_6f38620()
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
        mov eax, 0x66666667
        imul ecx
        mov ecx, dword ptr ds : [esi+8]
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6f3874b
        test ebx, ebx
        je public_6f3868b
        mov edx, ecx
        sub edx, ebx
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov ebp, edx
        ja public_6f38690
        public_6f3868b : nop
        mov ebp, 1
        public_6f38690 : nop
        test ebx, ebx
        jne public_6f38698
        xor edx, edx
        jmp public_6f386ab
        public_6f38698 : nop
        sub ecx, ebx
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f386ab : nop
        lea eax, ds:[edx+ebp]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6f386b8
        xor eax, eax
        public_6f386b8 : nop
        lea edx, ds:[eax+eax*4]
        shl edx, 2
        push edx
        call public_6fa912a
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_6f386e8
        public_6f386d4 : nop
        push ebx
        push ebp
        call public_6f310f0
        add ebx, 0x14
        add esp, 8
        add ebp, 0x14
        cmp ebx, edi
        jne public_6f386d4
        public_6f386e8 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        call public_6f310f0
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x14
        push ebp
        push ecx
        push edi
        mov ecx, esi
        call public_6f38ab0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6f38140
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        lea edx, ds:[eax+eax*4]
        lea eax, ds:[edi+edx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6f38a80
        inc eax
        lea ecx, ds:[eax+eax*4]
        lea edx, ds:[edi+ecx*4]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], edi
        jmp public_6f387e0
        public_6f3874b : nop
        mov edx, ecx
        sub edx, edi
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6f387af
        lea edx, ds:[edi+0x14]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_6f38ab0
        mov ebx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x66666667
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
        call public_6f38af0
        mov edx, dword ptr ds : [esi+8]
        push ebp
        push edx
        push edi
        call public_6f38b50
        add esp, 0xC
        jmp public_6f387dc
        public_6f387af : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFEC
        push ecx
        mov ecx, esi
        call public_6f38ab0
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFFEC
        push eax
        push edi
        call public_6f38cf0
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        lea ecx, ds:[edi+0x14]
        push ecx
        push edi
        call public_6f38b50
        add esp, 0x18
        public_6f387dc : nop
        add dword ptr ds : [esi+8], 0x14
        public_6f387e0 : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        lea edx, ds:[eax+eax*4]
        mov eax, dword ptr ds : [esi+4]
        pop esi
        pop ebp
        lea eax, ds:[eax+edx*4]
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6f38620)
    }
}

#undef public_6f3868b
#undef public_6f38690
#undef public_6f38698
#undef public_6f386ab
#undef public_6f386b8
#undef public_6f386d4
#undef public_6f386e8
#undef public_6f3874b
#undef public_6f387af
#undef public_6f387dc
#undef public_6f387e0
