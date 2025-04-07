#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3b20);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5500);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5620);

#define public_6ce567a _public_6ce567a
#define public_6ce56a2 _public_6ce56a2
#define public_6ce56b3 _public_6ce56b3
#define public_6ce56bf _public_6ce56bf
#define public_6ce56c8 _public_6ce56c8
#define public_6ce56d0 _public_6ce56d0
#define public_6ce56e0 _public_6ce56e0
#define public_6ce56ef _public_6ce56ef
#define public_6ce56fb _public_6ce56fb

PROC_DECLARE(0x6ce5620, internal_6ce5620, public_6ce5620);
extern "C" NAKED register_t __cdecl internal_6ce5620()
{
    __asm
    {
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        je public_6ce56fb
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6ce56fb
        cmp cl, 0xFF
        je public_6ce56fb
        mov ebp, eax
        dec cl
        mov byte ptr ds : [eax-1], cl
        push ebp
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+0xC], 0
        call dword ptr ds : [public_6d64c80]
        mov edi, eax
        add esp, 4
        cmp edi, 0x7FFFFFFD
        jbe public_6ce567a
        call dword ptr ds : [public_6d64b4c]
        public_6ce567a : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6ce56a2
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6ce56a2
        cmp cl, 0xFF
        je public_6ce56a2
        test edi, edi
        jne public_6ce56c8
        dec cl
        mov byte ptr ds : [eax-1], cl
        push edi
        mov ecx, esi
        call public_6ce3b20
        pop edi
        pop esi
        pop ebp
        ret 
        public_6ce56a2 : nop
        test edi, edi
        jne public_6ce56b3
        push 1
        mov ecx, esi
        call public_6ce3b20
        pop edi
        pop esi
        pop ebp
        ret 
        public_6ce56b3 : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, 0x1F
        ja public_6ce56bf
        cmp eax, edi
        jae public_6ce56d0
        public_6ce56bf : nop
        push 1
        mov ecx, esi
        call public_6ce3b20
        public_6ce56c8 : nop
        mov ecx, esi
        push edi
        call public_6ce5500
        public_6ce56d0 : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, ebp
        jbe public_6ce56ef
        mov edx, edi
        nop 
        lea esp, ss:[esp]
        public_6ce56e0 : nop
        mov bp, word ptr ds : [ecx]
        mov word ptr ds : [eax], bp
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6ce56e0
        public_6ce56ef : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [eax+edi*2], 0
        public_6ce56fb : nop
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ce5620)
    }
}

#undef public_6ce567a
#undef public_6ce56a2
#undef public_6ce56b3
#undef public_6ce56bf
#undef public_6ce56c8
#undef public_6ce56d0
#undef public_6ce56e0
#undef public_6ce56ef
#undef public_6ce56fb
