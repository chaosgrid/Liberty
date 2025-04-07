#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8060);
CLANG_FORWARD_PROC_SYMBOL(public_6efae10);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a80);
CLANG_FORWARD_PROC_SYMBOL(public_6f7ade0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c010);
CLANG_FORWARD_PROC_SYMBOL(public_6f7d000);
CLANG_FORWARD_PROC_SYMBOL(public_6f7d810);
CLANG_FORWARD_PROC_SYMBOL(public_6f7d990);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7c07b _public_6f7c07b
#define public_6f7c080 _public_6f7c080
#define public_6f7c088 _public_6f7c088
#define public_6f7c09b _public_6f7c09b
#define public_6f7c0a8 _public_6f7c0a8
#define public_6f7c0c4 _public_6f7c0c4
#define public_6f7c0d8 _public_6f7c0d8
#define public_6f7c13b _public_6f7c13b
#define public_6f7c19f _public_6f7c19f
#define public_6f7c1cc _public_6f7c1cc
#define public_6f7c1d0 _public_6f7c1d0

PROC_DECLARE(0x6f7c010, internal_6f7c010, public_6f7c010);
extern "C" NAKED register_t __cdecl internal_6f7c010()
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
        jae public_6f7c13b
        test ebx, ebx
        je public_6f7c07b
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
        ja public_6f7c080
        public_6f7c07b : nop
        mov ebp, 1
        public_6f7c080 : nop
        test ebx, ebx
        jne public_6f7c088
        xor edx, edx
        jmp public_6f7c09b
        public_6f7c088 : nop
        sub ecx, ebx
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f7c09b : nop
        lea eax, ds:[edx+ebp]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6f7c0a8
        xor eax, eax
        public_6f7c0a8 : nop
        lea edx, ds:[eax+eax*4]
        shl edx, 2
        push edx
        call public_6fa912a
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_6f7c0d8
        public_6f7c0c4 : nop
        push ebx
        push ebp
        call public_6ef8060
        add ebx, 0x14
        add esp, 8
        add ebp, 0x14
        cmp ebx, edi
        jne public_6f7c0c4
        public_6f7c0d8 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        call public_6ef8060
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x14
        push ebp
        push ecx
        push edi
        mov ecx, esi
        call public_6f7ade0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6efae10
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
        jmp public_6f7c1d0
        public_6f7c13b : nop
        mov edx, ecx
        sub edx, edi
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6f7c19f
        lea edx, ds:[edi+0x14]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_6f7ade0
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
        call public_6f7d000
        mov edx, dword ptr ds : [esi+8]
        push ebp
        push edx
        push edi
        call public_6f7d810
        add esp, 0xC
        jmp public_6f7c1cc
        public_6f7c19f : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFEC
        push ecx
        mov ecx, esi
        call public_6f7ade0
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFFEC
        push eax
        push edi
        call public_6f7d990
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        lea ecx, ds:[edi+0x14]
        push ecx
        push edi
        call public_6f7d810
        add esp, 0x18
        public_6f7c1cc : nop
        add dword ptr ds : [esi+8], 0x14
        public_6f7c1d0 : nop
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
        UNREACHABLE_TRAP(0x6f7c010)
    }
}

#undef public_6f7c07b
#undef public_6f7c080
#undef public_6f7c088
#undef public_6f7c09b
#undef public_6f7c0a8
#undef public_6f7c0c4
#undef public_6f7c0d8
#undef public_6f7c13b
#undef public_6f7c19f
#undef public_6f7c1cc
#undef public_6f7c1d0
