#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401060);
CLANG_FORWARD_PROC_SYMBOL(public_401780);
CLANG_FORWARD_PROC_SYMBOL(public_401b50);
CLANG_FORWARD_PROC_SYMBOL(public_536020);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_401070 _public_401070
#define public_4010a0 _public_4010a0
#define public_4010bf _public_4010bf
#define public_4010e4 _public_4010e4
#define public_4010e8 _public_4010e8
#define public_401108 _public_401108

PROC_DECLARE(0x401060, internal_401060, public_401060);
extern "C" NAKED register_t __cdecl internal_401060()
{
    __asm
    {
        mov ecx, offset public_616440
        jmp public_401070
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_401070 : nop
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
        je public_4010e4
        mov ecx, eax
        cmp eax, ecx
        jne public_4010e4
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_4010bf
        nop 
        lea esp, ss:[esp]
        public_4010a0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_401b50
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_4010a0
        public_4010bf : nop
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
        jmp public_401108
        public_4010e4 : nop
        cmp eax, edi
        je public_401108
        public_4010e8 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_536020
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_401780
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_4010e8
        public_401108 : nop
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
        UNREACHABLE_TRAP(0x401060)
    }
}

#undef public_401070
#undef public_4010a0
#undef public_4010bf
#undef public_4010e4
#undef public_4010e8
#undef public_401108
