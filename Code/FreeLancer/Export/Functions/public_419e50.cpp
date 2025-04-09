#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419100);
CLANG_FORWARD_PROC_SYMBOL(public_419e50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_419e60 _public_419e60
#define public_419e74 _public_419e74
#define public_419e80 _public_419e80
#define public_419eb6 _public_419eb6

PROC_DECLARE(0x419e50, internal_419e50, public_419e50);
extern "C" NAKED register_t __cdecl internal_419e50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6166a0]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        je public_419e74
        nop 
        lea esp, ss:[esp]
        public_419e60 : nop
        mov eax, dword ptr ds : [ecx+8]
        add ecx, 8
        call dword ptr ds : [eax+0x24]
        mov eax, dword ptr ds : [public_6166a0]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        jne public_419e60
        public_419e74 : nop
        push ebx
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov ebx, eax
        je public_419eb6
        push esi
        nop 
        public_419e80 : nop
        mov esi, edi
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        lea ecx, ds:[esi+8]
        call public_419100
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_6166a4]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [public_6166a4], ecx
        jne public_419e80
        pop esi
        public_419eb6 : nop
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x419e50)
    }
}

#undef public_419e60
#undef public_419e74
#undef public_419e80
#undef public_419eb6
