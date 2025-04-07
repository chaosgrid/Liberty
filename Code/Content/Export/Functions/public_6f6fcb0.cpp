#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8d70);
CLANG_FORWARD_PROC_SYMBOL(public_6f47ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6fcb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);

#define public_6f6fd05 _public_6f6fd05
#define public_6f6fd11 _public_6f6fd11
#define public_6f6fd65 _public_6f6fd65
#define public_6f6fd84 _public_6f6fd84

PROC_DECLARE(0x6f6fcb0, internal_6f6fcb0, public_6f6fcb0);
extern "C" NAKED register_t __cdecl internal_6f6fcb0()
{
    __asm
    {
        sub esp, 0x20
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [esi+4]
        push edi
        lea eax, ss:[esp+0x30]
        lea ebp, ds:[esi+4]
        push eax
        push ecx
        call dword ptr ds : [public_6fb33a0]
        mov al, byte ptr ss : [esp+0x38]
        add esp, 8
        test al, al
        mov edi, 5
        jns public_6f6fd65
        push esi
        call public_6f49bc0
        add esp, 4
        test eax, eax
        je public_6f6fd11
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [ebp]
        push edx
        push ecx
        mov ecx, eax
        call public_6f47ee0
        cmp eax, 1
        jne public_6f6fd05
        mov edi, eax
        jmp public_6f6fd65
        public_6f6fd05 : nop
        cmp eax, 2
        jne public_6f6fd11
        mov edi, 1
        jmp public_6f6fd65
        public_6f6fd11 : nop
        lea edx, ds:[esi+0xC]
        push edx
        mov edi, 4
        call public_6f75f30
        mov ecx, dword ptr ds : [esi]
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp]
        lea edx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x18], ecx
        push edx
        mov ecx, offset public_6fd1c08
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x24], 0
        mov byte ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x10], offset public_6fbbd70
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x28], edi
        call public_6ee8d70
        fstp st(0)
        public_6f6fd65 : nop
        push edi
        push esi
        call dword ptr ds : [public_6fb3590]
        add esp, 8
        cmp edi, 4
        jne public_6f6fd84
        mov eax, dword ptr ds : [esi]
        push eax
        push 1
        push ebp
        call dword ptr ds : [public_6fb3588]
        add esp, 0xC
        public_6f6fd84 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x6f6fcb0)
    }
}

#undef public_6f6fd05
#undef public_6f6fd11
#undef public_6f6fd65
#undef public_6f6fd84
