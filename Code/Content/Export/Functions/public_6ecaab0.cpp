#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec9b30);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1670);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);

#define public_6ecaae7 _public_6ecaae7
#define public_6ecaaf1 _public_6ecaaf1
#define public_6ecaaf5 _public_6ecaaf5
#define public_6ecaaf9 _public_6ecaaf9
#define public_6ecab10 _public_6ecab10
#define public_6ecab36 _public_6ecab36
#define public_6ecab4b _public_6ecab4b
#define public_6ecab53 _public_6ecab53
#define public_6ecab5d _public_6ecab5d
#define public_6ecab62 _public_6ecab62
#define public_6ecab64 _public_6ecab64
#define public_6ecab77 _public_6ecab77

PROC_DECLARE(0x6ecaab0, internal_6ecaab0, public_6ecaab0);
extern "C" NAKED register_t __cdecl internal_6ecaab0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        lea eax, ds:[edi+0xC]
        push eax
        call public_6f15b90
        mov ebp, eax
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [eax+0xF0]
        lea ecx, ds:[eax+0xEC]
        mov eax, dword ptr ds : [edx+4]
        mov esi, edx
        mov edx, dword ptr ds : [ecx+8]
        cmp eax, edx
        mov dword ptr ss : [esp+0x10], ebp
        je public_6ecaaf9
        mov ebx, dword ptr ds : [edi+0x40]
        public_6ecaae7 : nop
        cmp dword ptr ds : [eax+0xC], ebx
        jae public_6ecaaf1
        mov eax, dword ptr ds : [eax+8]
        jmp public_6ecaaf5
        public_6ecaaf1 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_6ecaaf5 : nop
        cmp eax, edx
        jne public_6ecaae7
        public_6ecaaf9 : nop
        lea ebx, ds:[edi+0x40]
        push ebx
        call public_6ed1670
        cmp esi, eax
        je public_6ecab77
        and ebp, 0x3FFFFFFF
        lea esp, ss:[esp]
        public_6ecab10 : nop
        test ebp, ebp
        je public_6ecab36
        mov eax, dword ptr ds : [esi+0x10]
        test eax, 0x3FFFFFFF
        je public_6ecab36
        mov ecx, dword ptr ds : [edi+0x48]
        mov edx, dword ptr ds : [edi+0x44]
        push ecx
        mov ecx, dword ptr ds : [edi+4]
        push edx
        push eax
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        call public_6ec9b30
        fstp st(0)
        public_6ecab36 : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6ecab4b
        push eax
        call public_6ed1d10
        add esp, 4
        jmp public_6ecab62
        public_6ecab4b : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ecab5d
        public_6ecab53 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6ecab53
        public_6ecab5d : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6ecab64
        public_6ecab62 : nop
        mov esi, eax
        public_6ecab64 : nop
        mov ecx, dword ptr ds : [edi+4]
        add ecx, 0xEC
        push ebx
        call public_6ed1670
        cmp esi, eax
        jne public_6ecab10
        public_6ecab77 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ecaab0)
    }
}

#undef public_6ecaae7
#undef public_6ecaaf1
#undef public_6ecaaf5
#undef public_6ecaaf9
#undef public_6ecab10
#undef public_6ecab36
#undef public_6ecab4b
#undef public_6ecab53
#undef public_6ecab5d
#undef public_6ecab62
#undef public_6ecab64
#undef public_6ecab77
