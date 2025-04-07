#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346980);
CLANG_FORWARD_PROC_SYMBOL(public_6346dd0);

#define public_6349547 _public_6349547
#define public_63495a8 _public_63495a8
#define public_63495ad _public_63495ad

PROC_DECLARE(0x6349530, internal_6349530, public_6349530);
extern "C" NAKED register_t __cdecl internal_6349530()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push edi
        xor edi, edi
        mov di, word ptr ds : [eax+2]
        mov ebx, ecx
        dec edi
        js public_63495ad
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        public_6349547 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx+4]
        mov esi, dword ptr ds : [edx+edi*4]
        mov eax, dword ptr ds : [esi]
        test ah, 3
        jne public_63495a8
        mov eax, dword ptr ss : [ebp]
        push eax
        mov ecx, esi
        call public_6346980
        mov ecx, esi
        call public_6346dd0
        fld dword ptr ss : [ebp]
        fld st(0)
        fmul dword ptr ds : [ebx+8]
        fadd dword ptr ds : [esi+0xA8]
        fld st(1)
        fmul dword ptr ds : [ebx+0xC]
        fadd dword ptr ds : [esi+0xAC]
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        fxch 
        fmul dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi+0xAC], ecx
        fadd dword ptr ds : [esi+0xA4]
        fstp dword ptr ds : [esi+0xA4]
        fstp dword ptr ds : [esi+0xA8]
        public_63495a8 : nop
        dec edi
        jns public_6349547
        pop esi
        pop ebp
        public_63495ad : nop
        pop edi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6349530)
    }
}

#undef public_6349547
#undef public_63495a8
#undef public_63495ad
