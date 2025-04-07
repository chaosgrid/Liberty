#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41b590);
CLANG_FORWARD_PROC_SYMBOL(public_41b640);
CLANG_FORWARD_PROC_SYMBOL(public_41ba80);
CLANG_FORWARD_PROC_SYMBOL(public_433a00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_41b5c0 _public_41b5c0
#define public_41b5df _public_41b5df
#define public_41b60b _public_41b60b
#define public_41b610 _public_41b610
#define public_41b630 _public_41b630

PROC_DECLARE(0x41b590, internal_41b590, public_41b590);
extern "C" NAKED register_t __cdecl internal_41b590()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        je public_41b60b
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_41b60b
        cmp ebx, eax
        jne public_41b60b
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_41b5df
        lea esp, ss:[esp]
        public_41b5c0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_41ba80
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_41b5c0
        public_41b5df : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        public_41b60b : nop
        cmp ecx, ebx
        je public_41b630
        nop 
        public_41b610 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_433a00
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_41b640
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_41b610
        public_41b630 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x41b590)
    }
}

#undef public_41b5c0
#undef public_41b5df
#undef public_41b60b
#undef public_41b610
#undef public_41b630
