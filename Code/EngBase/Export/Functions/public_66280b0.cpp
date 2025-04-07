#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66280b0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_66280c0 _public_66280c0
#define public_66280e4 _public_66280e4
#define public_66280f9 _public_66280f9
#define public_662811d _public_662811d

PROC_DECLARE(0x66280b0, internal_66280b0, public_66280b0);
extern "C" NAKED register_t __cdecl internal_66280b0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        push ebp
        push edi
        mov ebp, dword ptr ds : [ebx+8]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_66280f9
        push esi
        public_66280c0 : nop
        mov esi, edi
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_66280e4
        push eax
        call dword ptr ds : [public_662902c]
        add esp, 4
        public_66280e4 : nop
        push esi
        call public_66281d0
        mov ecx, dword ptr ds : [ebx+0xC]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+0xC], ecx
        jne public_66280c0
        pop esi
        public_66280f9 : nop
        mov ecx, dword ptr ds : [ebx+8]
        push ecx
        call public_66281d0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        test byte ptr ss : [esp+0x10], 1
        je public_662811d
        push ebx
        call public_66281d0
        add esp, 4
        public_662811d : nop
        pop edi
        mov eax, ebx
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x66280b0)
    }
}

#undef public_66280c0
#undef public_66280e4
#undef public_66280f9
#undef public_662811d
