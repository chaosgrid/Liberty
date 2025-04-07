#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631e8e0);
CLANG_FORWARD_PROC_SYMBOL(public_631ee30);
CLANG_FORWARD_PROC_SYMBOL(public_6322b80);
CLANG_FORWARD_PROC_SYMBOL(public_6322f60);
CLANG_FORWARD_PROC_SYMBOL(public_63231f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_631e911 _public_631e911
#define public_631e943 _public_631e943
#define public_631e965 _public_631e965
#define public_631e970 _public_631e970
#define public_631e993 _public_631e993

PROC_DECLARE(0x631e8e0, internal_631e8e0, public_631e8e0);
extern "C" NAKED register_t __cdecl internal_631e8e0()
{
    __asm
    {
        sub esp, 8
        mov ecx, dword ptr ds : [public_64018f0]
        mov edx, dword ptr ds : [public_64018fc]
        test edx, edx
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], eax
        je public_631e965
        mov edx, eax
        cmp eax, edx
        jne public_631e965
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_64018f4]
        cmp edi, eax
        mov esi, edi
        je public_631e943
        public_631e911 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_64018ec
        call public_6322f60
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_631ee30
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [public_64018f4]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_631e911
        mov ecx, dword ptr ds : [public_64018f0]
        public_631e943 : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_64018f0]
        mov dword ptr ds : [public_64018fc], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_64018f0]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        add esp, 8
        ret 
        public_631e965 : nop
        cmp eax, ecx
        je public_631e993
        lea esp, ss:[esp]
        public_631e970 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_63231f0
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_64018ec
        call public_6322b80
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_631e970
        public_631e993 : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x631e8e0)
    }
}

#undef public_631e911
#undef public_631e943
#undef public_631e965
#undef public_631e970
#undef public_631e993
