#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636efc0);

#define public_636efd8 _public_636efd8
#define public_636eff2 _public_636eff2
#define public_636eff7 _public_636eff7
#define public_636f030 _public_636f030

PROC_DECLARE(0x636efc0, internal_636efc0, public_636efc0);
extern "C" NAKED register_t __cdecl internal_636efc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b840]
        mov ecx, dword ptr ds : [public_658b83c]
        cmp ecx, eax
        mov eax, dword ptr ss : [esp+4]
        jne public_636efd8
        mov dword ptr ds : [public_658b840], eax
        public_636efd8 : nop
        or dword ptr ds : [eax+0x14], 0x10000000
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        je public_636eff2
        mov dword ptr ds : [edx], eax
        jmp public_636eff7
        public_636eff2 : nop
        mov dword ptr ds : [public_658b838], eax
        public_636eff7 : nop
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [public_658b848]
        mov ecx, dword ptr ds : [public_658b078]
        inc edx
        cmp ecx, 4
        mov dword ptr ds : [public_658b848], edx
        jl public_636f030
        mov eax, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [public_658b7fc]
        and eax, 0xFFFFFF
        push eax
/*FIXUP push offset public_63eed00 @0x636f021*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eed00
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_636f030 : nop
        ret 
        UNREACHABLE_TRAP(0x636efc0)
    }
}

#undef public_636efd8
#undef public_636eff2
#undef public_636eff7
#undef public_636f030
