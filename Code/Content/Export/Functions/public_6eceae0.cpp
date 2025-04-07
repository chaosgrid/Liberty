#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f5cf60);

#define public_6eceb45 _public_6eceb45
#define public_6eceb58 _public_6eceb58
#define public_6eceb77 _public_6eceb77
#define public_6eceb84 _public_6eceb84
#define public_6eceb90 _public_6eceb90
#define public_6eceb9a _public_6eceb9a
#define public_6eceba1 _public_6eceba1
#define public_6eceba9 _public_6eceba9
#define public_6ecebb3 _public_6ecebb3

PROC_DECLARE(0x6eceae0, internal_6eceae0, public_6eceae0);
extern "C" NAKED register_t __cdecl internal_6eceae0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ds : [esi+0x3C]
        push edi
        push eax
        mov eax, dword ptr ds : [esi+4]
        push ecx
        mov ecx, dword ptr ds : [eax+0xC]
        lea edx, ds:[esi+0xC]
        push edx
        push ecx
        call dword ptr ds : [public_6fb3424]
        add esp, 0x10
        test eax, eax
        jne public_6ecebb3
        mov edi, dword ptr ds : [esi+4]
        lea edx, ds:[edi+0xC]
        push edx
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ecebb3
        mov ecx, dword ptr ds : [edi+8]
        mov byte ptr ds : [edi+0x2C8], 1
        call public_6f481e0
        test eax, 0x3FFFFFFF
        je public_6eceb45
        push 0
        push 0
        push 1
        push eax
        call dword ptr ds : [public_6fb3650]
        add esp, 0x10
        public_6eceb45 : nop
        mov eax, dword ptr ds : [edi+0xA8]
        mov byte ptr ds : [edi+0x218], 1
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6eceba9
        public_6eceb58 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        push 1
        call public_6f33fd0
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6eceb84
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6eceba1
        public_6eceb77 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_6eceb77
        jmp public_6eceba1
        public_6eceb84 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eceb9a
        lea esp, ss:[esp]
        public_6eceb90 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6eceb90
        public_6eceb9a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6eceba1
        mov esi, eax
        public_6eceba1 : nop
        cmp esi, dword ptr ds : [edi+0xA8]
        jne public_6eceb58
        public_6eceba9 : nop
        push 1
        call public_6f5cf60
        add esp, 4
        public_6ecebb3 : nop
        pop edi
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eceae0)
    }
}

#undef public_6eceb45
#undef public_6eceb58
#undef public_6eceb77
#undef public_6eceb84
#undef public_6eceb90
#undef public_6eceb9a
#undef public_6eceba1
#undef public_6eceba9
#undef public_6ecebb3
