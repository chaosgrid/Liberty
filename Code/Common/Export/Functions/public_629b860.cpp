#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b860);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_629b870 _public_629b870
#define public_629b884 _public_629b884
#define public_629b88a _public_629b88a
#define public_629b893 _public_629b893
#define public_629b8ba _public_629b8ba

PROC_DECLARE(0x629b860, internal_629b860, public_629b860);
extern "C" NAKED register_t __cdecl internal_629b860()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_629b88a
        public_629b870 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        mov dword ptr ds : [esi+8], 0
        je public_629b884
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_629b884 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_629b870
        public_629b88a : nop
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_629b8ba
        public_629b893 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [ebx+8], ecx
        jne public_629b893
        public_629b8ba : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x629b860)
    }
}

#undef public_629b870
#undef public_629b884
#undef public_629b88a
#undef public_629b893
#undef public_629b8ba
