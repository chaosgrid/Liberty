#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42c9e0);
CLANG_FORWARD_PROC_SYMBOL(public_437f70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_437f90 _public_437f90
#define public_437fd7 _public_437fd7
#define public_437feb _public_437feb
#define public_437ffe _public_437ffe
#define public_438013 _public_438013
#define public_438020 _public_438020
#define public_43802a _public_43802a
#define public_43802f _public_43802f
#define public_438031 _public_438031
#define public_438048 _public_438048

PROC_DECLARE(0x437f70, internal_437f70, public_437f70);
extern "C" NAKED register_t __cdecl internal_437f70()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ds : [eax]
        xor ecx, ecx
        cmp edi, eax
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ss : [esp+8], ecx
        je public_438048
        push ebx
        push ebp
        public_437f90 : nop
        mov eax, dword ptr ds : [edi+0x2C]
        test eax, eax
        lea ebp, ds:[edi+0x10]
        jle public_437ffe
        mov eax, dword ptr ss : [ebp]
        push eax
        call dword ptr ds : [public_5c6088]
        add esp, 4
        test eax, eax
        je public_437ffe
        mov edx, dword ptr ds : [eax+0x4C]
        mov ecx, dword ptr ss : [esp+0x20]
        cmp edx, ecx
        sete al
        test al, al
        je public_437ffe
        mov edx, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [esi+4]
        push 0xC
        call public_5b7e84
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_437fd7
        mov ebx, eax
        public_437fd7 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_437feb
        mov dword ptr ds : [eax], ebp
        public_437feb : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        inc dword ptr ss : [esp+0x10]
        public_437ffe : nop
        mov eax, dword ptr ds : [edi+8]
        mov cl, byte ptr ds : [eax+0x39]
        test cl, cl
        jne public_438013
        push eax
        call public_42c9e0
        add esp, 4
        jmp public_43802f
        public_438013 : nop
        mov eax, dword ptr ds : [edi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_43802a
        nop 
        lea esp, ss:[esp]
        public_438020 : nop
        mov edi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp edi, dword ptr ds : [eax+8]
        je public_438020
        public_43802a : nop
        cmp dword ptr ds : [edi+8], eax
        je public_438031
        public_43802f : nop
        mov edi, eax
        public_438031 : nop
        cmp edi, dword ptr ds : [esi+4]
        jne public_437f90
        mov eax, dword ptr ss : [esp+0x10]
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 8
        ret 8
        public_438048 : nop
        pop edi
        mov eax, ecx
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x437f70)
    }
}

#undef public_437f90
#undef public_437fd7
#undef public_437feb
#undef public_437ffe
#undef public_438013
#undef public_438020
#undef public_43802a
#undef public_43802f
#undef public_438031
#undef public_438048
