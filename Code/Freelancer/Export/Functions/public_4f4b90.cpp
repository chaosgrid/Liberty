#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f4b90);

#define public_4f4bc9 _public_4f4bc9
#define public_4f4bcb _public_4f4bcb
#define public_4f4c40 _public_4f4c40

PROC_DECLARE(0x4f4b90, internal_4f4b90, public_4f4b90);
extern "C" NAKED register_t __cdecl internal_4f4b90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x364]
        sub esp, 0xC
        test eax, eax
        je public_4f4c40
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4f4c40
        mov al, byte ptr ds : [ecx+0x38C]
        test al, al
        je public_4f4c40
        mov ecx, dword ptr ds : [ecx+0x364]
        test ecx, ecx
        je public_4f4bc9
        add ecx, 0xFFFFFFF8
        jmp public_4f4bcb
        public_4f4bc9 : nop
        xor ecx, ecx
        public_4f4bcb : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp], ecx
        fld dword ptr ss : [esp]
        fsub dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], edx
        fld dword ptr ss : [esp+4]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+8]
        fabs 
        fcomp qword ptr ds : [public_5ca228]
        fnstsw ax
        test ah, 5
        jp public_4f4c40
        fld dword ptr ss : [esp+4]
        fabs 
        fcomp qword ptr ds : [public_5ca228]
        fnstsw ax
        test ah, 5
        jp public_4f4c40
        fld dword ptr ss : [esp+8]
        fabs 
        fcomp qword ptr ds : [public_5ca228]
        fnstsw ax
        test ah, 5
        jp public_4f4c40
        mov al, 1
        add esp, 0xC
        ret 4
        public_4f4c40 : nop
        xor al, al
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x4f4b90)
    }
}

#undef public_4f4bc9
#undef public_4f4bcb
#undef public_4f4c40
