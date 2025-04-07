#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfdf50);
CLANG_FORWARD_PROC_SYMBOL(public_6d58910);
CLANG_FORWARD_PROC_SYMBOL(public_6d59e10);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c880);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d589c7 _public_6d589c7
#define public_6d589e4 _public_6d589e4
#define public_6d58a10 _public_6d58a10
#define public_6d58a1b _public_6d58a1b
#define public_6d58a30 _public_6d58a30
#define public_6d58a3c _public_6d58a3c
#define public_6d58a48 _public_6d58a48

PROC_DECLARE(0x6d58910, internal_6d58910, public_6d58910);
extern "C" NAKED register_t __cdecl internal_6d58910()
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
        push 0x18
        mov byte ptr ds : [esi+0xC], dl
        call public_6d60012
        mov byte ptr ds : [eax+0x15], 0
        xor ebp, ebp
        mov dword ptr ds : [eax+4], ebp
        mov cl, 1
        mov byte ptr ds : [eax+0x14], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x15], cl
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebp
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebp
        mov ebx, dword ptr ds : [esi+8]
        push 0x18
        call public_6d60012
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x14], 0
        mov byte ptr ds : [eax+0x15], 0
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
        mov cl, byte ptr ss : [ebp+0x15]
        add esp, 8
        test cl, cl
        jne public_6d589e4
        xor edx, edx
        mov dl, byte ptr ss : [ebp+0x14]
        mov ecx, esi
        push edx
        push eax
        call public_6cfdf50
        mov ebx, eax
        lea eax, ss:[ebp+0xC]
        push eax
        lea ecx, ds:[ebx+0xC]
        push ecx
        call public_6d5c880
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp ecx, eax
        jne public_6d589c7
        mov dword ptr ss : [esp+0x14], ebx
        public_6d589c7 : nop
        mov edx, dword ptr ss : [ebp]
        push ebx
        push edx
        mov ecx, esi
        call public_6d59e10
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push eax
        mov ecx, esi
        call public_6d59e10
        mov dword ptr ds : [ebx+8], eax
        public_6d589e4 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_6d58a48
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_6d58a1b
        lea ebx, ds:[ebx]
        public_6d58a10 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6d58a10
        public_6d58a1b : nop
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6d58a3c
        lea ecx, ds:[ecx]
        public_6d58a30 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6d58a30
        public_6d58a3c : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        ret 4
        public_6d58a48 : nop
        mov dword ptr ds : [edx], edx
        mov eax, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [eax+8], eax
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d58910)
    }
}

#undef public_6d589c7
#undef public_6d589e4
#undef public_6d58a10
#undef public_6d58a1b
#undef public_6d58a30
#undef public_6d58a3c
#undef public_6d58a48
