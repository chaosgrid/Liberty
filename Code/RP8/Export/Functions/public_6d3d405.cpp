#include "RP8-PCH.h"


#define public_6d3d41f _public_6d3d41f
#define public_6d3d422 _public_6d3d422
#define public_6d3d636 _public_6d3d636

PROC_DECLARE(0x6d3d405, internal_6d3d405, public_6d3d405);
extern "C" NAKED register_t __cdecl internal_6d3d405()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x40
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+0xC]
        cmp eax, edx
        mov ecx, dword ptr ss : [ebp+0x10]
        push esi
        je public_6d3d41f
        cmp eax, ecx
        mov esi, eax
        jne public_6d3d422
        public_6d3d41f : nop
        lea esi, ss:[ebp-0x40]
        public_6d3d422 : nop
        fld dword ptr ds : [edx+0xC]
        fmul dword ptr ds : [ecx+0x30]
        fld dword ptr ds : [edx]
        fmul dword ptr ds : [ecx]
        faddp 
        fld dword ptr ds : [edx+8]
        fmul dword ptr ds : [ecx+0x20]
        faddp 
        fld dword ptr ds : [ecx+0x10]
        fmul dword ptr ds : [edx+4]
        faddp 
        fstp dword ptr ds : [esi]
        fld dword ptr ds : [edx+0x10]
        fmul dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+0x30]
        fmul dword ptr ds : [edx+0x1C]
        faddp 
        fld dword ptr ds : [ecx+0x20]
        fmul dword ptr ds : [edx+0x18]
        faddp 
        fld dword ptr ds : [ecx+0x10]
        fmul dword ptr ds : [edx+0x14]
        faddp 
        fstp dword ptr ds : [esi+4]
        fld dword ptr ds : [edx+0x28]
        fmul dword ptr ds : [ecx+0x20]
        fld dword ptr ds : [edx+0x24]
        fmul dword ptr ds : [ecx+0x10]
        faddp 
        fld dword ptr ds : [ecx+0x30]
        fmul dword ptr ds : [edx+0x2C]
        faddp 
        fld dword ptr ds : [edx+0x20]
        fmul dword ptr ds : [ecx]
        faddp 
        fstp dword ptr ds : [esi+8]
        fld dword ptr ds : [edx+0x34]
        fmul dword ptr ds : [ecx+0x10]
        fld dword ptr ds : [edx+0x3C]
        fmul dword ptr ds : [ecx+0x30]
        faddp 
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [edx+0x30]
        faddp 
        fld dword ptr ds : [edx+0x38]
        fmul dword ptr ds : [ecx+0x20]
        faddp 
        fstp dword ptr ds : [esi+0xC]
        fld dword ptr ds : [ecx+0x24]
        fmul dword ptr ds : [edx+8]
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [edx]
        faddp 
        fld dword ptr ds : [ecx+0x34]
        fmul dword ptr ds : [edx+0xC]
        faddp 
        fld dword ptr ds : [edx+4]
        fmul dword ptr ds : [ecx+0x14]
        faddp 
        fstp dword ptr ds : [esi+0x10]
        fld dword ptr ds : [ecx+0x34]
        fmul dword ptr ds : [edx+0x1C]
        fld dword ptr ds : [ecx+0x24]
        fmul dword ptr ds : [edx+0x18]
        faddp 
        fld dword ptr ds : [edx+0x14]
        fmul dword ptr ds : [ecx+0x14]
        faddp 
        fld dword ptr ds : [edx+0x10]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fstp dword ptr ds : [esi+0x14]
        fld dword ptr ds : [edx+0x24]
        fmul dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [ecx+0x34]
        fmul dword ptr ds : [edx+0x2C]
        faddp 
        fld dword ptr ds : [ecx+0x24]
        fmul dword ptr ds : [edx+0x28]
        faddp 
        fld dword ptr ds : [edx+0x20]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fstp dword ptr ds : [esi+0x18]
        fld dword ptr ds : [edx+0x34]
        fmul dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [ecx+0x34]
        fmul dword ptr ds : [edx+0x3C]
        faddp 
        fld dword ptr ds : [ecx+0x24]
        fmul dword ptr ds : [edx+0x38]
        faddp 
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [edx+0x30]
        faddp 
        fstp dword ptr ds : [esi+0x1C]
        fld dword ptr ds : [ecx+0x28]
        fmul dword ptr ds : [edx+8]
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [edx]
        faddp 
        fld dword ptr ds : [edx+4]
        fmul dword ptr ds : [ecx+0x18]
        faddp 
        fld dword ptr ds : [ecx+0x38]
        fmul dword ptr ds : [edx+0xC]
        faddp 
        fstp dword ptr ds : [esi+0x20]
        fld dword ptr ds : [ecx+0x38]
        fmul dword ptr ds : [edx+0x1C]
        fld dword ptr ds : [ecx+0x28]
        fmul dword ptr ds : [edx+0x18]
        faddp 
        fld dword ptr ds : [edx+0x14]
        fmul dword ptr ds : [ecx+0x18]
        faddp 
        fld dword ptr ds : [edx+0x10]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fstp dword ptr ds : [esi+0x24]
        fld dword ptr ds : [edx+0x24]
        fmul dword ptr ds : [ecx+0x18]
        fld dword ptr ds : [ecx+0x38]
        fmul dword ptr ds : [edx+0x2C]
        faddp 
        fld dword ptr ds : [ecx+0x28]
        fmul dword ptr ds : [edx+0x28]
        faddp 
        fld dword ptr ds : [edx+0x20]
        fmul dword ptr ds : [ecx+8]
        faddp 
        fstp dword ptr ds : [esi+0x28]
        fld dword ptr ds : [edx+0x34]
        fmul dword ptr ds : [ecx+0x18]
        fld dword ptr ds : [ecx+0x38]
        fmul dword ptr ds : [edx+0x3C]
        faddp 
        fld dword ptr ds : [ecx+0x28]
        fmul dword ptr ds : [edx+0x38]
        faddp 
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [edx+0x30]
        faddp 
        fstp dword ptr ds : [esi+0x2C]
        fld dword ptr ds : [ecx+0x2C]
        fmul dword ptr ds : [edx+8]
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [edx]
        faddp 
        fld dword ptr ds : [edx+4]
        fmul dword ptr ds : [ecx+0x1C]
        faddp 
        fld dword ptr ds : [ecx+0x3C]
        fmul dword ptr ds : [edx+0xC]
        faddp 
        fstp dword ptr ds : [esi+0x30]
        fld dword ptr ds : [ecx+0x3C]
        fmul dword ptr ds : [edx+0x1C]
        fld dword ptr ds : [ecx+0x2C]
        fmul dword ptr ds : [edx+0x18]
        faddp 
        fld dword ptr ds : [edx+0x14]
        cmp esi, eax
        fmul dword ptr ds : [ecx+0x1C]
        faddp 
        fld dword ptr ds : [edx+0x10]
        fmul dword ptr ds : [ecx+0xC]
        faddp 
        fstp dword ptr ds : [esi+0x34]
        fld dword ptr ds : [edx+0x24]
        fmul dword ptr ds : [ecx+0x1C]
        fld dword ptr ds : [ecx+0x3C]
        fmul dword ptr ds : [edx+0x2C]
        faddp 
        fld dword ptr ds : [ecx+0x2C]
        fmul dword ptr ds : [edx+0x28]
        faddp 
        fld dword ptr ds : [edx+0x20]
        fmul dword ptr ds : [ecx+0xC]
        faddp 
        fstp dword ptr ds : [esi+0x38]
        fld dword ptr ds : [edx+0x34]
        fmul dword ptr ds : [ecx+0x1C]
        fld dword ptr ds : [ecx+0x3C]
        fmul dword ptr ds : [edx+0x3C]
        faddp 
        fld dword ptr ds : [ecx+0x2C]
        fmul dword ptr ds : [edx+0x38]
        faddp 
        fld dword ptr ds : [ecx+0xC]
        fmul dword ptr ds : [edx+0x30]
        faddp 
        fstp dword ptr ds : [esi+0x3C]
        je public_6d3d636
        push edi
        push 0x10
        pop ecx
        mov edi, eax
        rep movsd
        pop edi
        public_6d3d636 : nop
        pop esi
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d3d405)
    }
}

#undef public_6d3d41f
#undef public_6d3d422
#undef public_6d3d636
