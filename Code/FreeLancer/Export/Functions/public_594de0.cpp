#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_594de0);

#define public_594df2 _public_594df2
#define public_594e0d _public_594e0d
#define public_594e11 _public_594e11
#define public_594e16 _public_594e16

PROC_DECLARE(0x594de0, internal_594de0, public_594de0);
extern "C" NAKED register_t __cdecl internal_594de0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax+4]
        mov ebx, eax
        cmp esi, dword ptr ds : [edi+8]
        je public_594e16
        public_594df2 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        lea ecx, ds:[esi+0xC]
        push ecx
        call dword ptr ds : [public_5c6fa4]
        add esp, 8
        test al, al
        je public_594e0d
        mov esi, dword ptr ds : [esi+8]
        jmp public_594e11
        public_594e0d : nop
        mov ebx, esi
        mov esi, dword ptr ds : [esi]
        public_594e11 : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_594df2
        public_594e16 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x594de0)
    }
}

#undef public_594df2
#undef public_594e0d
#undef public_594e11
#undef public_594e16
