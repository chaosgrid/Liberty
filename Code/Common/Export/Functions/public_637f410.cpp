#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637f410);

#define public_637f461 _public_637f461
#define public_637f46e _public_637f46e

PROC_DECLARE(0x637f410, internal_637f410, public_637f410);
extern "C" NAKED register_t __cdecl internal_637f410()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b864]
        test eax, eax
        je public_637f46e
        mov eax, dword ptr ds : [public_658b0e8]
        test eax, eax
        jne public_637f46e
        mov eax, dword ptr ds : [public_658b0a0]
        test eax, eax
        jne public_637f46e
        fld qword ptr ds : [public_658b878]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_637f46e
        mov eax, dword ptr ds : [public_658b078]
        test eax, eax
        je public_637f461
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
/*FIXUP push offset public_63f5c3c @0x637f452*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5c3c
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_637f461 : nop
        push 3
/*FIXUP push offset public_658b78c @0x637f463*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b78c
        call dword ptr ds : [public_63992b0]
        public_637f46e : nop
        ret 
        UNREACHABLE_TRAP(0x637f410)
    }
}

#undef public_637f461
#undef public_637f46e
