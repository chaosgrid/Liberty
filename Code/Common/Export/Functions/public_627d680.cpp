#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627d680);
CLANG_FORWARD_PROC_SYMBOL(public_627dbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627d690 _public_627d690
#define public_627d69d _public_627d69d
#define public_627d6e1 _public_627d6e1
#define public_627d6f5 _public_627d6f5

PROC_DECLARE(0x627d680, internal_627d680, public_627d680);
extern "C" NAKED register_t __cdecl internal_627d680()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fbff0]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_627d6f5
        mov ecx, dword ptr ss : [esp+8]
        public_627d690 : nop
        cmp dword ptr ds : [esi+8], ecx
        je public_627d69d
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_627d690
        pop esi
        ret 
        public_627d69d : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_627dbb0
        cmp dword ptr ds : [public_63fc028], 0x7FFFFFFF
        jge public_627d6e1
        mov ecx, dword ptr ds : [public_63fc01c]
        mov dword ptr ds : [esi], ecx
        inc dword ptr ds : [public_63fc028]
        mov eax, dword ptr ds : [public_63fbff4]
        dec eax
        mov dword ptr ds : [public_63fc01c], esi
        mov dword ptr ds : [public_63fbff4], eax
        pop esi
        ret 
        public_627d6e1 : nop
        push esi
        call public_6391d5a
        mov eax, dword ptr ds : [public_63fbff4]
        add esp, 4
        dec eax
        mov dword ptr ds : [public_63fbff4], eax
        public_627d6f5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x627d680)
    }
}

#undef public_627d690
#undef public_627d69d
#undef public_627d6e1
#undef public_627d6f5
