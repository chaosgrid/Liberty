#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cef3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d06720);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6cef3c1 _public_6cef3c1
#define public_6cef3cc _public_6cef3cc
#define public_6cef3f2 _public_6cef3f2
#define public_6cef41b _public_6cef41b
#define public_6cef442 _public_6cef442

PROC_DECLARE(0x6cef3b0, internal_6cef3b0, public_6cef3b0);
extern "C" NAKED register_t __cdecl internal_6cef3b0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x18]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6cef3cc
        mov edx, dword ptr ss : [esp+0xC]
        public_6cef3c1 : nop
        cmp dword ptr ds : [eax+8], edx
        je public_6cef3cc
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6cef3c1
        public_6cef3cc : nop
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, 1
        jne public_6cef41b
        cmp eax, ecx
        jne public_6cef442
        mov esi, dword ptr ds : [edi+0x18]
        push ebx
        mov ebx, dword ptr ds : [esi+4]
        push 0xC
        call public_6d60012
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_6cef3f2
        mov ebx, eax
        public_6cef3f2 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6d06720
        mov eax, dword ptr ds : [edi+0x1C]
        add esp, 8
        inc eax
        pop ebx
        mov dword ptr ds : [edi+0x1C], eax
        pop edi
        pop esi
        ret 8
        public_6cef41b : nop
        test edx, edx
        jne public_6cef442
        cmp eax, ecx
        je public_6cef442
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov eax, dword ptr ds : [edi+0x1C]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x1C], eax
        public_6cef442 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6cef3b0)
    }
}

#undef public_6cef3c1
#undef public_6cef3cc
#undef public_6cef3f2
#undef public_6cef41b
#undef public_6cef442
