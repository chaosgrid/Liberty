#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62baf00);
CLANG_FORWARD_PROC_SYMBOL(public_6316ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6316ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6316dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6316e20);
CLANG_FORWARD_PROC_SYMBOL(public_63190f0);
CLANG_FORWARD_PROC_SYMBOL(public_6319de0);
CLANG_FORWARD_PROC_SYMBOL(public_6319f30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6316b1f _public_6316b1f
#define public_6316b24 _public_6316b24
#define public_6316b2c _public_6316b2c
#define public_6316b31 _public_6316b31
#define public_6316b3d _public_6316b3d
#define public_6316b56 _public_6316b56
#define public_6316b6a _public_6316b6a
#define public_6316bc9 _public_6316bc9
#define public_6316c11 _public_6316c11
#define public_6316c3c _public_6316c3c
#define public_6316c42 _public_6316c42

PROC_DECLARE(0x6316ae0, internal_6316ae0, public_6316ae0);
extern "C" NAKED register_t __cdecl internal_6316ae0()
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
        jae public_6316bc9
        test edx, edx
        je public_6316b1f
        mov ecx, eax
        sub ecx, edx
        sar ecx, 4
        cmp ecx, 1
        ja public_6316b24
        public_6316b1f : nop
        mov ecx, 1
        public_6316b24 : nop
        test edx, edx
        jne public_6316b2c
        xor eax, eax
        jmp public_6316b31
        public_6316b2c : nop
        sub eax, edx
        sar eax, 4
        public_6316b31 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6316b3d
        xor eax, eax
        public_6316b3d : nop
        shl eax, 4
        push eax
        call public_6391d9c
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_6316b6a
        public_6316b56 : nop
        push ebx
        push ebp
        call public_62baf00
        add ebx, 0x10
        add esp, 8
        add ebp, 0x10
        cmp ebx, edi
        jne public_6316b56
        public_6316b6a : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push ebp
        call public_62baf00
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x10
        push ebp
        push eax
        push edi
        mov ecx, esi
        call public_6316e20
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6316dd0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        shl eax, 4
        add eax, edi
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6316ac0
        mov ebx, dword ptr ss : [esp+0x14]
        inc eax
        shl eax, 4
        add eax, edi
        mov dword ptr ds : [esi+4], edi
        jmp public_6316c42
        public_6316bc9 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 4
        cmp ecx, 1
        mov ecx, esi
        jae public_6316c11
        lea edx, ds:[edi+0x10]
        push edx
        push eax
        push edi
        call public_6316e20
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
        call public_63190f0
        mov eax, dword ptr ds : [esi+8]
        push ebp
        push eax
        push edi
        call public_6319de0
        add esp, 0xC
        jmp public_6316c3c
        public_6316c11 : nop
        push eax
        push eax
        add eax, 0xFFFFFFF0
        push eax
        call public_6316e20
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFFF0
        push eax
        push edi
        call public_6319f30
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        lea edx, ds:[edi+0x10]
        push edx
        push edi
        call public_6319de0
        add esp, 0x18
        public_6316c3c : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x10
        public_6316c42 : nop
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
        UNREACHABLE_TRAP(0x6316ae0)
    }
}

#undef public_6316b1f
#undef public_6316b24
#undef public_6316b2c
#undef public_6316b31
#undef public_6316b3d
#undef public_6316b56
#undef public_6316b6a
#undef public_6316bc9
#undef public_6316c11
#undef public_6316c3c
#undef public_6316c42
