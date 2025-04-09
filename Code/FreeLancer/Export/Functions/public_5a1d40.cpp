#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4143c0);
CLANG_FORWARD_PROC_SYMBOL(public_4176c0);
CLANG_FORWARD_PROC_SYMBOL(public_417730);
CLANG_FORWARD_PROC_SYMBOL(public_417780);
CLANG_FORWARD_PROC_SYMBOL(public_561f20);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_59daa0);
CLANG_FORWARD_PROC_SYMBOL(public_5a1d40);

#define public_5a1dc5 _public_5a1dc5
#define public_5a1dcb _public_5a1dcb
#define public_5a1e5f _public_5a1e5f

PROC_DECLARE(0x5a1d40, internal_5a1d40, public_5a1d40);
extern "C" NAKED register_t __cdecl internal_5a1d40()
{
    __asm
    {
        sub esp, 0x24
        push esi
        push 6
        mov esi, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_5a1e5f
        test byte ptr ds : [esi+0x6C], 2
        je public_5a1e5f
        fld dword ptr ds : [esi+0xB8]
        mov eax, dword ptr ds : [esi+0xB4]
        push ebx
        fchs 
        push ebp
        fstp dword ptr ds : [esi+0xC8]
        xor ebp, ebp
        push edi
        mov dword ptr ds : [esi+0xBC], ebp
        mov dword ptr ds : [esi+0xC4], eax
        mov dword ptr ds : [esi+0xC0], ebp
        call public_59daa0
        mov ecx, dword ptr ds : [esi+0xD0]
        push ecx
        lea edx, ss:[esp+0x14]
        cmp eax, esi
        push edx
        sete bl
        call public_561f20
        mov al, byte ptr ds : [esi+0xE6]
        add esp, 8
        test al, al
        je public_5a1dc5
        test bl, bl
        lea eax, ss:[esp+0x10]
        jne public_5a1dcb
        lea eax, ds:[esi+0xCC]
        jmp public_5a1dcb
        public_5a1dc5 : nop
        lea eax, ds:[esi+0xDC]
        public_5a1dcb : nop
        push eax
        call public_417780
        mov ecx, dword ptr ds : [esi+0x68]
        mov edx, dword ptr ds : [esi+0xB8]
        mov eax, dword ptr ds : [esi+0xB4]
        add esp, 4
        lea edi, ds:[esi+0x60]
        push ecx
        push edx
        push eax
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x3C], ebp
        call public_4176c0
        mov ecx, eax
        push edi
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], edx
        call public_417730
        add esp, 0x10
        mov ecx, edx
        push ebp
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [esi+0xE8]
        push ebp
        add esi, 0x7C
        mov dword ptr ss : [esp+0x28], ecx
        push esi
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x38], edx
        call public_4143c0
        pop edi
        pop ebp
        pop ebx
        public_5a1e5f : nop
        pop esi
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x5a1d40)
    }
}

#undef public_5a1dc5
#undef public_5a1dcb
#undef public_5a1e5f
