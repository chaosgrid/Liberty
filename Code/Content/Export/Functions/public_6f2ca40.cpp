#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eed7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ca40);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e250);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f580);
CLANG_FORWARD_PROC_SYMBOL(public_6f69d00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f2ca70 _public_6f2ca70
#define public_6f2ca98 _public_6f2ca98
#define public_6f2cab1 _public_6f2cab1
#define public_6f2cab5 _public_6f2cab5
#define public_6f2cad5 _public_6f2cad5

PROC_DECLARE(0x6f2ca40, internal_6f2ca40, public_6f2ca40);
extern "C" NAKED register_t __cdecl internal_6f2ca40()
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
        je public_6f2cab1
        mov ecx, eax
        cmp eax, ecx
        jne public_6f2cab1
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f2ca98
        nop 
        lea esp, ss:[esp]
        public_6f2ca70 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f2e250
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6f2f580
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f2ca70
        public_6f2ca98 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6f2cad5
        public_6f2cab1 : nop
        cmp eax, edi
        je public_6f2cad5
        public_6f2cab5 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f69d00
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6eed7f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f2cab5
        public_6f2cad5 : nop
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
        UNREACHABLE_TRAP(0x6f2ca40)
    }
}

#undef public_6f2ca70
#undef public_6f2ca98
#undef public_6f2cab1
#undef public_6f2cab5
#undef public_6f2cad5
