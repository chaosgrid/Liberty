#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63705e0);

#define public_63705f7 _public_63705f7
#define public_6370604 _public_6370604
#define public_6370611 _public_6370611
#define public_637061d _public_637061d
#define public_6370629 _public_6370629
#define public_6370659 _public_6370659

PROC_DECLARE(0x63705e0, internal_63705e0, public_63705e0);
extern "C" NAKED register_t __cdecl internal_63705e0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x30]
        mov edx, dword ptr ds : [ecx+0x2C]
        cmp ecx, dword ptr ds : [public_658b81c]
        jne public_63705f7
        mov dword ptr ds : [public_658b81c], eax
        public_63705f7 : nop
        cmp ecx, dword ptr ds : [public_658b818]
        jne public_6370604
        mov dword ptr ds : [public_658b818], eax
        public_6370604 : nop
        cmp ecx, dword ptr ds : [public_658b820]
        jne public_6370611
        mov dword ptr ds : [public_658b820], eax
        public_6370611 : nop
        test edx, edx
        je public_637061d
        mov dword ptr ds : [edx+0x30], eax
        mov dword ptr ds : [eax+0x2C], edx
        jmp public_6370629
        public_637061d : nop
        mov dword ptr ds : [public_658b810], eax
        mov dword ptr ds : [eax+0x2C], 0
        public_6370629 : nop
        mov edx, dword ptr ds : [public_658b844]
        mov eax, dword ptr ds : [public_658b078]
        dec edx
        cmp eax, 4
        mov dword ptr ds : [public_658b844], edx
        jl public_6370659
        mov eax, dword ptr ds : [ecx+0x4C]
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
/*FIXUP push offset public_63ef4bc @0x637064a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef4bc
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_6370659 : nop
        ret 
        UNREACHABLE_TRAP(0x63705e0)
    }
}

#undef public_63705f7
#undef public_6370604
#undef public_6370611
#undef public_637061d
#undef public_6370629
#undef public_6370659
