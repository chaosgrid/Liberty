#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_63416b0);
CLANG_FORWARD_PROC_SYMBOL(public_6342170);
CLANG_FORWARD_PROC_SYMBOL(public_6342550);
CLANG_FORWARD_PROC_SYMBOL(public_6342a40);
CLANG_FORWARD_PROC_SYMBOL(public_6342c20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63416c0 _public_63416c0
#define public_63416f0 _public_63416f0
#define public_6341718 _public_6341718
#define public_634173d _public_634173d
#define public_6341741 _public_6341741
#define public_6341761 _public_6341761

PROC_DECLARE(0x63416b0, internal_63416b0, public_63416b0);
extern "C" NAKED register_t __cdecl internal_63416b0()
{
    __asm
    {
        mov ecx, offset public_658a9c0
        jmp public_63416c0
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_63416c0 : nop
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
        je public_634173d
        mov ecx, eax
        cmp eax, ecx
        jne public_634173d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6341718
        nop 
        lea esp, ss:[esp]
        public_63416f0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6342550
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6342c20
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_63416f0
        public_6341718 : nop
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
        call public_632c410
        jmp public_6341761
        public_634173d : nop
        cmp eax, edi
        je public_6341761
        public_6341741 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6342a40
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6342170
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6341741
        public_6341761 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6391d5a
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x63416b0)
    }
}

#undef public_63416c0
#undef public_63416f0
#undef public_6341718
#undef public_634173d
#undef public_6341741
#undef public_6341761
