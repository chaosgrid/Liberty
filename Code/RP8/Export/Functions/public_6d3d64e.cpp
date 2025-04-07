#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5cf56);

#define public_6d3d930 _public_6d3d930
#define public_6d3d9d7 _public_6d3d9d7

PROC_DECLARE(0x6d3d64e, internal_6d3d64e, public_6d3d64e);
extern "C" NAKED register_t __cdecl internal_6d3d64e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x54
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x10]
        fld dword ptr ds : [eax]
        fld dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x1C], ecx
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [ebp-0x20], ecx
        fld dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ds : [eax+0x20]
        fmul st, st(2)
        mov dword ptr ss : [ebp-0x18], ecx
        fld dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ds : [eax+0x24]
        fmul st, st(2)
        mov dword ptr ss : [ebp-4], ecx
        mov ecx, dword ptr ds : [eax+0x30]
        mov dword ptr ss : [ebp-0x14], ecx
        fsubp 
        mov ecx, dword ptr ds : [eax+0x34]
        mov dword ptr ss : [ebp+0x10], ecx
        mov ecx, dword ptr ds : [eax+0x38]
        fstp dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x10], ecx
        fld dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+0x3C]
        fmul st, st(2)
        fld dword ptr ss : [ebp-0x18]
        fmul st, st(2)
        fsubp 
        fstp dword ptr ss : [ebp-8]
        fld dword ptr ss : [ebp+0x10]
        fmul st, st(2)
        fld dword ptr ss : [ebp-0x14]
        fmul st, st(2)
        fsubp 
        fstp dword ptr ss : [ebp-0x2C]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [ebp-4]
        fmul dword ptr ss : [ebp-0x1C]
        fld dword ptr ss : [ebp-0x18]
        fmul dword ptr ss : [ebp-0x20]
        fsubp 
        fstp dword ptr ss : [ebp-0x38]
        fld dword ptr ss : [ebp+0x10]
        fmul dword ptr ss : [ebp-0x1C]
        fld dword ptr ss : [ebp-0x14]
        fmul dword ptr ss : [ebp-0x20]
        fsubp 
        fstp dword ptr ss : [ebp-0x34]
        fld dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp+0x10], ecx
        fmul dword ptr ss : [ebp-0x18]
        fld dword ptr ss : [ebp-0x14]
        fmul dword ptr ss : [ebp-4]
        fsubp 
        fstp dword ptr ss : [ebp-0x30]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0xC]
        fld dword ptr ds : [eax+0x18]
        fst dword ptr ss : [ebp-0x28]
        fld dword ptr ds : [eax+0x1C]
        fst dword ptr ss : [ebp-0x20]
        fld dword ptr ds : [eax+0x28]
        fst dword ptr ss : [ebp-0x24]
        fld dword ptr ds : [eax+0x2C]
        fst dword ptr ss : [ebp-4]
        fld st(5)
        fmul dword ptr ss : [ebp-0x38]
        fld st(4)
        fmul dword ptr ss : [ebp-8]
        fsubp 
        fld st(2)
        fmul dword ptr ss : [ebp-0xC]
        faddp 
        fstp dword ptr ss : [ebp-0x54]
        fld st(3)
        fmul dword ptr ss : [ebp-0x2C]
        fld dword ptr ss : [ebp-0x10]
        fmul dword ptr ss : [ebp-0xC]
        fsubp 
        fld st(6)
        fmul dword ptr ss : [ebp-0x34]
        fsubp 
        fstp dword ptr ss : [ebp-0x50]
        fld st(5)
        fmul dword ptr ss : [ebp-0x30]
        fld st(2)
        fmul dword ptr ss : [ebp-0x2C]
        fsubp 
        fld dword ptr ss : [ebp-0x10]
        fmul dword ptr ss : [ebp-8]
        faddp 
        fstp dword ptr ss : [ebp-0x4C]
        fld st(1)
        fmul dword ptr ss : [ebp-0x34]
        fld dword ptr ss : [ebp-0x10]
        fmul dword ptr ss : [ebp-0x38]
        fsubp 
        fld st(4)
        fmul dword ptr ss : [ebp-0x30]
        fsubp 
        fstp dword ptr ss : [ebp-0x48]
        fld dword ptr ss : [ebp-8]
        fmul st, st(3)
        fld dword ptr ss : [ebp-0xC]
        fmul st, st(2)
        fsubp 
        fld dword ptr ss : [ebp-0x38]
        fmul st, st(6)
        fsubp 
        fstp dword ptr ss : [ebp-0x44]
        fld dword ptr ss : [ebp-0x34]
        fmul st, st(5)
        fld dword ptr ss : [ebp-0x2C]
        fmul st, st(4)
        fsubp 
        fld dword ptr ss : [ebp-0xC]
        fmul dword ptr ss : [ebp+0x10]
        faddp 
        fstp dword ptr ss : [ebp-0x40]
        fld dword ptr ss : [ebp-0x2C]
        fmul st, st(1)
        fld dword ptr ss : [ebp-8]
        fmul dword ptr ss : [ebp+0x10]
        fsubp 
        fld dword ptr ss : [ebp-0x30]
        fmul st, st(6)
        fsubp 
        fstp dword ptr ss : [ebp-0x3C]
        fld dword ptr ss : [ebp-0x30]
        fmul st, st(3)
        fld dword ptr ss : [ebp-0x34]
        fmul st, st(2)
        fsubp 
        fld dword ptr ss : [ebp-0x38]
        fmul dword ptr ss : [ebp+0x10]
        faddp 
        fstp dword ptr ss : [ebp-0x2C]
        fstp st(0)
        fstp st(0)
        fld st(3)
        fmul st, st(1)
        fld st(2)
        fmul st, st(4)
        fsubp 
        fstp dword ptr ss : [ebp-0xC]
        fstp st(0)
        fstp st(0)
        fld st(1)
        fmul dword ptr ss : [ebp-4]
        fld dword ptr ss : [ebp-0x24]
        fmul st, st(2)
        fsubp 
        fstp dword ptr ss : [ebp-8]
        fld st(1)
        fmul dword ptr ss : [ebp+0x10]
        fld dword ptr ss : [ebp-0x10]
        fmul st, st(2)
        fsubp 
        fstp st(2)
        fstp st(0)
        fld dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ds : [eax]
        fmul dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x38], ecx
        fld dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax+0x10]
        fmul dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-0x1C], ecx
        mov ecx, dword ptr ds : [eax+0x20]
        mov dword ptr ss : [ebp-0x18], ecx
        fsubp 
        mov ecx, dword ptr ds : [eax+0x24]
        fld dword ptr ss : [ebp-0x28]
        fmul dword ptr ss : [ebp+0x10]
        fld dword ptr ss : [ebp-0x10]
        fmul dword ptr ss : [ebp-0x20]
        fsubp 
        fld dword ptr ss : [ebp-0x24]
        fmul dword ptr ss : [ebp+0x10]
        fld dword ptr ss : [ebp-0x10]
        fmul dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-4], ecx
        mov ecx, dword ptr ds : [eax+0x30]
        mov dword ptr ss : [ebp-0x14], ecx
        fsubp 
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+0x34]
        fld dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp+0x10], eax
        fmul st, st(1)
        fld dword ptr ss : [ebp-0xC]
        fmul dword ptr ss : [ebp-4]
        fsubp 
        fld st(5)
        fmul st, st(3)
        fsubp 
        fstp dword ptr ss : [ebp-0x10]
        fld st(3)
        fmul st, st(2)
        fld st(6)
        fmul st, st(2)
        fsubp 
        fld dword ptr ss : [ebp-0xC]
        fmul dword ptr ss : [ebp+0x10]
        faddp 
        fstp dword ptr ss : [ebp-0x24]
        fld st(5)
        fmul dword ptr ss : [ebp-4]
        fld dword ptr ss : [ebp-8]
        fmul dword ptr ss : [ebp+0x10]
        fsubp 
        fld st(3)
        fmul st, st(3)
        fsubp 
        fstp dword ptr ss : [ebp-0x28]
        fld st(2)
        fmul st, st(1)
        fld st(4)
        fmul dword ptr ss : [ebp-4]
        fsubp 
        fld st(5)
        fmul dword ptr ss : [ebp+0x10]
        faddp 
        fstp dword ptr ss : [ebp-0x34]
        fstp st(0)
        fstp st(0)
        fld st(2)
        fmul dword ptr ss : [ebp-0x38]
        fld dword ptr ss : [ebp-8]
        fmul dword ptr ss : [ebp-0x1C]
        fsubp 
        fld dword ptr ss : [ebp-0xC]
        fmul dword ptr ss : [ebp-0x18]
        faddp 
        fstp dword ptr ss : [ebp+0x10]
        fld st(3)
        fmul dword ptr ss : [ebp-0x1C]
        fld dword ptr ss : [ebp-0xC]
        fmul dword ptr ss : [ebp-0x14]
        fsubp 
        fld st(2)
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        fmul dword ptr ss : [ebp-0x38]
        fsubp 
        fstp dword ptr ss : [ebp-4]
        fld dword ptr ss : [ebp-0x38]
        fmul st, st(1)
        fld st(4)
        fmul dword ptr ss : [ebp-0x18]
        fsubp 
        fld dword ptr ss : [ebp-8]
        fmul dword ptr ss : [ebp-0x14]
        faddp 
        fstp dword ptr ss : [ebp-0x20]
        fld st(1)
        fmul dword ptr ss : [ebp-0x18]
        fld st(3)
        fmul dword ptr ss : [ebp-0x14]
        fsubp 
        fld st(1)
        fmul dword ptr ss : [ebp-0x1C]
        fsubp 
        fstp dword ptr ss : [ebp-0x30]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [ebp-0x10]
        fmul dword ptr ss : [ebp-0x14]
        fld dword ptr ss : [ebp-0x24]
        fmul dword ptr ss : [ebp-0x18]
        faddp 
        fld dword ptr ss : [ebp-0x28]
        fmul dword ptr ss : [ebp-0x1C]
        faddp 
        fld dword ptr ss : [ebp-0x34]
        fmul dword ptr ss : [ebp-0x38]
        faddp 
        je public_6d3d930
        fst dword ptr ds : [eax]
        public_6d3d930 : nop
        fld1 
        push ecx
        fdiv st, st(1)
        push ecx
        fstp dword ptr ss : [ebp-8]
        fstp st(0)
        fld dword ptr ss : [ebp-8]
        fstp qword ptr ss : [esp]
        call public_6d5cf56
        test eax, eax
        pop ecx
        pop ecx
        je public_6d3d9d7
        mov eax, dword ptr ss : [ebp+8]
        fld dword ptr ss : [ebp-8]
        fld dword ptr ss : [ebp-0x34]
        fmul st, st(1)
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [ebp-0x28]
        fmul st, st(1)
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [ebp-0x24]
        fmul st, st(1)
        fstp dword ptr ds : [eax+8]
        fld dword ptr ss : [ebp-0x10]
        fmul st, st(1)
        fstp dword ptr ds : [eax+0xC]
        fld dword ptr ss : [ebp-0x30]
        fmul st, st(1)
        fstp dword ptr ds : [eax+0x10]
        fld dword ptr ss : [ebp-0x20]
        fmul st, st(1)
        fstp dword ptr ds : [eax+0x14]
        fld dword ptr ss : [ebp-4]
        fmul st, st(1)
        fstp dword ptr ds : [eax+0x18]
        fld dword ptr ss : [ebp+0x10]
        fmul st, st(1)
        fstp dword ptr ds : [eax+0x1C]
        fld dword ptr ss : [ebp-0x2C]
        fmul st, st(1)
        fstp dword ptr ds : [eax+0x20]
        fld dword ptr ss : [ebp-0x3C]
        fmul st, st(1)
        fstp dword ptr ds : [eax+0x24]
        fld dword ptr ss : [ebp-0x40]
        fmul st, st(1)
        fstp dword ptr ds : [eax+0x28]
        fld dword ptr ss : [ebp-0x44]
        fmul st, st(1)
        fstp dword ptr ds : [eax+0x2C]
        fld dword ptr ss : [ebp-0x48]
        fmul st, st(1)
        fstp dword ptr ds : [eax+0x30]
        fld dword ptr ss : [ebp-0x4C]
        fmul st, st(1)
        fstp dword ptr ds : [eax+0x34]
        fld dword ptr ss : [ebp-0x50]
        fmul st, st(1)
        fstp dword ptr ds : [eax+0x38]
        fld dword ptr ss : [ebp-0x54]
        fmul st, st(1)
        fstp dword ptr ds : [eax+0x3C]
        fstp st(0)
        public_6d3d9d7 : nop
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d3d64e)
    }
}

#undef public_6d3d930
#undef public_6d3d9d7
