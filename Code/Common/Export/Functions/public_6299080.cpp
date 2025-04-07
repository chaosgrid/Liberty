#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6299080);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);

#define public_62990c0 _public_62990c0
#define public_629911d _public_629911d

PROC_DECLARE(0x6299080, internal_6299080, public_6299080);
extern "C" NAKED register_t __cdecl internal_6299080()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC4]
        test eax, eax
        je public_62990c0
        fld dword ptr ds : [eax+0x4C]
        fsub dword ptr ds : [eax+0x50]
        fabs 
        fcomp qword ptr ds : [public_639c9e0]
        fnstsw ax
        test ah, 1
        jne public_62990c0
        mov byte ptr ds : [esi+0xC], 0
        public_62990c0 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x14]
        push edx
        mov edx, dword ptr ds : [esi+8]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xCC]
        test eax, eax
        jne public_629911d
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+0xC]
        mov esi, dword ptr ds : [esi+4]
        push edi
        push ecx
        lea ecx, ds:[eax+8]
        mov edi, 0x100001
        call public_6333e60
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        mov eax, dword ptr ds : [esi+0xB0]
        push eax
        push 0x336
/*FIXUP push offset public_639d278 @0x629910c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d278
/*FIXUP push offset public_639d218 @0x6299111*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d218
        push edi
        call dword ptr ds : [ecx]
        add esp, 0x1C
        pop edi
        public_629911d : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6299080)
    }
}

#undef public_62990c0
#undef public_629911d
