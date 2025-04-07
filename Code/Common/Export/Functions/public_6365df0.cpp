#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628be60);
CLANG_FORWARD_PROC_SYMBOL(public_6365df0);

#define public_6365edf _public_6365edf
#define public_6366005 _public_6366005

PROC_DECLARE(0x6365df0, internal_6365df0, public_6365df0);
extern "C" NAKED register_t __cdecl internal_6365df0()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        test edi, edi
        mov esi, ecx
        je public_6365edf
        mov eax, dword ptr ds : [edi+0x40]
        mov dword ptr ss : [esp+0x10], eax
        fld dword ptr ss : [esp+0x10]
        push ebx
        fmul dword ptr ss : [ebp]
        push ecx
        mov ecx, dword ptr ds : [esi]
        lea ebx, ds:[edi+0xA4]
        fstp dword ptr ss : [esp]
        push ecx
        push ebx
        mov ecx, ebx
        call public_628be60
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi+4]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fadd dword ptr ds : [ebx+4]
        fld st(1)
        fmul dword ptr ds : [eax+8]
        fadd dword ptr ds : [ebx+8]
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        fxch 
        fmul dword ptr ds : [eax]
        mov dword ptr ds : [ebx+8], edx
        fadd dword ptr ds : [ebx]
        fstp dword ptr ds : [ebx]
        fstp dword ptr ds : [ebx+4]
        pop ebx
        fld dword ptr ss : [ebp]
        fld st(0)
        fmul dword ptr ds : [esi+0x78]
        fadd dword ptr ds : [edi+0x98]
        fld st(1)
        fmul dword ptr ds : [esi+0x7C]
        fadd dword ptr ds : [edi+0x9C]
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        fxch 
        fmul dword ptr ds : [esi+0x74]
        mov dword ptr ds : [edi+0x9C], eax
        fadd dword ptr ds : [edi+0x94]
        fstp dword ptr ds : [edi+0x94]
        fstp dword ptr ds : [edi+0x98]
        fld dword ptr ss : [ebp+4]
        fld st(0)
        fmul dword ptr ds : [esi+0x88]
        fadd dword ptr ds : [edi+0x98]
        fld st(1)
        fmul dword ptr ds : [esi+0x8C]
        fadd dword ptr ds : [edi+0x9C]
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        fxch 
        fmul dword ptr ds : [esi+0x84]
        mov dword ptr ds : [edi+0x9C], ecx
        fadd dword ptr ds : [edi+0x94]
        fstp dword ptr ds : [edi+0x94]
        fstp dword ptr ds : [edi+0x98]
        public_6365edf : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_6366005
        fld dword ptr ds : [eax+0x40]
        mov ecx, dword ptr ds : [esi]
        fld st(0)
        fmul dword ptr ss : [ebp]
        fchs 
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fadd dword ptr ds : [eax+0xA8]
        fld st(1)
        fmul dword ptr ds : [ecx+8]
        fadd dword ptr ds : [eax+0xAC]
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        fxch 
        fmul dword ptr ds : [ecx]
        mov dword ptr ds : [eax+0xAC], edx
        fadd dword ptr ds : [eax+0xA4]
        fstp dword ptr ds : [eax+0xA4]
        fstp dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+4]
        fmul dword ptr ss : [ebp+4]
        fchs 
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fadd dword ptr ds : [eax+0xA8]
        fld st(1)
        fmul dword ptr ds : [ecx+8]
        fadd dword ptr ds : [eax+0xAC]
        fstp dword ptr ss : [esp+0x10]
        fxch 
        fmul dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0xAC], ecx
        fadd dword ptr ds : [eax+0xA4]
        fstp dword ptr ds : [eax+0xA4]
        fstp dword ptr ds : [eax+0xA8]
        fld dword ptr ss : [ebp]
        fchs 
        fld st(0)
        fmul dword ptr ds : [esi+0xA8]
        fadd dword ptr ds : [eax+0x98]
        fld st(1)
        fmul dword ptr ds : [esi+0xAC]
        fadd dword ptr ds : [eax+0x9C]
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        fxch 
        fmul dword ptr ds : [esi+0xA4]
        mov dword ptr ds : [eax+0x9C], edx
        fadd dword ptr ds : [eax+0x94]
        fstp dword ptr ds : [eax+0x94]
        fstp dword ptr ds : [eax+0x98]
        fld dword ptr ss : [ebp+4]
        fchs 
        fld st(0)
        fmul dword ptr ds : [esi+0xB8]
        fadd dword ptr ds : [eax+0x98]
        fld st(1)
        fmul dword ptr ds : [esi+0xBC]
        fadd dword ptr ds : [eax+0x9C]
        fstp dword ptr ss : [esp+0x10]
        fxch 
        fmul dword ptr ds : [esi+0xB4]
        fadd dword ptr ds : [eax+0x94]
        fstp dword ptr ds : [eax+0x94]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+0x98]
        mov dword ptr ds : [eax+0x9C], ecx
        public_6366005 : nop
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6365df0)
    }
}

#undef public_6365edf
#undef public_6366005
