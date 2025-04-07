#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce5810);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce5820 _public_6ce5820
#define public_6ce5829 _public_6ce5829
#define public_6ce582b _public_6ce582b
#define public_6ce5840 _public_6ce5840
#define public_6ce5847 _public_6ce5847
#define public_6ce585a _public_6ce585a
#define public_6ce5863 _public_6ce5863
#define public_6ce5867 _public_6ce5867
#define public_6ce5880 _public_6ce5880
#define public_6ce5891 _public_6ce5891

PROC_DECLARE(0x6ce5810, internal_6ce5810, public_6ce5810);
extern "C" NAKED register_t __cdecl internal_6ce5810()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        xor ebx, ebx
        mov dword ptr ds : [esi], offset public_6d64f24
        xor edi, edi
        nop 
        public_6ce5820 : nop
        cmp edi, ebx
        jne public_6ce5829
        mov edi, dword ptr ds : [esi+4]
        jmp public_6ce582b
        public_6ce5829 : nop
        mov edi, dword ptr ds : [edi]
        public_6ce582b : nop
        cmp edi, ebx
        je public_6ce5840
        mov eax, dword ptr ds : [edi+8]
        push eax
        call public_6d5ffb0
        add esp, 4
        mov dword ptr ds : [edi+8], ebx
        jmp public_6ce5820
        public_6ce5840 : nop
        mov edi, dword ptr ds : [esi+4]
        cmp edi, ebx
        je public_6ce5867
        public_6ce5847 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6ce585a
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6ce5863
        public_6ce585a : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6ce5863 : nop
        cmp edi, ebx
        jne public_6ce5847
        public_6ce5867 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi], offset public_6d64f2c
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_6ce5891
        lea ebx, ds:[ebx]
        public_6ce5880 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6d5ffb0
        add esp, 4
        cmp edi, ebx
        jne public_6ce5880
        public_6ce5891 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ce5810)
    }
}

#undef public_6ce5820
#undef public_6ce5829
#undef public_6ce582b
#undef public_6ce5840
#undef public_6ce5847
#undef public_6ce585a
#undef public_6ce5863
#undef public_6ce5867
#undef public_6ce5880
#undef public_6ce5891
