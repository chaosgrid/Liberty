#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4582e0);
CLANG_FORWARD_PROC_SYMBOL(public_4588f0);
CLANG_FORWARD_PROC_SYMBOL(public_458cc0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5948b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_458310 _public_458310
#define public_45832f _public_45832f
#define public_458354 _public_458354
#define public_458358 _public_458358
#define public_458378 _public_458378

PROC_DECLARE(0x4582e0, internal_4582e0, public_4582e0);
extern "C" NAKED register_t __cdecl internal_4582e0()
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
        je public_458354
        mov ecx, eax
        cmp eax, ecx
        jne public_458354
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_45832f
        nop 
        lea esp, ss:[esp]
        public_458310 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_458cc0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_458310
        public_45832f : nop
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
        jmp public_458378
        public_458354 : nop
        cmp eax, edi
        je public_458378
        public_458358 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_5948b0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_4588f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_458358
        public_458378 : nop
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
        UNREACHABLE_TRAP(0x4582e0)
    }
}

#undef public_458310
#undef public_45832f
#undef public_458354
#undef public_458358
#undef public_458378
