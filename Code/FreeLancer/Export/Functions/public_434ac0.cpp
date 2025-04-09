#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_434ac0);
CLANG_FORWARD_PROC_SYMBOL(public_436420);
CLANG_FORWARD_PROC_SYMBOL(public_436800);
CLANG_FORWARD_PROC_SYMBOL(public_436a90);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_587dc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_434af0 _public_434af0
#define public_434b18 _public_434b18
#define public_434b3d _public_434b3d
#define public_434b41 _public_434b41
#define public_434b61 _public_434b61

PROC_DECLARE(0x434ac0, internal_434ac0, public_434ac0);
extern "C" NAKED register_t __cdecl internal_434ac0()
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
        je public_434b3d
        mov ecx, eax
        cmp eax, ecx
        jne public_434b3d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_434b18
        nop 
        lea esp, ss:[esp]
        public_434af0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_436800
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
        jne public_434af0
        public_434b18 : nop
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
        jmp public_434b61
        public_434b3d : nop
        cmp eax, edi
        je public_434b61
        public_434b41 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_436a90
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_436420
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_434b41
        public_434b61 : nop
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
        UNREACHABLE_TRAP(0x434ac0)
    }
}

#undef public_434af0
#undef public_434b18
#undef public_434b3d
#undef public_434b41
#undef public_434b61
