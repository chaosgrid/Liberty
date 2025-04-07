#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66001c0);

#define public_6600204 _public_6600204
#define public_6600219 _public_6600219
#define public_660022a _public_660022a
#define public_660022e _public_660022e
#define public_660023f _public_660023f
#define public_660024e _public_660024e

PROC_DECLARE(0x66001c0, internal_66001c0, public_66001c0);
extern "C" NAKED register_t __cdecl internal_66001c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [eax]
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+0x10]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ss : [esp+4]
        fabs 
        fcomp qword ptr ds : [public_6601580]
        fnstsw ax
        test ah, 0x41
        je public_6600204
        fld st(0)
        fabs 
        fcomp qword ptr ds : [public_6601580]
        fnstsw ax
        test ah, 0x41
        je public_6600204
        fstp st(0)
        xor al, al
        ret 0xC
        public_6600204 : nop
        fld dword ptr ss : [esp+4]
        mov dl, 1
        fcomp dword ptr ds : [ecx+0x14]
        fnstsw ax
        test ah, 5
        jp public_6600219
        mov eax, dword ptr ds : [ecx+0x14]
        jmp public_660022a
        public_6600219 : nop
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [ecx+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_660022e
        mov eax, dword ptr ds : [ecx+0x18]
        public_660022a : nop
        mov dword ptr ss : [esp+4], eax
        public_660022e : nop
        fcom dword ptr ds : [ecx+0x1C]
        fnstsw ax
        test ah, 5
        jp public_660023f
        fstp st(0)
        fld dword ptr ds : [ecx+0x1C]
        jmp public_660024e
        public_660023f : nop
        fcom dword ptr ds : [ecx+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_660024e
        fstp st(0)
        fld dword ptr ds : [ecx+0x20]
        public_660024e : nop
        fld dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [ecx]
        fstp dword ptr ds : [eax]
        mov al, dl
        ret 0xC
        UNREACHABLE_TRAP(0x66001c0)
    }
}

#undef public_6600204
#undef public_6600219
#undef public_660022a
#undef public_660022e
#undef public_660023f
#undef public_660024e
