#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead810);
CLANG_FORWARD_PROC_SYMBOL(public_6f699e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c830);
CLANG_FORWARD_PROC_SYMBOL(public_6f7d080);
CLANG_FORWARD_PROC_SYMBOL(public_6f7d0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7db80);
CLANG_FORWARD_PROC_SYMBOL(public_6f7dda0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7dfd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7c86f _public_6f7c86f
#define public_6f7c874 _public_6f7c874
#define public_6f7c87c _public_6f7c87c
#define public_6f7c881 _public_6f7c881
#define public_6f7c88d _public_6f7c88d
#define public_6f7c8a6 _public_6f7c8a6
#define public_6f7c8ba _public_6f7c8ba
#define public_6f7c919 _public_6f7c919
#define public_6f7c961 _public_6f7c961
#define public_6f7c98c _public_6f7c98c
#define public_6f7c992 _public_6f7c992

PROC_DECLARE(0x6f7c830, internal_6f7c830, public_6f7c830);
extern "C" NAKED register_t __cdecl internal_6f7c830()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebx, edi
        sub ecx, eax
        sub ebx, edx
        sar ebx, 4
        sar ecx, 4
        cmp ecx, 1
        mov dword ptr ss : [esp+0x14], ebx
        jae public_6f7c919
        test edx, edx
        je public_6f7c86f
        mov ecx, eax
        sub ecx, edx
        sar ecx, 4
        cmp ecx, 1
        ja public_6f7c874
        public_6f7c86f : nop
        mov ecx, 1
        public_6f7c874 : nop
        test edx, edx
        jne public_6f7c87c
        xor eax, eax
        jmp public_6f7c881
        public_6f7c87c : nop
        sub eax, edx
        sar eax, 4
        public_6f7c881 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6f7c88d
        xor eax, eax
        public_6f7c88d : nop
        shl eax, 4
        push eax
        call public_6fa912a
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_6f7c8ba
        public_6f7c8a6 : nop
        push ebx
        push ebp
        call public_6f7dfd0
        add ebx, 0x10
        add esp, 8
        add ebp, 0x10
        cmp ebx, edi
        jne public_6f7c8a6
        public_6f7c8ba : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push ebp
        call public_6f7dfd0
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x10
        push ebp
        push eax
        push edi
        mov ecx, esi
        call public_6f7d080
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6f699e0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        shl eax, 4
        add eax, edi
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6ead810
        mov ebx, dword ptr ss : [esp+0x14]
        inc eax
        shl eax, 4
        add eax, edi
        mov dword ptr ds : [esi+4], edi
        jmp public_6f7c992
        public_6f7c919 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 4
        cmp ecx, 1
        mov ecx, esi
        jae public_6f7c961
        lea edx, ds:[edi+0x10]
        push edx
        push eax
        push edi
        call public_6f7d080
        mov eax, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 4
        push ebp
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_6f7d0c0
        mov eax, dword ptr ds : [esi+8]
        push ebp
        push eax
        push edi
        call public_6f7db80
        add esp, 0xC
        jmp public_6f7c98c
        public_6f7c961 : nop
        push eax
        push eax
        add eax, 0xFFFFFFF0
        push eax
        call public_6f7d080
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFFF0
        push eax
        push edi
        call public_6f7dda0
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        lea edx, ds:[edi+0x10]
        push edx
        push edi
        call public_6f7db80
        add esp, 0x18
        public_6f7c98c : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x10
        public_6f7c992 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], eax
        pop edi
        mov eax, ebx
        pop esi
        shl eax, 4
        pop ebp
        add eax, ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6f7c830)
    }
}

#undef public_6f7c86f
#undef public_6f7c874
#undef public_6f7c87c
#undef public_6f7c881
#undef public_6f7c88d
#undef public_6f7c8a6
#undef public_6f7c8ba
#undef public_6f7c919
#undef public_6f7c961
#undef public_6f7c98c
#undef public_6f7c992
