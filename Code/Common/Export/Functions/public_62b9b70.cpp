#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b9b70);
CLANG_FORWARD_PROC_SYMBOL(public_62ba750);
CLANG_FORWARD_PROC_SYMBOL(public_62bab30);
CLANG_FORWARD_PROC_SYMBOL(public_62babd0);
CLANG_FORWARD_PROC_SYMBOL(public_62bac10);
CLANG_FORWARD_PROC_SYMBOL(public_62baeb0);
CLANG_FORWARD_PROC_SYMBOL(public_62bb4b0);
CLANG_FORWARD_PROC_SYMBOL(public_62bb560);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62b9ba5 _public_62b9ba5
#define public_62b9bce _public_62b9bce
#define public_62b9beb _public_62b9beb
#define public_62b9bf0 _public_62b9bf0
#define public_62b9c10 _public_62b9c10
#define public_62b9c61 _public_62b9c61
#define public_62b9c7d _public_62b9c7d
#define public_62b9ca5 _public_62b9ca5
#define public_62b9cb0 _public_62b9cb0
#define public_62b9cc2 _public_62b9cc2
#define public_62b9cce _public_62b9cce
#define public_62b9cdb _public_62b9cdb
#define public_62b9ce3 _public_62b9ce3

PROC_DECLARE(0x62b9b70, internal_62b9b70, public_62b9b70);
extern "C" NAKED register_t __cdecl internal_62b9b70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        cmp esi, eax
        je public_62b9ce3
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        push ebp
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x10], eax
        je public_62b9beb
        mov ecx, eax
        cmp eax, ecx
        jne public_62b9beb
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62b9bce
        public_62b9ba5 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_62babd0
        mov edi, dword ptr ds : [edi]
        push 0
        lea ecx, ds:[ebx+0xC]
        call public_62bb560
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62b9ba5
        public_62b9bce : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_62b9c10
        public_62b9beb : nop
        cmp eax, edi
        je public_62b9c10
        nop 
        public_62b9bf0 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_62baeb0
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_62ba750
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_62b9bf0
        public_62b9c10 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ds : [ecx+1]
        mov eax, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [esi+8]
        mov byte ptr ds : [esi+1], dl
        mov ecx, dword ptr ds : [ecx+4]
        mov ebx, dword ptr ds : [ecx+4]
        mov cl, byte ptr ds : [ebx+0x4D]
        test cl, cl
        jne public_62b9c7d
        xor edx, edx
        mov dl, byte ptr ds : [ebx+0x4C]
        mov ecx, esi
        push edx
        push eax
        call public_62bac10
        mov edi, eax
        lea eax, ds:[ebx+0xC]
        push eax
        lea ecx, ds:[edi+0xC]
        push ecx
        call public_62bb4b0
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp ebp, eax
        jne public_62b9c61
        mov ebp, edi
        public_62b9c61 : nop
        mov ecx, dword ptr ds : [ebx]
        push edi
        push ecx
        mov ecx, esi
        call public_62bab30
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [ebx+8]
        push edi
        push edx
        mov ecx, esi
        call public_62bab30
        mov dword ptr ds : [edi+8], eax
        public_62b9c7d : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], ebp
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        pop edi
        pop ebp
        je public_62b9cdb
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x4D]
        test bl, bl
        jne public_62b9cb0
        public_62b9ca5 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x4D]
        test bl, bl
        je public_62b9ca5
        public_62b9cb0 : nop
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x4D]
        test bl, bl
        jne public_62b9cce
        public_62b9cc2 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x4D]
        test bl, bl
        je public_62b9cc2
        public_62b9cce : nop
        mov eax, esi
        pop esi
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        add esp, 8
        ret 4
        public_62b9cdb : nop
        mov dword ptr ds : [edx], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        public_62b9ce3 : nop
        mov eax, esi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62b9b70)
    }
}

#undef public_62b9ba5
#undef public_62b9bce
#undef public_62b9beb
#undef public_62b9bf0
#undef public_62b9c10
#undef public_62b9c61
#undef public_62b9c7d
#undef public_62b9ca5
#undef public_62b9cb0
#undef public_62b9cc2
#undef public_62b9cce
#undef public_62b9cdb
#undef public_62b9ce3
