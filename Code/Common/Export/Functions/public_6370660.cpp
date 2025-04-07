#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6370660);

#define public_6370677 _public_6370677
#define public_6370682 _public_6370682
#define public_6370691 _public_6370691
#define public_63706c7 _public_63706c7

PROC_DECLARE(0x6370660, internal_6370660, public_6370660);
extern "C" NAKED register_t __cdecl internal_6370660()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [public_658b840]
        jne public_6370677
        mov dword ptr ds : [public_658b840], edx
        public_6370677 : nop
        test ecx, ecx
        je public_6370682
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [edx+4], ecx
        jmp public_6370691
        public_6370682 : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_658b838], ecx
        mov dword ptr ds : [ecx+4], 0
        public_6370691 : nop
        mov edx, dword ptr ds : [public_658b848]
        mov ecx, dword ptr ds : [public_658b078]
        dec edx
        cmp ecx, 4
        mov dword ptr ds : [public_658b848], edx
        jl public_63706c7
        mov eax, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [public_658b7fc]
        and eax, 0xFFFFFF
        push eax
/*FIXUP push offset public_63ef4e8 @0x63706b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef4e8
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_63706c7 : nop
        ret 
        UNREACHABLE_TRAP(0x6370660)
    }
}

#undef public_6370677
#undef public_6370682
#undef public_6370691
#undef public_63706c7
