#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59dd00);

#define public_59dd22 _public_59dd22
#define public_59dd31 _public_59dd31
#define public_59dd3d _public_59dd3d
#define public_59dd43 _public_59dd43
#define public_59dd53 _public_59dd53
#define public_59dd69 _public_59dd69
#define public_59dd6f _public_59dd6f

PROC_DECLARE(0x59dd00, internal_59dd00, public_59dd00);
extern "C" NAKED register_t __cdecl internal_59dd00()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        push esi
        push edi
        je public_59dd6f
        mov esi, dword ptr ds : [edx+4]
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_59dd6f
        test esi, esi
        je public_59dd43
        mov eax, dword ptr ds : [esi+0xC]
        xor ecx, ecx
        test eax, eax
        je public_59dd43
        public_59dd22 : nop
        cmp eax, edx
        je public_59dd31
        mov ecx, eax
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        jne public_59dd22
        jmp public_59dd43
        public_59dd31 : nop
        test ecx, ecx
        je public_59dd3d
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        jmp public_59dd43
        public_59dd3d : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+0xC], ecx
        public_59dd43 : nop
        test edi, edi
        mov dword ptr ds : [edx+4], edi
        je public_59dd6f
        mov esi, dword ptr ds : [edi+0xC]
        mov eax, esi
        test eax, eax
        je public_59dd69
        public_59dd53 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        jne public_59dd53
        test ecx, ecx
        je public_59dd69
        pop edi
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [edx+8], eax
        pop esi
        ret 
        public_59dd69 : nop
        mov dword ptr ds : [edx+8], esi
        mov dword ptr ds : [edi+0xC], edx
        public_59dd6f : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x59dd00)
    }
}

#undef public_59dd22
#undef public_59dd31
#undef public_59dd3d
#undef public_59dd43
#undef public_59dd53
#undef public_59dd69
#undef public_59dd6f
