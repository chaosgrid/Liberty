#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf79c0);

#define public_6d5c447 _public_6d5c447
#define public_6d5c492 _public_6d5c492
#define public_6d5c4a0 _public_6d5c4a0
#define public_6d5c4aa _public_6d5c4aa
#define public_6d5c4af _public_6d5c4af
#define public_6d5c4b1 _public_6d5c4b1
#define public_6d5c4b8 _public_6d5c4b8

PROC_DECLARE(0x6d5c430, internal_6d5c430, public_6d5c430);
extern "C" NAKED register_t __cdecl internal_6d5c430()
{
    __asm
    {
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d5c4b8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6d5c447 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        lea eax, ds:[eax+ecx-0x418]
        mov dword ptr ds : [eax+0x408], ebx
        mov dword ptr ds : [eax+0x40C], edi
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx]
        push edi
        push ebx
        push eax
        call dword ptr ds : [edx+0x1C8]
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x11]
        test cl, cl
        jne public_6d5c492
        push eax
        call public_6cf79c0
        add esp, 4
        jmp public_6d5c4af
        public_6d5c492 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d5c4aa
        lea ebx, ds:[ebx]
        public_6d5c4a0 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6d5c4a0
        public_6d5c4aa : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6d5c4b1
        public_6d5c4af : nop
        mov esi, eax
        public_6d5c4b1 : nop
        cmp esi, dword ptr ss : [ebp+0xC]
        jne public_6d5c447
        pop edi
        pop ebx
        public_6d5c4b8 : nop
        pop esi
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d5c430)
    }
}

#undef public_6d5c447
#undef public_6d5c492
#undef public_6d5c4a0
#undef public_6d5c4aa
#undef public_6d5c4af
#undef public_6d5c4b1
#undef public_6d5c4b8
