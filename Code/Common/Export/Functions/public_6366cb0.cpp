#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6366b10);
CLANG_FORWARD_PROC_SYMBOL(public_6366cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6367130);

#define public_6366cbd _public_6366cbd
#define public_6366cf8 _public_6366cf8
#define public_6366d00 _public_6366d00

PROC_DECLARE(0x6366cb0, internal_6366cb0, public_6366cb0);
extern "C" NAKED register_t __cdecl internal_6366cb0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x44]
        push edi
        xor edi, edi
        test eax, eax
        jle public_6366d00
        public_6366cbd : nop
        mov eax, dword ptr ds : [esi+0x34]
        mov ecx, dword ptr ds : [eax+edi*4]
        mov edx, dword ptr ds : [esi+0x1C]
        fld dword ptr ds : [edx+ecx*4]
        lea ecx, ds:[edx+ecx*4]
        fcomp dword ptr ds : [esi]
        fnstsw ax
        test ah, 1
        je public_6366cf8
        mov dword ptr ds : [ecx], 0
        mov eax, dword ptr ds : [esi+0x44]
        dec eax
        push eax
        push edi
        mov ecx, esi
        call public_6367130
        mov edx, dword ptr ds : [esi+0x44]
        dec edx
        push edi
        mov ecx, esi
        mov dword ptr ds : [esi+0x44], edx
        call public_6366b10
        dec edi
        public_6366cf8 : nop
        mov eax, dword ptr ds : [esi+0x44]
        inc edi
        cmp edi, eax
        jl public_6366cbd
        public_6366d00 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6366cb0)
    }
}

#undef public_6366cbd
#undef public_6366cf8
#undef public_6366d00
