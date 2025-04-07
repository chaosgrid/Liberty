#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661ec30);

#define public_661ec44 _public_661ec44
#define public_661ec4a _public_661ec4a
#define public_661ec59 _public_661ec59
#define public_661ec5f _public_661ec5f

PROC_DECLARE(0x661ec30, internal_661ec30, public_661ec30);
extern "C" NAKED register_t __cdecl internal_661ec30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push edi
        mov edx, dword ptr ds : [eax+0x18]
        test edx, edx
        jne public_661ec44
        mov edx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [ecx+0x1C], edx
        jmp public_661ec4a
        public_661ec44 : nop
        mov edi, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [edx+0x14], edi
        public_661ec4a : nop
        mov edx, dword ptr ds : [eax+0x14]
        test edx, edx
        jne public_661ec59
        mov edx, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [ecx+0x20], edx
        jmp public_661ec5f
        public_661ec59 : nop
        mov edi, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [edx+0x18], edi
        public_661ec5f : nop
        mov edx, dword ptr ds : [ecx+0x24]
        pop edi
        dec edx
        mov dword ptr ds : [ecx+0x24], edx
        mov dword ptr ds : [eax+0x10], 0
        mov dword ptr ds : [eax+0x14], 0
        mov dword ptr ds : [eax+0x18], 0
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x661ec30)
    }
}

#undef public_661ec44
#undef public_661ec4a
#undef public_661ec59
#undef public_661ec5f
