#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627dbb0);
CLANG_FORWARD_PROC_SYMBOL(public_627f190);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627f1a2 _public_627f1a2
#define public_627f1e4 _public_627f1e4
#define public_627f1ed _public_627f1ed
#define public_627f1f9 _public_627f1f9

PROC_DECLARE(0x627f190, internal_627f190, public_627f190);
extern "C" NAKED register_t __cdecl internal_627f190()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, ebp
        mov ebx, ecx
        je public_627f1f9
        push esi
        public_627f1a2 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_627dbb0
        cmp dword ptr ds : [public_63fc028], 0x7FFFFFFF
        jge public_627f1e4
        mov ecx, dword ptr ds : [public_63fc01c]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [public_63fc028]
        inc eax
        mov dword ptr ds : [public_63fc01c], esi
        mov dword ptr ds : [public_63fc028], eax
        jmp public_627f1ed
        public_627f1e4 : nop
        push esi
        call public_6391d5a
        add esp, 4
        public_627f1ed : nop
        mov ecx, dword ptr ds : [ebx+8]
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_627f1a2
        pop esi
        public_627f1f9 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edi
        pop edi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x627f190)
    }
}

#undef public_627f1a2
#undef public_627f1e4
#undef public_627f1ed
#undef public_627f1f9
