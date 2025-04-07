#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf6940);
CLANG_FORWARD_PROC_SYMBOL(public_6cf6fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4c430);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6cf6fd3 _public_6cf6fd3
#define public_6cf6fee _public_6cf6fee
#define public_6cf700c _public_6cf700c
#define public_6cf702c _public_6cf702c
#define public_6cf7063 _public_6cf7063
#define public_6cf7094 _public_6cf7094
#define public_6cf70ab _public_6cf70ab

PROC_DECLARE(0x6cf6fc0, internal_6cf6fc0, public_6cf6fc0);
extern "C" NAKED register_t __cdecl internal_6cf6fc0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ds : [eax]
        xor bl, bl
        cmp esi, eax
        je public_6cf702c
        public_6cf6fd3 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [ecx]
        je public_6cf6fee
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0xC]
        jne public_6cf6fd3
        jmp public_6cf702c
        public_6cf6fee : nop
        push ebp
        mov ebp, dword ptr ds : [esi+8]
        test ebp, ebp
        mov bl, byte ptr ss : [ebp+0x2F0]
        je public_6cf700c
        mov ecx, ebp
        call public_6cf6940
        push ebp
        call public_6d5ffb0
        add esp, 4
        public_6cf700c : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov eax, dword ptr ds : [edi+0x10]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        pop ebp
        public_6cf702c : nop
        test bl, bl
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x14], edx
        jne public_6cf7063
        mov ecx, dword ptr ds : [edi+0x38]
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        cmp eax, dword ptr ds : [ecx+edx-0x34]
        jne public_6cf70ab
        public_6cf7063 : nop
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6cf7094
        mov eax, dword ptr ds : [edi+0x38]
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov edx, dword ptr ss : [esp+0x1C]
        add eax, ecx
        mov ecx, dword ptr ds : [edx]
        cmp ecx, dword ptr ds : [eax-0x34]
        jne public_6cf7094
        lea ecx, ds:[eax-0x418]
        call public_6d4c430
        public_6cf7094 : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0xC]
        push eax
        mov eax, dword ptr ds : [edi+0x38]
        push eax
        call dword ptr ds : [edx+0xEC]
        public_6cf70ab : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6cf6fc0)
    }
}

#undef public_6cf6fd3
#undef public_6cf6fee
#undef public_6cf700c
#undef public_6cf702c
#undef public_6cf7063
#undef public_6cf7094
#undef public_6cf70ab
