#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634d320);

#define public_634d338 _public_634d338
#define public_634d35a _public_634d35a
#define public_634d35c _public_634d35c
#define public_634d362 _public_634d362
#define public_634d378 _public_634d378
#define public_634d395 _public_634d395
#define public_634d3bf _public_634d3bf
#define public_634d3c4 _public_634d3c4
#define public_634d3c7 _public_634d3c7
#define public_634d3cd _public_634d3cd

PROC_DECLARE(0x634d320, internal_634d320, public_634d320);
extern "C" NAKED register_t __cdecl internal_634d320()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ds : [eax+esi*4]
        test edi, edi
        je public_634d362
        mov edx, dword ptr ds : [edi]
        test edx, edx
        je public_634d362
        public_634d338 : nop
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [edi+4]
        fnstsw ax
        test ah, 1
        jne public_634d35a
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [edi+4]
        fnstsw ax
        test ah, 0x40
        je public_634d35c
        mov eax, dword ptr ds : [edx+8]
        cmp eax, dword ptr ds : [edi+8]
        jge public_634d35c
        public_634d35a : nop
        mov edi, edx
        public_634d35c : nop
        mov edx, dword ptr ds : [edx]
        test edx, edx
        jne public_634d338
        public_634d362 : nop
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+esi*4], edi
        mov eax, dword ptr ds : [ecx]
        add esi, eax
        shr eax, 1
        mov dword ptr ss : [esp+0x18], eax
        je public_634d3cd
        mov ebp, dword ptr ss : [esp+0x14]
        public_634d378 : nop
        mov edx, dword ptr ds : [ecx+4]
        sar esi, 1
        cmp ebp, dword ptr ds : [edx+esi*4]
        jne public_634d3cd
        lea eax, ds:[esi+esi]
        mov edi, dword ptr ds : [edx+eax*4]
        test edi, edi
        jne public_634d395
        mov eax, dword ptr ds : [edx+eax*4+4]
        mov dword ptr ds : [edx+esi*4], eax
        jmp public_634d3c7
        public_634d395 : nop
        mov ebx, dword ptr ds : [edx+eax*4+4]
        test ebx, ebx
        je public_634d3c4
        fld dword ptr ds : [edi+4]
        fcomp dword ptr ds : [ebx+4]
        fnstsw ax
        test ah, 1
        jne public_634d3c4
        fld dword ptr ds : [edi+4]
        fcomp dword ptr ds : [ebx+4]
        fnstsw ax
        test ah, 0x40
        je public_634d3bf
        mov eax, dword ptr ds : [edi+8]
        cmp eax, dword ptr ds : [ebx+8]
        jl public_634d3c4
        public_634d3bf : nop
        mov dword ptr ds : [edx+esi*4], ebx
        jmp public_634d3c7
        public_634d3c4 : nop
        mov dword ptr ds : [edx+esi*4], edi
        public_634d3c7 : nop
        shr dword ptr ss : [esp+0x18], 1
        jne public_634d378
        public_634d3cd : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x634d320)
    }
}

#undef public_634d338
#undef public_634d35a
#undef public_634d35c
#undef public_634d362
#undef public_634d378
#undef public_634d395
#undef public_634d3bf
#undef public_634d3c4
#undef public_634d3c7
#undef public_634d3cd
