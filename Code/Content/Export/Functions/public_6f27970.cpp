#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57c60);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f6dff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6eca0);

#define public_6f2799a _public_6f2799a
#define public_6f279c6 _public_6f279c6
#define public_6f279dd _public_6f279dd

PROC_DECLARE(0x6f27970, internal_6f27970, public_6f27970);
extern "C" NAKED register_t __cdecl internal_6f27970()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi]
        mov esi, ecx
        mov ecx, edi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+0x11C]
        cmp ecx, 0xFFFFFFFF
        lea eax, ds:[esi+0x11C]
        je public_6f2799a
        mov ecx, dword ptr ds : [esi+0x118]
        test ecx, ecx
        jne public_6f279c6
        public_6f2799a : nop
        mov ecx, dword ptr ds : [edi+4]
        lea edx, ds:[esi+0x120]
        push edx
        push eax
        lea eax, ds:[esi+0x118]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_6f6eca0
        add esp, 0x10
        test al, al
        jne public_6f279c6
        pop edi
        pop esi
        ret 4
        public_6f279c6 : nop
        mov eax, dword ptr ds : [esi+0x114]
        test eax, eax
        jne public_6f279dd
        mov ecx, edi
        call public_6f57c80
        mov dword ptr ds : [esi+0x114], eax
        public_6f279dd : nop
        mov edx, dword ptr ds : [edi+4]
        push 0
        push 0
        push 0
        push edx
        call public_6f6dff0
        add esp, 0x10
        add esi, 0x10C
        push esi
        mov ecx, edi
        call public_6f57c60
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f27970)
    }
}

#undef public_6f2799a
#undef public_6f279c6
#undef public_6f279dd
