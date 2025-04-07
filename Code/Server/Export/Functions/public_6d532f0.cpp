#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d532f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d53360);
CLANG_FORWARD_PROC_SYMBOL(public_6d533a0);

#define public_6d53302 _public_6d53302
#define public_6d5330c _public_6d5330c
#define public_6d5331b _public_6d5331b
#define public_6d53331 _public_6d53331
#define public_6d5334b _public_6d5334b

PROC_DECLARE(0x6d532f0, internal_6d532f0, public_6d532f0);
extern "C" NAKED register_t __cdecl internal_6d532f0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ds : [public_6d64c9c]
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        public_6d53302 : nop
        xor eax, eax
        test esi, esi
        jne public_6d5330c
        mov eax, dword ptr ds : [edi]
        jmp public_6d5331b
        public_6d5330c : nop
        mov edx, dword ptr ds : [edi+0x1C]
        lea ecx, ds:[esi+0x418]
        cmp ecx, edx
        jae public_6d53331
        mov eax, ecx
        public_6d5331b : nop
        test eax, eax
        je public_6d53331
        mov ecx, dword ptr ds : [eax+0x348]
        test ecx, ecx
        jne public_6d53331
        push eax
        mov ecx, edi
        call public_6d53360
        public_6d53331 : nop
        test eax, eax
        mov esi, eax
        je public_6d5334b
        push ebx
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_6d53302
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 8
        public_6d5334b : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push ebx
        mov ecx, edi
        call public_6d533a0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d532f0)
    }
}

#undef public_6d53302
#undef public_6d5330c
#undef public_6d5331b
#undef public_6d53331
#undef public_6d5334b
