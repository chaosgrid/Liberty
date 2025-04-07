#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f72a20);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);

#define public_6f72a38 _public_6f72a38
#define public_6f72a43 _public_6f72a43
#define public_6f72a45 _public_6f72a45
#define public_6f72a66 _public_6f72a66
#define public_6f72a71 _public_6f72a71

PROC_DECLARE(0x6f72a20, internal_6f72a20, public_6f72a20);
extern "C" NAKED register_t __cdecl internal_6f72a20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xBC]
        push esi
        lea esi, ds:[ecx+0xB8]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_6f72a43
        mov edx, dword ptr ss : [esp+8]
        public_6f72a38 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f72a45
        add eax, 4
        cmp eax, ecx
        jne public_6f72a38
        public_6f72a43 : nop
        mov eax, ecx
        public_6f72a45 : nop
        cmp eax, ecx
        jne public_6f72a71
        lea eax, ss:[esp+8]
        push eax
        push 1
        push ecx
        mov ecx, esi
        call public_6f937c0
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_6f72a71
        mov ecx, dword ptr ss : [esp+8]
        public_6f72a66 : nop
        cmp dword ptr ds : [eax], ecx
        je public_6f72a71
        add eax, 4
        cmp eax, esi
        jne public_6f72a66
        public_6f72a71 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f72a20)
    }
}

#undef public_6f72a38
#undef public_6f72a43
#undef public_6f72a45
#undef public_6f72a66
#undef public_6f72a71
