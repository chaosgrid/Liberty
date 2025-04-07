#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3347);
CLANG_FORWARD_PROC_SYMBOL(public_6ad75ab);

#define public_6ad3381 _public_6ad3381

PROC_DECLARE(0x6ad3347, internal_6ad3347, public_6ad3347);
extern "C" NAKED register_t __cdecl internal_6ad3347()
{
    __asm
    {
        push ebp
        mov ebp, esp
        add esp, 0xFFFFFFE0
        mov dword ptr ss : [ebp-0x20], eax
        fstp qword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x1C], ecx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        mov dword ptr ss : [ebp-0x18], eax
        mov dword ptr ss : [ebp-0x14], ecx
        lea eax, ss:[ebp+8]
        lea ecx, ss:[ebp-0x20]
        push eax
        push ecx
        push edx
        call public_6ad75ab
        add esp, 0xC
        fld qword ptr ss : [ebp-8]
        cmp word ptr ss : [ebp+8], 0x27F
        je public_6ad3381
        fldcw word ptr ss : [ebp+8]
        public_6ad3381 : nop
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad3347)
    }
}

#undef public_6ad3381
