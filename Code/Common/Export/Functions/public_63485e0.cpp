#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628bed0);
CLANG_FORWARD_PROC_SYMBOL(public_63485e0);

#define public_634860e _public_634860e
#define public_6348625 _public_6348625
#define public_6348627 _public_6348627
#define public_6348647 _public_6348647

PROC_DECLARE(0x63485e0, internal_63485e0, public_63485e0);
extern "C" NAKED register_t __cdecl internal_63485e0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+8]
        fld dword ptr ds : [edi+4]
        fld dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ecx]
        lea eax, ds:[ecx+8]
        xor esi, esi
        fstp dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax], edx
        mov dword ptr ss : [esp+0x10], esi
        mov edx, 2
        mov ebx, eax
        public_634860e : nop
        fld dword ptr ds : [ebx]
        fabs 
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_6348625
        fstp dword ptr ss : [esp+0x10]
        mov esi, edx
        jmp public_6348627
        public_6348625 : nop
        fstp st(0)
        public_6348627 : nop
        dec edx
        sub ebx, 4
        test edx, edx
        jge public_634860e
        fld dword ptr ds : [ecx+esi*4]
        lea eax, ds:[esi-1]
        test eax, eax
        fmul dword ptr ds : [public_63a5498]
        fst dword ptr ds : [ecx+esi*4]
        jge public_6348647
        mov eax, 2
        public_6348647 : nop
        mov edx, dword ptr ds : [ecx+eax*4]
        push edi
        mov dword ptr ds : [ecx+esi*4], edx
        fstp dword ptr ds : [ecx+eax*4]
        push ecx
        call public_628bed0
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x63485e0)
    }
}

#undef public_634860e
#undef public_6348625
#undef public_6348627
#undef public_6348647
