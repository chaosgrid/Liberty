#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f311e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f31d40);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f2f746 _public_6f2f746
#define public_6f2f74e _public_6f2f74e
#define public_6f2f7a2 _public_6f2f7a2

PROC_DECLARE(0x6f2f700, internal_6f2f700, public_6f2f700);
extern "C" NAKED register_t __cdecl internal_6f2f700()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 8
        test eax, eax
        push ebx
        push esi
        push edi
        mov esi, ecx
        je public_6f2f7a2
        cmp eax, 1
        je public_6f2f7a2
        lea eax, ss:[esp+0x18]
        lea edi, ds:[esi+0x10]
        push eax
        mov ecx, edi
        call public_6f31d40
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], eax
        je public_6f2f746
        mov edx, dword ptr ss : [esp+0x18]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6f2f746
        lea eax, ss:[esp+0xC]
        jmp public_6f2f74e
        public_6f2f746 : nop
        mov dword ptr ss : [esp+0x10], ecx
        lea eax, ss:[esp+0x10]
        public_6f2f74e : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+0x14]
        je public_6f2f7a2
        mov ebx, dword ptr ds : [eax+0x10]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call public_6f311e0
        push ebx
        call public_6f57e26
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6f57e26
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 8
        dec eax
        mov dword ptr ds : [esi+0xC], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x34]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6f2f7a2 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f2f700)
    }
}

#undef public_6f2f746
#undef public_6f2f74e
#undef public_6f2f7a2
