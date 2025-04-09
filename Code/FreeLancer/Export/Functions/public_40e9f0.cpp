#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e9f0);
CLANG_FORWARD_PROC_SYMBOL(public_40f0d0);
CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_40ea00 _public_40ea00
#define public_40ea30 _public_40ea30
#define public_40ea4f _public_40ea4f
#define public_40ea74 _public_40ea74
#define public_40ea78 _public_40ea78
#define public_40ea98 _public_40ea98

PROC_DECLARE(0x40e9f0, internal_40e9f0, public_40e9f0);
extern "C" NAKED register_t __cdecl internal_40e9f0()
{
    __asm
    {
        mov ecx, offset public_6164b0
        jmp public_40ea00
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_40ea00 : nop
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
        je public_40ea74
        mov ecx, eax
        cmp eax, ecx
        jne public_40ea74
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_40ea4f
        nop 
        lea esp, ss:[esp]
        public_40ea30 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_40f0d0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_40ea30
        public_40ea4f : nop
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
        jmp public_40ea98
        public_40ea74 : nop
        cmp eax, edi
        je public_40ea98
        public_40ea78 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_52afa0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_46c8c0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_40ea78
        public_40ea98 : nop
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
        UNREACHABLE_TRAP(0x40e9f0)
    }
}

#undef public_40ea00
#undef public_40ea30
#undef public_40ea4f
#undef public_40ea74
#undef public_40ea78
#undef public_40ea98
