#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_4c3a00);
CLANG_FORWARD_PROC_SYMBOL(public_4c5f60);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4c3a10 _public_4c3a10
#define public_4c3a40 _public_4c3a40
#define public_4c3a5f _public_4c3a5f
#define public_4c3a84 _public_4c3a84
#define public_4c3a88 _public_4c3a88
#define public_4c3aa8 _public_4c3aa8

PROC_DECLARE(0x4c3a00, internal_4c3a00, public_4c3a00);
extern "C" NAKED register_t __cdecl internal_4c3a00()
{
    __asm
    {
        mov ecx, offset public_673320
        jmp public_4c3a10
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_4c3a10 : nop
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
        je public_4c3a84
        mov ecx, eax
        cmp eax, ecx
        jne public_4c3a84
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_4c3a5f
        nop 
        lea esp, ss:[esp]
        public_4c3a40 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_4c5f60
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_4c3a40
        public_4c3a5f : nop
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
        jmp public_4c3aa8
        public_4c3a84 : nop
        cmp eax, edi
        je public_4c3aa8
        public_4c3a88 : nop
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
        jne public_4c3a88
        public_4c3aa8 : nop
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
        UNREACHABLE_TRAP(0x4c3a00)
    }
}

#undef public_4c3a10
#undef public_4c3a40
#undef public_4c3a5f
#undef public_4c3a84
#undef public_4c3a88
#undef public_4c3aa8
