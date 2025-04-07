#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f69000 _public_6f69000
#define public_6f69030 _public_6f69030

PROC_DECLARE(0x6f68ff0, internal_6f68ff0, public_6f68ff0);
extern "C" NAKED register_t __cdecl internal_6f68ff0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        mov ebp, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6f69030
        push esi
        public_6f69000 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_6ef4bb0
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ds : [ebx+0xC]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+0xC], ecx
        jne public_6f69000
        pop esi
        public_6f69030 : nop
        mov ecx, dword ptr ds : [ebx+8]
        push ecx
        call public_6fa8fe0
        add esp, 4
        pop edi
        xor eax, eax
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f68ff0)
    }
}

#undef public_6f69000
#undef public_6f69030
