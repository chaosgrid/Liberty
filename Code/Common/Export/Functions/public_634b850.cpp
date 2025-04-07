#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_634b850);
CLANG_FORWARD_PROC_SYMBOL(public_6355310);
CLANG_FORWARD_PROC_SYMBOL(public_6355370);
CLANG_FORWARD_PROC_SYMBOL(public_6355710);
CLANG_FORWARD_PROC_SYMBOL(public_6355770);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_634b87f _public_634b87f
#define public_634b8ae _public_634b8ae
#define public_634b8b9 _public_634b8b9

PROC_DECLARE(0x634b850, internal_634b850, public_634b850);
extern "C" NAKED register_t __cdecl internal_634b850()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [eax+0x98]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [ebx+0x24]
        mov ecx, dword ptr ds : [ecx+0x98]
        push ecx
        push eax
        mov ecx, edi
        call public_6355770
        mov esi, eax
        test esi, esi
        jne public_634b87f
        mov dword ptr ds : [0], eax
        public_634b87f : nop
        push ebx
        mov ecx, esi
        call public_6355310
        mov ecx, esi
        call public_6355370
        test eax, eax
        jne public_634b8b9
        push esi
        mov ecx, edi
        call public_6355710
        test esi, esi
        je public_634b8ae
        mov ecx, esi
        call public_63449d0
        push esi
        call public_6391d5a
        add esp, 4
        public_634b8ae : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret 4
        public_634b8b9 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x634b850)
    }
}

#undef public_634b87f
#undef public_634b8ae
#undef public_634b8b9
