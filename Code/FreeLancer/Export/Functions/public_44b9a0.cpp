#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44b9a0);
CLANG_FORWARD_PROC_SYMBOL(public_44c730);
CLANG_FORWARD_PROC_SYMBOL(public_44cb00);
CLANG_FORWARD_PROC_SYMBOL(public_44cd90);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_44b9d0 _public_44b9d0
#define public_44b9ef _public_44b9ef
#define public_44ba14 _public_44ba14
#define public_44ba18 _public_44ba18
#define public_44ba38 _public_44ba38

PROC_DECLARE(0x44b9a0, internal_44b9a0, public_44b9a0);
extern "C" NAKED register_t __cdecl internal_44b9a0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_44ba14
        mov ecx, eax
        cmp eax, ecx
        jne public_44ba14
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_44b9ef
        nop 
        lea esp, ss:[esp]
        public_44b9d0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_44cb00
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_44b9d0
        public_44b9ef : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_53e430
        jmp public_44ba38
        public_44ba14 : nop
        cmp eax, edi
        je public_44ba38
        public_44ba18 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_44cd90
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_44c730
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_44ba18
        public_44ba38 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_5b7e1d
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x44b9a0)
    }
}

#undef public_44b9d0
#undef public_44b9ef
#undef public_44ba14
#undef public_44ba18
#undef public_44ba38
