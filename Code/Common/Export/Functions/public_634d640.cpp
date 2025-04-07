#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63484e0);
CLANG_FORWARD_PROC_SYMBOL(public_634d640);
CLANG_FORWARD_PROC_SYMBOL(public_6350bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6350df0);

#define public_634d6f6 _public_634d6f6
#define public_634d78a _public_634d78a
#define public_634d7ac _public_634d7ac
#define public_634d84d _public_634d84d

PROC_DECLARE(0x634d640, internal_634d640, public_634d640);
extern "C" NAKED register_t __cdecl internal_634d640()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ds : [eax+0xF8]
        mov dword ptr ss : [esp+0x14], edx
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+0xFC]
        mov eax, dword ptr ds : [eax+0x110]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [ecx+0x98]
        fsub dword ptr ds : [ecx+0x68]
        mov dword ptr ss : [esp+0x18], edx
        lea esi, ds:[edi+0xC]
        fadd dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [ecx+0x6C]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x40
        je public_634d6f6
        lea edx, ds:[ecx+0xD4]
        mov ebx, dword ptr ds : [edx]
        mov eax, esi
        mov dword ptr ds : [eax], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ebx
        mov ebx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], ebx
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        fld dword ptr ds : [ecx+0xB8]
        fld dword ptr ds : [ecx+0xB4]
        mov eax, dword ptr ds : [ecx+0xBC]
        lea ebx, ds:[edi+0x4C]
        fstp dword ptr ds : [ebx]
        mov edx, eax
        fstp dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], edx
        fld dword ptr ds : [ecx+0xB8]
        mov dword ptr ss : [esp+0x10], eax
        fld dword ptr ds : [ecx+0xB4]
        mov eax, dword ptr ds : [ecx+0xBC]
        fstp dword ptr ds : [edi+0x5C]
        mov ecx, eax
        fstp dword ptr ds : [edi+0x60]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ds : [edi+0x64], ecx
        jmp public_634d78a
        public_634d6f6 : nop
        fld dword ptr ss : [esp+0x14]
        push ecx
        fsub dword ptr ds : [ecx+0x68]
        lea edx, ds:[ecx+0xE4]
        add ecx, 0xD4
        fadd dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [ecx-0x68]
        fmul dword ptr ds : [ecx-0x64]
        fstp dword ptr ss : [esp]
        push edx
        push ecx
        mov ecx, esi
        call public_6350df0
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [eax+0x98]
        fsub dword ptr ds : [eax+0x68]
        lea ebx, ds:[edi+0x4C]
        fadd dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [eax+0x6C]
        fld st(0)
        fmul dword ptr ds : [eax+0xC8]
        fadd dword ptr ds : [eax+0xB8]
        fld st(1)
        fmul dword ptr ds : [eax+0xCC]
        fadd dword ptr ds : [eax+0xBC]
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        fxch 
        fmul dword ptr ds : [eax+0xC4]
        mov edx, ecx
        mov dword ptr ss : [esp+0x10], edx
        fadd dword ptr ds : [eax+0xB4]
        mov dword ptr ds : [ebx+8], ecx
        mov eax, ecx
        fstp dword ptr ds : [ebx]
        fstp dword ptr ds : [ebx+4]
        fld dword ptr ds : [ebx+4]
        fld dword ptr ds : [ebx]
        mov dword ptr ds : [edi+0x64], eax
        fstp dword ptr ds : [edi+0x5C]
        fstp dword ptr ds : [edi+0x60]
        public_634d78a : nop
        lea ebp, ds:[edi+0x1C]
        push ebp
        mov ecx, esi
        call public_6350bc0
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+0x78]
        test ch, 0xC
        jne public_634d7ac
        push ebx
        add eax, 0x30
        push eax
        mov ecx, ebp
        call public_63484e0
        public_634d7ac : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        je public_634d84d
        fld dword ptr ds : [esi+4]
        push ebp
        fmul dword ptr ds : [eax+0xC]
        mov ecx, esi
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [esi+0xC]
        faddp 
        fld dword ptr ds : [esi+8]
        fmul dword ptr ds : [eax]
        faddp 
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [eax+8]
        fsubp 
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [esi]
        fld dword ptr ds : [esi+8]
        fmul dword ptr ds : [eax+0xC]
        faddp 
        fld dword ptr ds : [esi+0xC]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [eax]
        fsubp 
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0xC]
        mov edx, dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [eax+0xC]
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [eax]
        fsubp 
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [eax+4]
        fsubp 
        fld dword ptr ds : [esi+8]
        fmul dword ptr ds : [eax+8]
        fsubp 
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [eax+0xC]
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ds : [esi+0xC]
        fmul dword ptr ds : [eax]
        faddp 
        fld dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0xC], eax
        fsubp 
        fstp dword ptr ds : [esi]
        fstp dword ptr ds : [esi+4]
        call public_6350bc0
        public_634d84d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x634d640)
    }
}

#undef public_634d6f6
#undef public_634d78a
#undef public_634d7ac
#undef public_634d84d
