#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43c730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43c744 _public_43c744
#define public_43c757 _public_43c757
#define public_43c760 _public_43c760
#define public_43c764 _public_43c764
#define public_43c771 _public_43c771
#define public_43c782 _public_43c782

PROC_DECLARE(0x43c730, internal_43c730, public_43c730);
extern "C" NAKED register_t __cdecl internal_43c730()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr ds : [esi], offset public_5cb03c
        je public_43c764
        public_43c744 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_43c757
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_43c760
        public_43c757 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_43c760 : nop
        cmp edi, ebx
        jne public_43c744
        public_43c764 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_43c782
        public_43c771 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp edi, ebx
        jne public_43c771
        public_43c782 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x43c730)
    }
}

#undef public_43c744
#undef public_43c757
#undef public_43c760
#undef public_43c764
#undef public_43c771
#undef public_43c782
