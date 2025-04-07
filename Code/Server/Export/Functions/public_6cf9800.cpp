#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00670);

#define public_6cf9869 _public_6cf9869
#define public_6cf986b _public_6cf986b
#define public_6cf986d _public_6cf986d
#define public_6cf987b _public_6cf987b

PROC_DECLARE(0x6cf9800, internal_6cf9800, public_6cf9800);
extern "C" NAKED register_t __cdecl internal_6cf9800()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        test ecx, 0x3FFFFFFF
        push esi
        mov eax, 0xFFFFFFFC
        je public_6cf986b
        push ecx
        mov esi, 0xFFFFFFFE
        call public_6d00670
        add esp, 4
        test eax, eax
        je public_6cf987b
        add eax, 0xC
        xor edx, edx
        test eax, eax
        je public_6cf986d
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_6cf986d
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x303
        cmp eax, 0x303
        jne public_6cf986d
        fld dword ptr ds : [ecx+0x1AC]
        mov esi, dword ptr ss : [esp+0xC]
        fld st(0)
        fstp dword ptr ds : [esi]
        fcom dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        mov eax, edx
        jne public_6cf9869
        fld dword ptr ds : [ecx+0x38]
        fsubr st, st(1)
        fstp dword ptr ds : [esi]
        public_6cf9869 : nop
        fstp st(0)
        public_6cf986b : nop
        pop esi
        ret 
        public_6cf986d : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], 0
        mov eax, edx
        pop esi
        ret 
        public_6cf987b : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cf9800)
    }
}

#undef public_6cf9869
#undef public_6cf986b
#undef public_6cf986d
#undef public_6cf987b
