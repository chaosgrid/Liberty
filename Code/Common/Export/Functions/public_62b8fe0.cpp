#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b8e90);
CLANG_FORWARD_PROC_SYMBOL(public_62b8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62b8ff0 _public_62b8ff0
#define public_62b9020 _public_62b9020

PROC_DECLARE(0x62b8fe0, internal_62b8fe0, public_62b8fe0);
extern "C" NAKED register_t __cdecl internal_62b8fe0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        mov ebp, dword ptr ds : [ebx+4]
        push edi
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_62b9020
        push esi
        public_62b8ff0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_62b8e90
        push esi
        call public_6391d5a
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_62b8ff0
        pop esi
        public_62b9020 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6391d5a
        add esp, 4
        pop edi
        xor eax, eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62b8fe0)
    }
}

#undef public_62b8ff0
#undef public_62b9020
