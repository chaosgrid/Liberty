#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661abd0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_661abde _public_661abde
#define public_661abef _public_661abef
#define public_661abf2 _public_661abf2
#define public_661ac01 _public_661ac01
#define public_661ac07 _public_661ac07
#define public_661ac21 _public_661ac21
#define public_661ac31 _public_661ac31

PROC_DECLARE(0x661abd0, internal_661abd0, public_661abd0);
extern "C" NAKED register_t __cdecl internal_661abd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_661ac21
        push edi
        public_661abde : nop
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [eax+0xC]
        test edx, edx
        mov edi, ecx
        jne public_661abef
        mov dword ptr ds : [esi+0x10], ecx
        jmp public_661abf2
        public_661abef : nop
        mov dword ptr ds : [edx+0xC], ecx
        public_661abf2 : nop
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        jne public_661ac01
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+0x14], ecx
        jmp public_661ac07
        public_661ac01 : nop
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        public_661ac07 : nop
        mov edx, dword ptr ds : [esi+0x18]
        push eax
        dec edx
        mov dword ptr ds : [esi+0x18], edx
        call public_66281d0
        mov ecx, dword ptr ds : [esi+0x18]
        add esp, 4
        test ecx, ecx
        mov eax, edi
        jne public_661abde
        pop edi
        public_661ac21 : nop
        test byte ptr ss : [esp+8], 1
        je public_661ac31
        push esi
        call public_66281d0
        add esp, 4
        public_661ac31 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x661abd0)
    }
}

#undef public_661abde
#undef public_661abef
#undef public_661abf2
#undef public_661ac01
#undef public_661ac07
#undef public_661ac21
#undef public_661ac31
