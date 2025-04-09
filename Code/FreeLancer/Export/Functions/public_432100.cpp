#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432100);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_432114 _public_432114
#define public_432141 _public_432141
#define public_43214a _public_43214a
#define public_43216d _public_43216d

PROC_DECLARE(0x432100, internal_432100, public_432100);
extern "C" NAKED register_t __cdecl internal_432100()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov ebp, ecx
        je public_43216d
        push ebx
        push esi
        xor ebx, ebx
        public_432114 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        je public_43214a
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_432141
        cmp cl, 0xFF
        je public_432141
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_43214a
        public_432141 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_43214a : nop
        push esi
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        call public_5b7e1d
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 4
        dec ecx
        cmp edi, eax
        mov dword ptr ss : [ebp+8], ecx
        jne public_432114
        pop esi
        pop ebx
        public_43216d : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edi
        pop edi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x432100)
    }
}

#undef public_432114
#undef public_432141
#undef public_43214a
#undef public_43216d
