#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f620);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b490);
CLANG_FORWARD_PROC_SYMBOL(public_6d23bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d23bd0 _public_6d23bd0
#define public_6d23bf4 _public_6d23bf4
#define public_6d23c16 _public_6d23c16
#define public_6d23c3a _public_6d23c3a

PROC_DECLARE(0x6d23bb0, internal_6d23bb0, public_6d23bb0);
extern "C" NAKED register_t __cdecl internal_6d23bb0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        lea esi, ds:[ebx+0x48]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], eax
        je public_6d23bf4
        nop 
        lea esp, ss:[esp]
        public_6d23bd0 : nop
        push ebp
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6d1b490
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6d0f620
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6d23bd0
        public_6d23bf4 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6d5ffb0
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov edi, dword ptr ds : [ebx+0x40]
        mov eax, dword ptr ds : [edi]
        lea esi, ds:[ebx+0x3C]
        add esp, 4
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], eax
        je public_6d23c3a
        public_6d23c16 : nop
        push ebp
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6d1b490
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6d0f620
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6d23c16
        public_6d23c3a : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6d5ffb0
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov edx, dword ptr ds : [ebx+0x30]
        push edx
        call public_6d5ffb0
        add esp, 8
        pop edi
        mov dword ptr ds : [ebx+0x30], ebp
        mov dword ptr ds : [ebx+0x34], ebp
        mov dword ptr ds : [ebx+0x38], ebp
        pop esi
        pop ebp
        mov dword ptr ds : [ebx], offset public_6d68b9c
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d23bb0)
    }
}

#undef public_6d23bd0
#undef public_6d23bf4
#undef public_6d23c16
#undef public_6d23c3a
