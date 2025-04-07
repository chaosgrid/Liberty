#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418550);
CLANG_FORWARD_PROC_SYMBOL(public_418c90);
CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_418580 _public_418580
#define public_41859f _public_41859f
#define public_4185b8 _public_4185b8
#define public_4185c0 _public_4185c0
#define public_4185e0 _public_4185e0

PROC_DECLARE(0x418550, internal_418550, public_418550);
extern "C" NAKED register_t __cdecl internal_418550()
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
        je public_4185b8
        mov ecx, eax
        cmp eax, ecx
        jne public_4185b8
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_41859f
        nop 
        lea esp, ss:[esp]
        public_418580 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_418c90
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_418580
        public_41859f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_4185e0
        public_4185b8 : nop
        cmp eax, edi
        je public_4185e0
        lea esp, ss:[esp]
        public_4185c0 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_52afa0
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_46c8c0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_4185c0
        public_4185e0 : nop
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
        UNREACHABLE_TRAP(0x418550)
    }
}

#undef public_418580
#undef public_41859f
#undef public_4185b8
#undef public_4185c0
#undef public_4185e0
