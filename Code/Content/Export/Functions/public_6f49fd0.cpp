#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f49fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a440);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f4a000 _public_6f4a000
#define public_6f4a01f _public_6f4a01f
#define public_6f4a038 _public_6f4a038
#define public_6f4a040 _public_6f4a040
#define public_6f4a060 _public_6f4a060

PROC_DECLARE(0x6f49fd0, internal_6f49fd0, public_6f49fd0);
extern "C" NAKED register_t __cdecl internal_6f49fd0()
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
        je public_6f4a038
        mov ecx, eax
        cmp eax, ecx
        jne public_6f4a038
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f4a01f
        nop 
        lea esp, ss:[esp]
        public_6f4a000 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f4a440
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f4a000
        public_6f4a01f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6f4a060
        public_6f4a038 : nop
        cmp eax, edi
        je public_6f4a060
        lea esp, ss:[esp]
        public_6f4a040 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f1fa00
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6f20e00
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f4a040
        public_6f4a060 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6fa8fe0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f49fd0)
    }
}

#undef public_6f4a000
#undef public_6f4a01f
#undef public_6f4a038
#undef public_6f4a040
#undef public_6f4a060
