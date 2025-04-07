#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6367130);
CLANG_FORWARD_PROC_SYMBOL(public_6367410);

#define public_6367417 _public_6367417
#define public_636744a _public_636744a
#define public_6367478 _public_6367478
#define public_636747c _public_636747c

PROC_DECLARE(0x6367410, internal_6367410, public_6367410);
extern "C" NAKED register_t __cdecl internal_6367410()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        public_6367417 : nop
        mov eax, dword ptr ds : [esi+0x44]
        lea ebx, ds:[edi+1]
        cmp ebx, eax
        jge public_636747c
        mov eax, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [eax+edi*4]
        mov ecx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [eax+edi*4+4]
        fld dword ptr ds : [ecx+edx*4]
        fcomp dword ptr ds : [ecx+eax*4]
        fnstsw ax
        test ah, 1
        je public_6367478
        push ebx
        push edi
        mov ecx, esi
        call public_6367130
        test edi, edi
        mov ecx, edi
        jle public_6367478
        public_636744a : nop
        mov edx, dword ptr ds : [esi+0x34]
        mov edi, dword ptr ds : [edx+ecx*4-4]
        lea eax, ds:[edx+ecx*4]
        mov edx, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [eax]
        fld dword ptr ds : [edx+edi*4]
        fcomp dword ptr ds : [edx+eax*4]
        fnstsw ax
        test ah, 1
        je public_6367478
        lea edi, ds:[ecx-1]
        push edi
        push ecx
        mov ecx, esi
        call public_6367130
        mov ecx, edi
        test ecx, ecx
        jg public_636744a
        public_6367478 : nop
        mov edi, ebx
        jmp public_6367417
        public_636747c : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6367410)
    }
}

#undef public_6367417
#undef public_636744a
#undef public_6367478
#undef public_636747c
