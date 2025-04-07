#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7090);
CLANG_FORWARD_PROC_SYMBOL(public_6f478d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);

#define public_6f478f1 _public_6f478f1
#define public_6f47936 _public_6f47936
#define public_6f47941 _public_6f47941
#define public_6f47943 _public_6f47943
#define public_6f47964 _public_6f47964
#define public_6f4796f _public_6f4796f

PROC_DECLARE(0x6f478d0, internal_6f478d0, public_6f478d0);
extern "C" NAKED register_t __cdecl internal_6f478d0()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+0xC]
        push eax
        mov esi, ecx
        call public_6f75f30
        mov ecx, dword ptr ds : [esi+0x10]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [esi+0x18], eax
        je public_6f478f1
        push eax
        call public_6eb7090
        public_6f478f1 : nop
        mov eax, dword ptr ss : [esp+0xC]
        test eax, 0x3FFFFFFF
        je public_6f4796f
/*FIXUP push offset public_6fbb058 @0x6f478fc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb058
/*FIXUP push offset public_6fd0c20 @0x6f47901*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0c20
        mov dword ptr ss : [esp+0xC], eax
        call dword ptr ds : [public_6fb3628]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [public_6fd0c20]
        add esp, 8
        cmp edx, eax
        je public_6f4796f
        mov eax, dword ptr ds : [esi+0xA4]
        mov ecx, dword ptr ds : [esi+0xA8]
        add esi, 0xA0
        cmp eax, ecx
        je public_6f47941
        public_6f47936 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f47943
        add eax, 4
        cmp eax, ecx
        jne public_6f47936
        public_6f47941 : nop
        mov eax, ecx
        public_6f47943 : nop
        cmp eax, ecx
        jne public_6f4796f
        lea edx, ss:[esp+4]
        push edx
        push 1
        push ecx
        mov ecx, esi
        call public_6f937c0
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_6f4796f
        mov ecx, dword ptr ss : [esp+4]
        public_6f47964 : nop
        cmp dword ptr ds : [eax], ecx
        je public_6f4796f
        add eax, 4
        cmp eax, esi
        jne public_6f47964
        public_6f4796f : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f478d0)
    }
}

#undef public_6f478f1
#undef public_6f47936
#undef public_6f47941
#undef public_6f47943
#undef public_6f47964
#undef public_6f4796f
