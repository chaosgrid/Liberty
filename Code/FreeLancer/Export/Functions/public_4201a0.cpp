#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4201a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_420217 _public_420217
#define public_420222 _public_420222
#define public_42022e _public_42022e
#define public_42023f _public_42023f
#define public_42024b _public_42024b
#define public_42025a _public_42025a
#define public_420260 _public_420260
#define public_42026f _public_42026f
#define public_420285 _public_420285
#define public_4202a0 _public_4202a0
#define public_4202c7 _public_4202c7
#define public_4202e3 _public_4202e3
#define public_420335 _public_420335
#define public_420340 _public_420340
#define public_420348 _public_420348

PROC_DECLARE(0x4201a0, internal_4201a0, public_4201a0);
extern "C" NAKED register_t __cdecl internal_4201a0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        sub esp, 0x1C
        push ebx
        xor ebx, ebx
        cmp al, bl
        push esi
        mov esi, ecx
        je public_42026f
        or byte ptr ds : [esi+0x14], 1
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x64], ebx
        cmp dword ptr ds : [public_679bc8], ebx
        jbe public_420217
        cmp dword ptr ds : [public_679bcc], ebx
        jbe public_420217
        cmp byte ptr ds : [public_679be5], bl
        jne public_420217
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [public_5c72bc]
        test eax, eax
        je public_420217
        mov edx, dword ptr ds : [public_67eca0]
        lea ecx, ss:[esp+8]
        push ecx
        push edx
        call dword ptr ds : [public_5c72c0]
        test eax, eax
        je public_420217
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [public_616840], eax
        mov dword ptr ds : [public_616844], ecx
        mov dword ptr ds : [public_616848], ebx
        jmp public_420222
        public_420217 : nop
        mov eax, dword ptr ds : [public_616840]
        mov ecx, dword ptr ds : [public_616844]
        public_420222 : nop
        cmp eax, ebx
        jge public_42022e
        mov dword ptr ds : [public_616840], ebx
        jmp public_42023f
        public_42022e : nop
        mov edx, dword ptr ds : [public_610850]
        cmp eax, edx
        jl public_42023f
        dec edx
        mov dword ptr ds : [public_616840], edx
        public_42023f : nop
        cmp ecx, ebx
        jge public_42024b
        mov dword ptr ds : [public_616844], ebx
        jmp public_42025a
        public_42024b : nop
        mov eax, dword ptr ds : [public_610854]
        cmp ecx, eax
        jl public_42025a
        dec eax
        mov dword ptr ds : [public_616844], eax
        public_42025a : nop
        mov esi, dword ptr ds : [public_5c72c8]
        public_420260 : nop
        push ebx
        call esi
        test eax, eax
        jge public_420260
        pop esi
        pop ebx
        add esp, 0x1C
        ret 4
        public_42026f : nop
        mov dl, byte ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+0x10]
        and dl, 0xFE
        cmp eax, ebx
        mov byte ptr ds : [esi+0x14], dl
        je public_420285
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        public_420285 : nop
        mov cl, byte ptr ds : [esi+0x14]
        push ebp
        mov ebp, dword ptr ds : [esi+4]
        and cl, 0xF3
        push edi
        mov byte ptr ds : [esi+0x14], cl
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_4202c7
        lea ebx, ds:[ebx]
        public_4202a0 : nop
        mov eax, edi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [esi+8], ecx
        jne public_4202a0
        public_4202c7 : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        pop edi
        pop ebp
        je public_4202e3
        mov ecx, dword ptr ds : [public_67eca0]
        mov edx, dword ptr ds : [eax]
        push 6
        push ecx
        push eax
        call dword ptr ds : [edx+0x34]
        and byte ptr ds : [esi+0x14], 0xF7
        public_4202e3 : nop
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], 0x14
        call dword ptr ds : [public_5c72b0]
        test byte ptr ss : [esp+0x14], 1
        jne public_420348
        mov eax, dword ptr ds : [public_616840]
        mov ecx, dword ptr ds : [public_616844]
        lea edx, ss:[esp+8]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [public_67eca0]
        push edx
        push eax
        mov dword ptr ss : [esp+0x14], ecx
        call dword ptr ds : [public_5c72b4]
        test eax, eax
        je public_420335
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push ecx
        push edx
        call dword ptr ds : [public_5c72b8]
        public_420335 : nop
        mov esi, dword ptr ds : [public_5c72c8]
        nop 
        lea esp, ss:[esp]
        public_420340 : nop
        push 1
        call esi
        test eax, eax
        jle public_420340
        public_420348 : nop
        pop esi
        pop ebx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x4201a0)
    }
}

#undef public_420217
#undef public_420222
#undef public_42022e
#undef public_42023f
#undef public_42024b
#undef public_42025a
#undef public_420260
#undef public_42026f
#undef public_420285
#undef public_4202a0
#undef public_4202c7
#undef public_4202e3
#undef public_420335
#undef public_420340
#undef public_420348
