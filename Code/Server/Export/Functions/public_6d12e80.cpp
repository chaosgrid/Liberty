#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d12e80);

#define public_6d12eb0 _public_6d12eb0
#define public_6d12ed0 _public_6d12ed0
#define public_6d12ee1 _public_6d12ee1
#define public_6d12ef6 _public_6d12ef6
#define public_6d12f03 _public_6d12f03
#define public_6d12f10 _public_6d12f10
#define public_6d12f1a _public_6d12f1a
#define public_6d12f21 _public_6d12f21
#define public_6d12f34 _public_6d12f34

PROC_DECLARE(0x6d12e80, internal_6d12e80, public_6d12e80);
extern "C" NAKED register_t __cdecl internal_6d12e80()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edx]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+4]
        add edi, 0x10
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        xor ebx, ebx
        cmp esi, eax
        je public_6d12f34
        push ebp
        mov ebp, dword ptr ds : [public_6d64774]
        lea ebx, ds:[ebx]
        public_6d12eb0 : nop
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        call ebp
        add esp, 4
        test eax, eax
        je public_6d12ee1
        mov ecx, dword ptr ds : [eax+0x4C]
        test ecx, ecx
        jne public_6d12ee1
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        je public_6d12ed0
        cmp eax, 2
        jne public_6d12ee1
        public_6d12ed0 : nop
        cmp ebx, dword ptr ss : [esp+0x10]
        jge public_6d12ee1
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+ebx*4], ecx
        inc ebx
        public_6d12ee1 : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x2D]
        test cl, cl
        jne public_6d12f03
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x2D]
        test cl, cl
        jne public_6d12f21
        public_6d12ef6 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x2D]
        test cl, cl
        je public_6d12ef6
        jmp public_6d12f21
        public_6d12f03 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d12f1a
        nop 
        lea esp, ss:[esp]
        public_6d12f10 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6d12f10
        public_6d12f1a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6d12f21
        mov esi, eax
        public_6d12f21 : nop
        cmp esi, dword ptr ds : [edi+4]
        jne public_6d12eb0
        mov eax, dword ptr ss : [esp+0x1C]
        pop ebp
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebx
        pop ebx
        pop ecx
        ret 8
        public_6d12f34 : nop
        pop edi
        pop esi
        mov dword ptr ds : [edx], ebx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d12e80)
    }
}

#undef public_6d12eb0
#undef public_6d12ed0
#undef public_6d12ee1
#undef public_6d12ef6
#undef public_6d12f03
#undef public_6d12f10
#undef public_6d12f1a
#undef public_6d12f21
#undef public_6d12f34
