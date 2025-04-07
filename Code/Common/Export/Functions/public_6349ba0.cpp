#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6349ba0);

#define public_6349bc9 _public_6349bc9
#define public_6349c18 _public_6349c18
#define public_6349c1a _public_6349c1a

PROC_DECLARE(0x6349ba0, internal_6349ba0, public_6349ba0);
extern "C" NAKED register_t __cdecl internal_6349ba0()
{
    __asm
    {
        mov ax, word ptr ss : [esp+0x14]
        mov dx, word ptr ss : [esp+0x18]
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov word ptr ss : [esp+0x24], ax
        mov word ptr ss : [esp+0x26], dx
        mov edi, 1
        lea esi, ss:[esp+0x26]
        public_6349bc9 : nop
        movsx edx, word ptr ds : [esi]
        fld dword ptr ds : [ecx+edx*4+0x34]
        fmul dword ptr ds : [ecx+0x44]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ebx+edx*4]
        fsub dword ptr ds : [ecx+edx*4+4]
        fmul dword ptr ss : [esp+0x18]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_6349c18
        fld dword ptr ss : [ebp+edx*4]
        fsub dword ptr ds : [ecx+edx*4+4]
        fmul dword ptr ss : [esp+0x18]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        je public_6349c1a
        dec edi
        sub esi, 2
        test edi, edi
        jge public_6349bc9
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 0x18
        public_6349c18 : nop
        fstp st(0)
        public_6349c1a : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x18
        UNREACHABLE_TRAP(0x6349ba0)
    }
}

#undef public_6349bc9
#undef public_6349c18
#undef public_6349c1a
