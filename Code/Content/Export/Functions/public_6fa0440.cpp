#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa0440);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3be0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3c60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4490);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa04f7 _public_6fa04f7
#define public_6fa0514 _public_6fa0514
#define public_6fa0540 _public_6fa0540
#define public_6fa054b _public_6fa054b
#define public_6fa0560 _public_6fa0560
#define public_6fa056c _public_6fa056c
#define public_6fa0578 _public_6fa0578

PROC_DECLARE(0x6fa0440, internal_6fa0440, public_6fa0440);
extern "C" NAKED register_t __cdecl internal_6fa0440()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov al, byte ptr ds : [edi]
        mov esi, ecx
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ds : [edi+0xC]
        push 0x44
        mov byte ptr ds : [esi+0xC], dl
        call public_6fa912a
        mov byte ptr ds : [eax+0x41], 0
        xor ebp, ebp
        mov dword ptr ds : [eax+4], ebp
        mov cl, 1
        mov byte ptr ds : [eax+0x40], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x41], cl
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebp
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebp
        mov ebx, dword ptr ds : [esi+8]
        push 0x44
        call public_6fa912a
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x40], 0
        mov byte ptr ds : [eax+0x41], 0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov edx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x1C], ecx
        mov cl, byte ptr ss : [ebp+0x41]
        add esp, 8
        test cl, cl
        jne public_6fa0514
        xor edx, edx
        mov dl, byte ptr ss : [ebp+0x40]
        mov ecx, esi
        push edx
        push eax
        call public_6fa3c60
        mov ebx, eax
        lea eax, ss:[ebp+0xC]
        push eax
        lea ecx, ds:[ebx+0xC]
        push ecx
        call public_6fa4490
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp ecx, eax
        jne public_6fa04f7
        mov dword ptr ss : [esp+0x14], ebx
        public_6fa04f7 : nop
        mov edx, dword ptr ss : [ebp]
        push ebx
        push edx
        mov ecx, esi
        call public_6fa3be0
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push eax
        mov ecx, esi
        call public_6fa3be0
        mov dword ptr ds : [ebx+8], eax
        public_6fa0514 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_6fa0578
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x41]
        test bl, bl
        jne public_6fa054b
        lea ebx, ds:[ebx]
        public_6fa0540 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x41]
        test bl, bl
        je public_6fa0540
        public_6fa054b : nop
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x41]
        test bl, bl
        jne public_6fa056c
        lea ecx, ds:[ecx]
        public_6fa0560 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x41]
        test bl, bl
        je public_6fa0560
        public_6fa056c : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        ret 4
        public_6fa0578 : nop
        mov dword ptr ds : [edx], edx
        mov eax, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [eax+8], eax
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6fa0440)
    }
}

#undef public_6fa04f7
#undef public_6fa0514
#undef public_6fa0540
#undef public_6fa054b
#undef public_6fa0560
#undef public_6fa056c
#undef public_6fa0578
