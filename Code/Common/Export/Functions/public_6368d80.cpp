#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634b8d0);
CLANG_FORWARD_PROC_SYMBOL(public_634b9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6355490);
CLANG_FORWARD_PROC_SYMBOL(public_6368d80);

#define public_6368d90 _public_6368d90
#define public_6368db6 _public_6368db6
#define public_6368dc0 _public_6368dc0
#define public_6368e02 _public_6368e02
#define public_6368e10 _public_6368e10

PROC_DECLARE(0x6368d80, internal_6368d80, public_6368d80);
extern "C" NAKED register_t __cdecl internal_6368d80()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x20]
        test esi, esi
        je public_6368e10
        push ebx
        public_6368d90 : nop
        fld dword ptr ds : [esi+0x58]
        mov ebx, dword ptr ds : [esi]
        fcomp dword ptr ds : [public_658ab2c]
        fnstsw ax
        test ah, 1
        je public_6368db6
        mov eax, dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ds : [eax+0x54]
        and ecx, 0x300
        cmp ecx, 0x100
        jne public_6368dc0
        public_6368db6 : nop
        push esi
        mov ecx, edi
        call public_6355490
        jmp public_6368e02
        public_6368dc0 : nop
        fld dword ptr ds : [esi+0x58]
        fld dword ptr ds : [public_658ab28]
        fadd dword ptr ds : [public_658ab1c]
        fcompp 
        fnstsw ax
        test ah, 1
        je public_6368e02
        mov edx, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [edx+0x9C]
        mov edx, dword ptr ds : [ecx+0x9C]
        mov eax, dword ptr ds : [eax]
        and eax, dword ptr ds : [edx]
        test al, 3
        je public_6368e02
        push esi
        mov ecx, edi
        call public_634b8d0
        push esi
        mov ecx, edi
        call public_634b9a0
        public_6368e02 : nop
        test ebx, ebx
        mov esi, ebx
        jne public_6368d90
        mov word ptr ds : [edi+0x40], bx
        pop ebx
        pop edi
        pop esi
        ret 
        public_6368e10 : nop
        mov word ptr ds : [edi+0x40], 0
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6368d80)
    }
}

#undef public_6368d90
#undef public_6368db6
#undef public_6368dc0
#undef public_6368e02
#undef public_6368e10
