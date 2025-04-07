#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636de70);
CLANG_FORWARD_PROC_SYMBOL(public_6379b10);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_636de7e _public_636de7e
#define public_636de95 _public_636de95
#define public_636de98 _public_636de98
#define public_636dea6 _public_636dea6
#define public_636dec3 _public_636dec3

PROC_DECLARE(0x636de70, internal_636de70, public_636de70);
extern "C" NAKED register_t __cdecl internal_636de70()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        push edi
        mov edi, dword ptr ds : [eax+4]
        test edi, edi
        jl public_636de98
        public_636de7e : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [edx+edi*8+4]
        test eax, eax
        je public_636de95
        push eax
        call public_6391d5a
        add esp, 4
        public_636de95 : nop
        dec edi
        jns public_636de7e
        public_636de98 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_636dea6
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+4]
        public_636dea6 : nop
        mov edi, dword ptr ds : [esi]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        je public_636dec3
        mov ecx, edi
        call public_6379b10
        push edi
        call public_6391d5a
        add esp, 4
        public_636dec3 : nop
        pop edi
        mov dword ptr ds : [esi], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x636de70)
    }
}

#undef public_636de7e
#undef public_636de95
#undef public_636de98
#undef public_636dea6
#undef public_636dec3
