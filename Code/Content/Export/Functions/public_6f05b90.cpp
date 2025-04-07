#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f05bc3 _public_6f05bc3
#define public_6f05bd0 _public_6f05bd0
#define public_6f05bf1 _public_6f05bf1

PROC_DECLARE(0x6f05b90, internal_6f05b90, public_6f05b90);
extern "C" NAKED register_t __cdecl internal_6f05b90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [edi+0x10]
        jne public_6f05bf1
        mov edx, dword ptr ds : [edi+8]
        push ebx
        push esi
        mov esi, dword ptr ds : [edx]
        mov ebx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0xC]
        test eax, eax
        je public_6f05bc3
        mov byte ptr ds : [ebx+0x18], 1
        mov edx, dword ptr ds : [eax]
        push ebx
        mov ecx, eax
        call dword ptr ds : [edx+4]
        public_6f05bc3 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6f05bd0
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6f05bd0 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [eax+4], ecx
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+0xC]
        add esp, 4
        dec eax
        pop esi
        mov dword ptr ds : [edi+0xC], eax
        pop ebx
        public_6f05bf1 : nop
        pop edi
        ret 4
        UNREACHABLE_TRAP(0x6f05b90)
    }
}

#undef public_6f05bc3
#undef public_6f05bd0
#undef public_6f05bf1
