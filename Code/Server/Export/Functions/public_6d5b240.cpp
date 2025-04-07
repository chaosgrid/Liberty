#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d160d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d58e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d5b240);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c840);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d5b25e _public_6d5b25e
#define public_6d5b260 _public_6d5b260
#define public_6d5b290 _public_6d5b290
#define public_6d5b2af _public_6d5b2af
#define public_6d5b2d4 _public_6d5b2d4
#define public_6d5b2d8 _public_6d5b2d8
#define public_6d5b2f8 _public_6d5b2f8

PROC_DECLARE(0x6d5b240, internal_6d5b240, public_6d5b240);
extern "C" NAKED register_t __cdecl internal_6d5b240()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6d903fc]
        mov al, 1
        test al, cl
        jne public_6d5b25e
        or cl, al
        mov byte ptr ds : [public_6d903fc], cl
        mov ecx, offset public_6d90400
        jmp public_6d5b260
        public_6d5b25e : nop
        ret 
        nop 
        public_6d5b260 : nop
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6d5b2d4
        mov ecx, eax
        cmp eax, ecx
        jne public_6d5b2d4
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6d5b2af
        nop 
        lea esp, ss:[esp]
        public_6d5b290 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6d5c840
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6d5b290
        public_6d5b2af : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6d5c540
        jmp public_6d5b2f8
        public_6d5b2d4 : nop
        cmp eax, edi
        je public_6d5b2f8
        public_6d5b2d8 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6d160d0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6d58e50
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6d5b2d8
        public_6d5b2f8 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6d5ffb0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d5b240)
    }
}

#undef public_6d5b25e
#undef public_6d5b260
#undef public_6d5b290
#undef public_6d5b2af
#undef public_6d5b2d4
#undef public_6d5b2d8
#undef public_6d5b2f8
