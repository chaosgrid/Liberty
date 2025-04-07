#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6268350 _public_6268350
#define public_6268377 _public_6268377
#define public_6268387 _public_6268387
#define public_626839c _public_626839c
#define public_62683c3 _public_62683c3

PROC_DECLARE(0x6268340, internal_6268340, public_6268340);
extern "C" NAKED register_t __cdecl internal_6268340()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_6268377
        mov edi, edi
        public_6268350 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+8]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ecx
        jne public_6268350
        public_6268377 : nop
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jbe public_62683c3
        push ebp
        mov ebp, eax
        public_6268387 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x28
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_626839c
        mov ebx, eax
        public_626839c : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_626c1e0
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        inc ecx
        dec ebp
        mov dword ptr ds : [esi+8], ecx
        jne public_6268387
        pop ebp
        public_62683c3 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6268340)
    }
}

#undef public_6268350
#undef public_6268377
#undef public_6268387
#undef public_626839c
#undef public_62683c3
