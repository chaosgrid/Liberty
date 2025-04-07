#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef69a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6b50);
CLANG_FORWARD_PROC_SYMBOL(public_6ef73c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7400);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7630);
CLANG_FORWARD_PROC_SYMBOL(public_6ef79a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8110);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ef69df _public_6ef69df
#define public_6ef69e4 _public_6ef69e4
#define public_6ef69ec _public_6ef69ec
#define public_6ef69f1 _public_6ef69f1
#define public_6ef69fd _public_6ef69fd
#define public_6ef6a16 _public_6ef6a16
#define public_6ef6a30 _public_6ef6a30
#define public_6ef6a95 _public_6ef6a95
#define public_6ef6ae0 _public_6ef6ae0
#define public_6ef6b0e _public_6ef6b0e
#define public_6ef6b16 _public_6ef6b16

PROC_DECLARE(0x6ef69a0, internal_6ef69a0, public_6ef69a0);
extern "C" NAKED register_t __cdecl internal_6ef69a0()
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
        sar ebx, 7
        sar ecx, 7
        cmp ecx, 1
        mov dword ptr ss : [esp+0x14], ebx
        jae public_6ef6a95
        test edx, edx
        je public_6ef69df
        mov ecx, eax
        sub ecx, edx
        sar ecx, 7
        cmp ecx, 1
        ja public_6ef69e4
        public_6ef69df : nop
        mov ecx, 1
        public_6ef69e4 : nop
        test edx, edx
        jne public_6ef69ec
        xor eax, eax
        jmp public_6ef69f1
        public_6ef69ec : nop
        sub eax, edx
        sar eax, 7
        public_6ef69f1 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6ef69fd
        xor eax, eax
        public_6ef69fd : nop
        shl eax, 7
        push eax
        call public_6fa912a
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_6ef6a30
        public_6ef6a16 : nop
        push ebx
        push ebp
        call public_6ef8110
        add ebx, 0x80
        add esp, 8
        add ebp, 0x80
        cmp ebx, edi
        jne public_6ef6a16
        public_6ef6a30 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push ebp
        call public_6ef8110
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x80
        push ebp
        push eax
        push edi
        mov ecx, esi
        call public_6ef73c0
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6ef6b50
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        shl eax, 7
        add eax, edi
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6ef6b30
        mov ebx, dword ptr ss : [esp+0x14]
        inc eax
        shl eax, 7
        add eax, edi
        mov dword ptr ds : [esi+4], edi
        jmp public_6ef6b16
        public_6ef6a95 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 7
        cmp ecx, 1
        mov ecx, esi
        jae public_6ef6ae0
        lea edx, ds:[edi+0x80]
        push edx
        push eax
        push edi
        call public_6ef73c0
        mov eax, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 7
        push ebp
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_6ef7400
        mov eax, dword ptr ds : [esi+8]
        push ebp
        push eax
        push edi
        call public_6ef7630
        add esp, 0xC
        jmp public_6ef6b0e
        public_6ef6ae0 : nop
        push eax
        push eax
        add eax, 0xFFFFFF80
        push eax
        call public_6ef73c0
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFF80
        push eax
        push edi
        call public_6ef79a0
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        lea edx, ds:[edi+0x80]
        push edx
        push edi
        call public_6ef7630
        add esp, 0x18
        public_6ef6b0e : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x80
        public_6ef6b16 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], eax
        pop edi
        mov eax, ebx
        pop esi
        shl eax, 7
        pop ebp
        add eax, ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6ef69a0)
    }
}

#undef public_6ef69df
#undef public_6ef69e4
#undef public_6ef69ec
#undef public_6ef69f1
#undef public_6ef69fd
#undef public_6ef6a16
#undef public_6ef6a30
#undef public_6ef6a95
#undef public_6ef6ae0
#undef public_6ef6b0e
#undef public_6ef6b16
