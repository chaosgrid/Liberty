#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6367130);
CLANG_FORWARD_PROC_SYMBOL(public_63677d0);
CLANG_FORWARD_PROC_SYMBOL(public_6367800);

#define public_6367810 _public_6367810
#define public_636784a _public_636784a
#define public_636785a _public_636785a
#define public_6367876 _public_6367876
#define public_636787e _public_636787e
#define public_6367886 _public_6367886
#define public_63678af _public_63678af
#define public_63678b7 _public_63678b7

PROC_DECLARE(0x6367800, internal_6367800, public_6367800);
extern "C" NAKED register_t __cdecl internal_6367800()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x44]
        push edi
        xor ebx, ebx
        xor edi, edi
        test eax, eax
        jle public_636787e
        public_6367810 : nop
        mov eax, dword ptr ds : [esi+0x34]
        mov ecx, dword ptr ds : [eax+edi*4]
        mov edx, dword ptr ds : [esi+0x1C]
        fld dword ptr ds : [edx+ecx*4]
        lea ecx, ds:[edx+ecx*4]
        fcomp dword ptr ds : [esi]
        fnstsw ax
        test ah, 1
        je public_6367876
        fld dword ptr ds : [esi]
        fchs 
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 1
        je public_636784a
        mov dword ptr ds : [ecx], 0
        mov eax, dword ptr ds : [esi+0x44]
        dec eax
        push eax
        push edi
        mov ecx, esi
        call public_6367130
        jmp public_636785a
        public_636784a : nop
        push edi
        mov ecx, esi
        call public_63677d0
        mov eax, dword ptr ds : [esi+0x4C]
        inc ebx
        dec eax
        mov dword ptr ds : [esi+0x4C], eax
        public_636785a : nop
        mov ecx, dword ptr ds : [esi+0x44]
        mov eax, dword ptr ds : [esi+0x94]
        dec edi
        dec ecx
        dec eax
        mov dword ptr ds : [esi+0x44], ecx
        mov dword ptr ds : [esi+0x94], eax
        mov dword ptr ds : [esi+0x68], 1
        public_6367876 : nop
        mov eax, dword ptr ds : [esi+0x44]
        inc edi
        cmp edi, eax
        jl public_6367810
        public_636787e : nop
        mov edi, dword ptr ds : [esi+0x44]
        cmp edi, dword ptr ds : [esi+0x4C]
        jge public_63678b7
        public_6367886 : nop
        mov ecx, dword ptr ds : [esi+0x34]
        mov eax, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [ecx+edi*4]
        fld dword ptr ds : [eax+edx*4]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_63678af
        push edi
        mov ecx, esi
        call public_63677d0
        mov eax, dword ptr ds : [esi+0x4C]
        dec edi
        dec eax
        mov dword ptr ds : [esi+0x4C], eax
        public_63678af : nop
        mov eax, dword ptr ds : [esi+0x4C]
        inc edi
        cmp edi, eax
        jl public_6367886
        public_63678b7 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6367800)
    }
}

#undef public_6367810
#undef public_636784a
#undef public_636785a
#undef public_6367876
#undef public_636787e
#undef public_6367886
#undef public_63678af
#undef public_63678b7
