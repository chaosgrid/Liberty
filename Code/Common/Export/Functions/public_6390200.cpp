#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_63721e0);
CLANG_FORWARD_PROC_SYMBOL(public_6390200);

#define public_6390232 _public_6390232
#define public_639024e _public_639024e
#define public_6390258 _public_6390258
#define public_639026a _public_639026a
#define public_6390276 _public_6390276
#define public_6390282 _public_6390282
#define public_639028f _public_639028f
#define public_63902a2 _public_63902a2
#define public_63902ac _public_63902ac
#define public_63902af _public_63902af
#define public_63902c2 _public_63902c2

PROC_DECLARE(0x6390200, internal_6390200, public_6390200);
extern "C" NAKED register_t __cdecl internal_6390200()
{
    __asm
    {
        cmp dword ptr ds : [public_658b078], 4
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        jl public_6390232
        mov eax, dword ptr ds : [edi+0x4C]
        mov ecx, dword ptr ss : [ebp+0x4C]
        mov edx, dword ptr ds : [public_658b7fc]
        push eax
        push ecx
/*FIXUP push offset public_63fb2c8 @0x6390223*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb2c8
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_6390232 : nop
        mov eax, dword ptr ds : [edi+0x38]
        test eax, eax
        lea ebx, ds:[edi+0x38]
        je public_639028f
        mov edx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        add esi, 4
        test edx, edx
        je public_639028f
        mov edi, 0x4000000
        public_639024e : nop
        cmp dword ptr ds : [edx+4], ebp
        je public_6390258
        cmp dword ptr ds : [edx+8], ebp
        jne public_6390282
        public_6390258 : nop
        mov eax, dword ptr ds : [edx]
        test eax, eax
        je public_6390276
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_6390276
        public_639026a : nop
        or dword ptr ds : [eax+0x14], edi
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_639026a
        public_6390276 : nop
        push edx
        call public_63721e0
        add esp, 4
        sub esi, 4
        public_6390282 : nop
        mov edx, dword ptr ds : [esi]
        add esi, 4
        test edx, edx
        jne public_639024e
        mov edi, dword ptr ss : [esp+0x18]
        public_639028f : nop
        mov eax, dword ptr ss : [ebp+0x38]
        test eax, eax
        je public_63902c2
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_63902c2
        public_63902a2 : nop
        cmp dword ptr ds : [eax+4], ebp
        jne public_63902ac
        mov dword ptr ds : [eax+4], edi
        jmp public_63902af
        public_63902ac : nop
        mov dword ptr ds : [eax+8], edi
        public_63902af : nop
        push eax
        push ebx
        call public_636e1b0
        mov eax, dword ptr ds : [esi]
        add esp, 8
        add esi, 4
        test eax, eax
        jne public_63902a2
        public_63902c2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6390200)
    }
}

#undef public_6390232
#undef public_639024e
#undef public_6390258
#undef public_639026a
#undef public_6390276
#undef public_6390282
#undef public_639028f
#undef public_63902a2
#undef public_63902ac
#undef public_63902af
#undef public_63902c2
