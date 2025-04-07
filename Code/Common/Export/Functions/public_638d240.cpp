#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_638d240);

#define public_638d260 _public_638d260
#define public_638d26a _public_638d26a
#define public_638d272 _public_638d272
#define public_638d27f _public_638d27f
#define public_638d2ba _public_638d2ba

PROC_DECLARE(0x638d240, internal_638d240, public_638d240);
extern "C" NAKED register_t __cdecl internal_638d240()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        mov ebx, dword ptr ds : [edi+8]
        je public_638d2ba
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_638d2ba
        public_638d260 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp edx, esi
        jne public_638d26a
        mov edx, dword ptr ds : [eax+8]
        public_638d26a : nop
        cmp ebx, edx
        jne public_638d272
        cmp eax, edi
        jne public_638d27f
        public_638d272 : nop
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_638d260
        pop edi
        pop esi
        pop ebx
        ret 
        public_638d27f : nop
        mov edx, dword ptr ds : [eax+0xC]
        or edx, 0x4000000
        mov dword ptr ds : [eax+0xC], edx
        cmp dword ptr ds : [public_658b078], 4
        mov eax, edx
        jl public_638d2ba
        mov ecx, dword ptr ds : [public_658b7fc]
        and eax, 0xFFFFFF
        push eax
        mov eax, dword ptr ds : [edi+0xC]
        and eax, 0xFFFFFF
        push eax
/*FIXUP push offset public_63fa1dc @0x638d2ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa1dc
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_638d2ba : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x638d240)
    }
}

#undef public_638d260
#undef public_638d26a
#undef public_638d272
#undef public_638d27f
#undef public_638d2ba
