#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630bc30);
CLANG_FORWARD_PROC_SYMBOL(public_630c400);
CLANG_FORWARD_PROC_SYMBOL(public_630c7e0);
CLANG_FORWARD_PROC_SYMBOL(public_630caf0);
CLANG_FORWARD_PROC_SYMBOL(public_630cd20);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_630bc40 _public_630bc40
#define public_630bc70 _public_630bc70
#define public_630bc98 _public_630bc98
#define public_630bcbd _public_630bcbd
#define public_630bcc1 _public_630bcc1
#define public_630bce1 _public_630bce1

PROC_DECLARE(0x630bc30, internal_630bc30, public_630bc30);
extern "C" NAKED register_t __cdecl internal_630bc30()
{
    __asm
    {
        mov ecx, offset public_63fcf3c
        jmp public_630bc40
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_630bc40 : nop
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
        je public_630bcbd
        mov ecx, eax
        cmp eax, ecx
        jne public_630bcbd
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_630bc98
        nop 
        lea esp, ss:[esp]
        public_630bc70 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_630c7e0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_630cd20
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_630bc70
        public_630bc98 : nop
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
        jmp public_630bce1
        public_630bcbd : nop
        cmp eax, edi
        je public_630bce1
        public_630bcc1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_630caf0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_630c400
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_630bcc1
        public_630bce1 : nop
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
        UNREACHABLE_TRAP(0x630bc30)
    }
}

#undef public_630bc40
#undef public_630bc70
#undef public_630bc98
#undef public_630bcbd
#undef public_630bcc1
#undef public_630bce1
