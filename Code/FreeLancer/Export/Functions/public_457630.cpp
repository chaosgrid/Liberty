#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42adf0);

#define public_45765a _public_45765a
#define public_457662 _public_457662
#define public_4576b5 _public_4576b5

PROC_DECLARE(0x457630, internal_457630, public_457630);
extern "C" NAKED register_t __cdecl internal_457630()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, offset public_66d2d0
        call public_42adf0
        fstp dword ptr ss : [esp+4]
        mov al, byte ptr ds : [esi+0x77]
        test al, al
        jne public_45765a
        mov al, byte ptr ds : [esi+0x76]
        test al, al
        jne public_45765a
        mov al, byte ptr ds : [esi+0x84]
        test al, al
        jne public_457662
        public_45765a : nop
        mov dword ptr ss : [esp+4], 0
        public_457662 : nop
        mov ecx, dword ptr ds : [esi+0x80]
        test ecx, ecx
        je public_4576b5
        fld dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        fadd dword ptr ds : [esi+0x88]
        push ecx
        fstp dword ptr ss : [esp]
        call dword ptr ds : [eax+0x80]
        fld dword ptr ds : [esi+0x8C]
        mov ecx, dword ptr ds : [esi+0x80]
        fmul qword ptr ds : [public_5ca320]
        mov edx, dword ptr ds : [ecx]
        push ecx
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edx+0x84]
        mov ecx, dword ptr ds : [esi+0x80]
        mov eax, dword ptr ds : [ecx]
        add esi, 0xA8
        push esi
        call dword ptr ds : [eax+0x8C]
        public_4576b5 : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x457630)
    }
}

#undef public_45765a
#undef public_457662
#undef public_4576b5
