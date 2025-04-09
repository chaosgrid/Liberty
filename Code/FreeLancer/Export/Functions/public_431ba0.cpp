#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_431ba0);
CLANG_FORWARD_PROC_SYMBOL(public_432740);
CLANG_FORWARD_PROC_SYMBOL(public_432c20);
CLANG_FORWARD_PROC_SYMBOL(public_587dc0);
CLANG_FORWARD_PROC_SYMBOL(public_5948b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_431bd0 _public_431bd0
#define public_431bf8 _public_431bf8
#define public_431c11 _public_431c11
#define public_431c15 _public_431c15
#define public_431c35 _public_431c35

PROC_DECLARE(0x431ba0, internal_431ba0, public_431ba0);
extern "C" NAKED register_t __cdecl internal_431ba0()
{
    __asm
    {
        sub esp, 8
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
        je public_431c11
        mov ecx, eax
        cmp eax, ecx
        jne public_431c11
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_431bf8
        nop 
        lea esp, ss:[esp]
        public_431bd0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_432c20
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_587dc0
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_431bd0
        public_431bf8 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_431c35
        public_431c11 : nop
        cmp eax, edi
        je public_431c35
        public_431c15 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_5948b0
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_432740
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_431c15
        public_431c35 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_5b7e1d
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_5b7e1d
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x431ba0)
    }
}

#undef public_431bd0
#undef public_431bf8
#undef public_431c11
#undef public_431c15
#undef public_431c35
