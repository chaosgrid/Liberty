#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ec70);

#define public_46ec82 _public_46ec82
#define public_46ec97 _public_46ec97
#define public_46eca4 _public_46eca4
#define public_46ecb0 _public_46ecb0
#define public_46ecba _public_46ecba
#define public_46ecbf _public_46ecbf
#define public_46ecc1 _public_46ecc1
#define public_46ecc6 _public_46ecc6

PROC_DECLARE(0x46ec70, internal_46ec70, public_46ec70);
extern "C" NAKED register_t __cdecl internal_46ec70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp eax, esi
        je public_46ecc6
        mov edx, dword ptr ss : [esp+0x10]
        push ebx
        public_46ec82 : nop
        inc dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        jne public_46eca4
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_46ecbf
        public_46ec97 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_46ec97
        jmp public_46ecbf
        public_46eca4 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_46ecba
        lea esp, ss:[esp]
        public_46ecb0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_46ecb0
        public_46ecba : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_46ecc1
        public_46ecbf : nop
        mov eax, ecx
        public_46ecc1 : nop
        cmp eax, esi
        jne public_46ec82
        pop ebx
        public_46ecc6 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x46ec70)
    }
}

#undef public_46ec82
#undef public_46ec97
#undef public_46eca4
#undef public_46ecb0
#undef public_46ecba
#undef public_46ecbf
#undef public_46ecc1
#undef public_46ecc6
