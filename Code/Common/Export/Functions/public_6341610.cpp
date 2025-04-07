#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_6341616 _public_6341616
#define public_6341625 _public_6341625
#define public_6341631 _public_6341631
#define public_6341640 _public_6341640

PROC_DECLARE(0x6341610, internal_6341610, public_6341610);
extern "C" NAKED register_t __cdecl internal_6341610()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_6341631
        public_6341616 : nop
        mov edx, dword ptr ds : [eax]
        cmp edx, ecx
        je public_6341625
        lea eax, ds:[edx+4]
        test eax, eax
        jne public_6341616
        jmp public_6341631
        public_6341625 : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [ecx+4], 0
        public_6341631 : nop
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6341640
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [eax], ecx
        public_6341640 : nop
        mov dword ptr ds : [ecx], eax
        ret 4
        UNREACHABLE_TRAP(0x6341610)
    }
}

#undef public_6341616
#undef public_6341625
#undef public_6341631
#undef public_6341640
