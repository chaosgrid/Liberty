#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_4e7890);
CLANG_FORWARD_PROC_SYMBOL(public_54bd40);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);

#define public_4e1be3 _public_4e1be3
#define public_4e1bf8 _public_4e1bf8
#define public_4e1c13 _public_4e1c13
#define public_4e1c1b _public_4e1c1b

PROC_DECLARE(0x4e1bb0, internal_4e1bb0, public_4e1bb0);
extern "C" NAKED register_t __cdecl internal_4e1bb0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_54bd40
        test al, al
        jne public_4e1c1b
        call public_41a3e0
        test al, al
        jne public_4e1c1b
        lea ecx, ds:[esi+0x32C]
        call public_55e280
        test al, al
        jne public_4e1be3
        lea ecx, ds:[esi+0x4A8]
        call public_55e280
        test al, al
        je public_4e1bf8
        public_4e1be3 : nop
        mov ecx, dword ptr ds : [esi+0x4D8]
        test ecx, ecx
        je public_4e1bf8
        test byte ptr ds : [ecx+0x6C], 2
        je public_4e1bf8
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x34]
        public_4e1bf8 : nop
        lea ecx, ds:[esi+0x4A8]
        call public_55e280
        test al, al
        je public_4e1c13
        mov ecx, dword ptr ds : [esi+0x494]
        mov edx, dword ptr ds : [ecx]
        pop esi
        jmp dword ptr ds : [edx+0x34]
        public_4e1c13 : nop
        mov ecx, esi
        pop esi
        jmp public_4e7890
        public_4e1c1b : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4e1bb0)
    }
}

#undef public_4e1be3
#undef public_4e1bf8
#undef public_4e1c13
#undef public_4e1c1b
