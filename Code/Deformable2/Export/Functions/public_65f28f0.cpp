#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f28f0);
CLANG_FORWARD_PROC_SYMBOL(public_65f2cc0);
CLANG_FORWARD_PROC_SYMBOL(public_65f3090);
CLANG_FORWARD_PROC_SYMBOL(public_65f3320);
CLANG_FORWARD_PROC_SYMBOL(public_65f33a0);
CLANG_FORWARD_PROC_SYMBOL(public_65f3440);
CLANG_FORWARD_PROC_SYMBOL(public_65f34d0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65f2930 _public_65f2930
#define public_65f2945 _public_65f2945
#define public_65f2950 _public_65f2950
#define public_65f295a _public_65f295a
#define public_65f2961 _public_65f2961
#define public_65f2965 _public_65f2965
#define public_65f2990 _public_65f2990
#define public_65f29ba _public_65f29ba
#define public_65f29e9 _public_65f29e9
#define public_65f29f0 _public_65f29f0
#define public_65f2a11 _public_65f2a11
#define public_65f2a1c _public_65f2a1c

PROC_DECLARE(0x65f28f0, internal_65f28f0, public_65f28f0);
extern "C" NAKED register_t __cdecl internal_65f28f0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+4]
        dec ecx
        push ebp
        mov ebp, ecx
        test ebp, ebp
        mov dword ptr ds : [ebx+4], ecx
        jg public_65f2a1c
        push esi
        push edi
        lea esi, ds:[ebx+8]
        push esi
        mov ecx, offset public_6603158
        call public_65f3440
        push esi
        mov ecx, offset public_6603158
        mov edi, eax
        call public_65f3320
        mov esi, eax
        cmp esi, edi
        je public_65f2965
        nop 
        lea esp, ss:[esp]
        public_65f2930 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_65f2945
        push ecx
        call public_65f33a0
        add esp, 4
        jmp public_65f2961
        public_65f2945 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_65f295a
        lea ecx, ds:[ecx]
        public_65f2950 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_65f2950
        public_65f295a : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_65f2961
        mov eax, ecx
        public_65f2961 : nop
        cmp eax, edi
        jne public_65f2930
        public_65f2965 : nop
        mov eax, dword ptr ds : [public_6603168]
        test eax, eax
        mov dword ptr ss : [esp+0x10], esi
        je public_65f29e9
        mov ecx, dword ptr ds : [public_660315c]
        cmp esi, dword ptr ds : [ecx]
        jne public_65f29e9
        cmp edi, ecx
        jne public_65f29e9
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_6603160]
        cmp edi, eax
        mov esi, edi
        je public_65f29ba
        mov edi, edi
        public_65f2990 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_6603158
        call public_65f3090
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6600bb0
        mov eax, dword ptr ds : [public_6603160]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_65f2990
        mov ecx, dword ptr ds : [public_660315c]
        public_65f29ba : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_660315c]
        mov dword ptr ds : [public_6603168], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_660315c]
        mov dword ptr ds : [eax+8], eax
        mov edx, dword ptr ds : [ebx]
        push 1
        mov ecx, ebx
        call dword ptr ds : [edx+0x18]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_65f29e9 : nop
        cmp esi, edi
        je public_65f2a11
        lea ecx, ds:[ecx]
        public_65f29f0 : nop
        lea ecx, ss:[esp+0x10]
        call public_65f34d0
        push esi
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, offset public_6603158
        call public_65f2cc0
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        jne public_65f29f0
        public_65f2a11 : nop
        mov edx, dword ptr ds : [ebx]
        push 1
        mov ecx, ebx
        call dword ptr ds : [edx+0x18]
        pop edi
        pop esi
        public_65f2a1c : nop
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x65f28f0)
    }
}

#undef public_65f2930
#undef public_65f2945
#undef public_65f2950
#undef public_65f295a
#undef public_65f2961
#undef public_65f2965
#undef public_65f2990
#undef public_65f29ba
#undef public_65f29e9
#undef public_65f29f0
#undef public_65f2a11
#undef public_65f2a1c
