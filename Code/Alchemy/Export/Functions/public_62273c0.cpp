#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62029c0);
CLANG_FORWARD_PROC_SYMBOL(public_6202da0);
CLANG_FORWARD_PROC_SYMBOL(public_6202e40);
CLANG_FORWARD_PROC_SYMBOL(public_6202fa0);
CLANG_FORWARD_PROC_SYMBOL(public_62273c0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_62273d2 _public_62273d2
#define public_62273f0 _public_62273f0
#define public_622741b _public_622741b
#define public_6227444 _public_6227444
#define public_622746a _public_622746a
#define public_622746e _public_622746e
#define public_622749f _public_622749f

PROC_DECLARE(0x62273c0, internal_62273c0, public_62273c0);
extern "C" NAKED register_t __cdecl internal_62273c0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        xor ebx, ebx
        push edi
        mov esi, dword ptr ss : [ebp+0x1C]
        cmp esi, ebx
        je public_62273f0
        public_62273d2 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x34]
        mov dword ptr ss : [ebp+0x1C], eax
        mov ecx, dword ptr ds : [esi]
        push ebx
        push esi
        call dword ptr ds : [ecx+0x54]
        mov edx, dword ptr ds : [esi]
        push ebx
        push esi
        call dword ptr ds : [edx+0x50]
        mov esi, dword ptr ss : [ebp+0x1C]
        cmp esi, ebx
        jne public_62273d2
        public_62273f0 : nop
        lea esi, ss:[ebp+8]
        mov dword ptr ss : [ebp+0x1C], ebx
        mov dword ptr ss : [ebp+0x20], ebx
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebx
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x18], eax
        je public_622746a
        mov ecx, eax
        cmp eax, ecx
        jne public_622746a
        mov ebx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [esi+8]
        cmp ebx, eax
        mov edi, ebx
        je public_6227444
        public_622741b : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, esi
        push eax
        call public_6202da0
        mov edi, dword ptr ds : [edi]
        push 0
        lea ecx, ds:[ebx+0xC]
        call public_6202fa0
        push ebx
        call public_62460e0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_622741b
        public_6227444 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        pop edi
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        xor ecx, ecx
        mov dword ptr ds : [esi+0x10], ecx
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        xor eax, eax
        mov dword ptr ds : [esi+8], esi
        mov dword ptr ss : [ebp+4], ecx
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_622746a : nop
        cmp eax, edi
        je public_622749f
        public_622746e : nop
        lea ecx, ss:[esp+0x18]
        mov ebx, eax
        call public_6202e40
        lea eax, ss:[esp+0x10]
        push ebx
        push eax
        mov ecx, esi
        call public_62029c0
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, edi
        jne public_622746e
        pop edi
        mov dword ptr ss : [ebp+4], 0
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 4
        public_622749f : nop
        pop edi
        mov dword ptr ss : [ebp+4], ebx
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62273c0)
    }
}

#undef public_62273d2
#undef public_62273f0
#undef public_622741b
#undef public_6227444
#undef public_622746a
#undef public_622746e
#undef public_622749f
