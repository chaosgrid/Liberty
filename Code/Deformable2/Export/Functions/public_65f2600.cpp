#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f2600);
CLANG_FORWARD_PROC_SYMBOL(public_65f2a30);
CLANG_FORWARD_PROC_SYMBOL(public_65f2cc0);
CLANG_FORWARD_PROC_SYMBOL(public_65f3090);
CLANG_FORWARD_PROC_SYMBOL(public_65f34d0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65f2634 _public_65f2634
#define public_65f265e _public_65f265e
#define public_65f2687 _public_65f2687
#define public_65f2690 _public_65f2690
#define public_65f26b3 _public_65f26b3
#define public_65f26b8 _public_65f26b8

PROC_DECLARE(0x65f2600, internal_65f2600, public_65f2600);
extern "C" NAKED register_t __cdecl internal_65f2600()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [public_660315c]
        mov edx, dword ptr ds : [public_6603168]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push esi
        xor ebx, ebx
        cmp edx, ebx
        push edi
        mov edi, eax
        mov dword ptr ss : [esp+0xC], ecx
        je public_65f2687
        mov edx, ecx
        cmp ecx, edx
        jne public_65f2687
        mov edi, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [public_6603160]
        cmp edi, ecx
        mov esi, edi
        je public_65f265e
        public_65f2634 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_6603158
        call public_65f3090
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6600bb0
        mov ecx, dword ptr ds : [public_6603160]
        add esp, 4
        cmp esi, ecx
        mov edi, esi
        jne public_65f2634
        mov eax, dword ptr ds : [public_660315c]
        public_65f265e : nop
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [public_660315c]
        mov dword ptr ds : [public_6603168], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_660315c]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_6603158
        mov dword ptr ds : [eax+8], eax
        call public_65f2a30
        jmp public_65f26b3
        public_65f2687 : nop
        cmp ecx, eax
        je public_65f26b8
        nop 
        lea esp, ss:[esp]
        public_65f2690 : nop
        mov esi, ecx
        lea ecx, ss:[esp+0xC]
        call public_65f34d0
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, offset public_6603158
        call public_65f2cc0
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, edi
        jne public_65f2690
        public_65f26b3 : nop
        mov eax, dword ptr ds : [public_660315c]
        public_65f26b8 : nop
        push eax
        call public_6600bb0
        mov eax, dword ptr ds : [public_6603160]
        push eax
        mov dword ptr ds : [public_660315c], ebx
        mov dword ptr ds : [public_6603168], ebx
        call public_6600bb0
        add esp, 8
        pop edi
        pop esi
        mov dword ptr ds : [public_6603160], ebx
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x65f2600)
    }
}

#undef public_65f2634
#undef public_65f265e
#undef public_65f2687
#undef public_65f2690
#undef public_65f26b3
#undef public_65f26b8
