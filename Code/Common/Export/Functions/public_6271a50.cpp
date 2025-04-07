#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6271a60 _public_6271a60
#define public_6271a87 _public_6271a87
#define public_6271a96 _public_6271a96
#define public_6271aab _public_6271aab
#define public_6271ac8 _public_6271ac8
#define public_6271ada _public_6271ada

PROC_DECLARE(0x6271a50, internal_6271a50, public_6271a50);
extern "C" NAKED register_t __cdecl internal_6271a50()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6271a87
        nop 
        public_6271a60 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ds : [ebx+8], ecx
        jne public_6271a60
        public_6271a87 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [eax]
        mov ebp, dword ptr ss : [esp+0x14]
        cmp ebp, dword ptr ss : [esp+0x18]
        je public_6271ada
        public_6271a96 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0x10
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6271aab
        mov edi, eax
        public_6271aab : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6271ac8
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax+4], ecx
        public_6271ac8 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x18]
        inc ecx
        mov dword ptr ds : [ebx+8], ecx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        jne public_6271a96
        public_6271ada : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6271a50)
    }
}

#undef public_6271a60
#undef public_6271a87
#undef public_6271a96
#undef public_6271aab
#undef public_6271ac8
#undef public_6271ada
