#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_447cd0);
CLANG_FORWARD_PROC_SYMBOL(public_448270);
CLANG_FORWARD_PROC_SYMBOL(public_454eb0);
CLANG_FORWARD_PROC_SYMBOL(public_454f80);
CLANG_FORWARD_PROC_SYMBOL(public_456540);
CLANG_FORWARD_PROC_SYMBOL(public_558a30);
CLANG_FORWARD_PROC_SYMBOL(public_558c00);

#define public_447d5d _public_447d5d

PROC_DECLARE(0x447cd0, internal_447cd0, public_447cd0);
extern "C" NAKED register_t __cdecl internal_447cd0()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+0x64]
        test ebx, ebx
        je public_447d5d
        mov eax, dword ptr ds : [edi+8]
        push esi
        push 0
        push eax
        mov ecx, offset public_66d2d0
        call public_456540
        lea ecx, ss:[esp+0xC]
        mov esi, eax
        call dword ptr ds : [public_5c6218]
        lea ecx, ss:[esp+0xC]
        call dword ptr ds : [public_5c6184]
        push 0
        lea ecx, ss:[esp+0x10]
        push ecx
        push 0
        push ebx
        mov ecx, esi
        call public_454eb0
        mov ebx, 1
        mov ecx, esi
        mov dword ptr ds : [esi], 0
        mov byte ptr ds : [esi+6], bl
        mov byte ptr ds : [esi+7], bl
        mov byte ptr ds : [esi+8], bl
        mov byte ptr ds : [esi+9], 0
        mov dword ptr ds : [esi+0x10], ebx
        mov byte ptr ds : [esi+0x16], bl
        mov dword ptr ds : [esi+0x18], offset _public_448270
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], 0
        call public_454f80
        pop esi
        mov dword ptr ds : [edi+0xAC], ebx
        pop edi
        pop ebx
        add esp, 0x30
        jmp public_558c00
        public_447d5d : nop
        pop edi
        pop ebx
        add esp, 0x30
        jmp public_558a30
        UNREACHABLE_TRAP(0x447cd0)
    }
}

#undef public_447d5d
