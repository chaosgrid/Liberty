#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_62ef910);
CLANG_FORWARD_PROC_SYMBOL(public_62fceb0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62ef920 _public_62ef920
#define public_62ef950 _public_62ef950
#define public_62ef96f _public_62ef96f
#define public_62ef994 _public_62ef994
#define public_62ef998 _public_62ef998
#define public_62ef9b8 _public_62ef9b8

PROC_DECLARE(0x62ef910, internal_62ef910, public_62ef910);
extern "C" NAKED register_t __cdecl internal_62ef910()
{
    __asm
    {
        mov ecx, offset public_63fca84
        jmp public_62ef920
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_62ef920 : nop
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
        je public_62ef994
        mov ecx, eax
        cmp eax, ecx
        jne public_62ef994
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62ef96f
        nop 
        lea esp, ss:[esp]
        public_62ef950 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_62fceb0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62ef950
        public_62ef96f : nop
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
        call public_632c410
        jmp public_62ef9b8
        public_62ef994 : nop
        cmp eax, edi
        je public_62ef9b8
        public_62ef998 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_63429f0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_62be400
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_62ef998
        public_62ef9b8 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6391d5a
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62ef910)
    }
}

#undef public_62ef920
#undef public_62ef950
#undef public_62ef96f
#undef public_62ef994
#undef public_62ef998
#undef public_62ef9b8
