#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a67c0);
CLANG_FORWARD_PROC_SYMBOL(public_62f0d50);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62a67d0 _public_62a67d0
#define public_62a67ef _public_62a67ef
#define public_62a6804 _public_62a6804

PROC_DECLARE(0x62a67c0, internal_62a67c0, public_62a67c0);
extern "C" NAKED register_t __cdecl internal_62a67c0()
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
        je public_62a6804
        push esi
        public_62a67d0 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_62a67ef
        call public_62f0d50
        public_62a67ef : nop
        push esi
        call public_6391d5a
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_62a67d0
        pop esi
        public_62a6804 : nop
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
        UNREACHABLE_TRAP(0x62a67c0)
    }
}

#undef public_62a67d0
#undef public_62a67ef
#undef public_62a6804
