#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7f23);
CLANG_FORWARD_PROC_SYMBOL(public_65d8120);
CLANG_FORWARD_PROC_SYMBOL(public_65d8535);
CLANG_FORWARD_PROC_SYMBOL(public_65d9b5f);
CLANG_FORWARD_PROC_SYMBOL(public_65dd010);
CLANG_FORWARD_PROC_SYMBOL(public_65def65);
CLANG_FORWARD_PROC_SYMBOL(public_65df767);
CLANG_FORWARD_PROC_SYMBOL(public_65df8ee);
CLANG_FORWARD_PROC_SYMBOL(public_65df946);
CLANG_FORWARD_PROC_SYMBOL(public_65dfc91);

#define public_65df7b1 _public_65df7b1
#define public_65df7cb _public_65df7cb
#define public_65df7ce _public_65df7ce
#define public_65df7d3 _public_65df7d3
#define public_65df809 _public_65df809
#define public_65df83b _public_65df83b
#define public_65df84b _public_65df84b
#define public_65df861 _public_65df861
#define public_65df869 _public_65df869
#define public_65df873 _public_65df873
#define public_65df896 _public_65df896
#define public_65df89b _public_65df89b
#define public_65df8e7 _public_65df8e7

PROC_DECLARE(0x65df767, internal_65df767, public_65df767);
extern "C" NAKED register_t __cdecl internal_65df767()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        xor edi, edi
        cmp dword ptr ss : [ebp+8], edi
        je public_65df7cb
        push 0x3D
        push dword ptr ss : [ebp+8]
        call public_65dfc91
        mov esi, eax
        pop ecx
        cmp esi, edi
        pop ecx
        mov dword ptr ss : [ebp-8], esi
        je public_65df7cb
        cmp dword ptr ss : [ebp+8], esi
        je public_65df7cb
        mov eax, dword ptr ds : [public_65e6154]
        xor ebx, ebx
        cmp byte ptr ds : [esi+1], bl
        sete bl
        cmp eax, dword ptr ds : [public_65e6158]
        jne public_65df7b1
        push eax
        call public_65df946
        pop ecx
        mov dword ptr ds : [public_65e6154], eax
        public_65df7b1 : nop
        cmp eax, edi
        jne public_65df809
        cmp dword ptr ss : [ebp+0xC], edi
        je public_65df7d3
        cmp dword ptr ds : [public_65e615c], edi
        je public_65df7d3
        call public_65def65
        test eax, eax
        je public_65df809
        public_65df7cb : nop
        or eax, 0xFFFFFFFF
        public_65df7ce : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_65df7d3 : nop
        cmp ebx, edi
        jne public_65df8e7
        push 4
        call public_65d8535
        cmp eax, edi
        pop ecx
        mov dword ptr ds : [public_65e6154], eax
        je public_65df7cb
        mov dword ptr ds : [eax], edi
        cmp dword ptr ds : [public_65e615c], edi
        jne public_65df809
        push 4
        call public_65d8535
        cmp eax, edi
        pop ecx
        mov dword ptr ds : [public_65e615c], eax
        je public_65df7cb
        mov dword ptr ds : [eax], edi
        public_65df809 : nop
        sub esi, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [public_65e6154]
        mov dword ptr ss : [ebp-4], edi
        push esi
        push dword ptr ss : [ebp+8]
        call public_65df8ee
        mov esi, eax
        pop ecx
        test esi, esi
        pop ecx
        jl public_65df869
        cmp dword ptr ds : [edi], 0
        je public_65df869
        test ebx, ebx
        je public_65df861
        push dword ptr ds : [edi+esi*4]
        lea edi, ds:[edi+esi*4]
        call public_65d7f23
        pop ecx
        public_65df83b : nop
        cmp dword ptr ds : [edi], 0
        je public_65df84b
        mov eax, dword ptr ds : [edi+4]
        inc esi
        mov dword ptr ds : [edi], eax
        add edi, 4
        jmp public_65df83b
        public_65df84b : nop
        mov eax, esi
        shl eax, 2
        push eax
        push dword ptr ss : [ebp-4]
        call public_65d9b5f
        pop ecx
        test eax, eax
        pop ecx
        je public_65df89b
        jmp public_65df896
        public_65df861 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edi+esi*4], eax
        jmp public_65df89b
        public_65df869 : nop
        test ebx, ebx
        jne public_65df8e7
        test esi, esi
        jge public_65df873
        neg esi
        public_65df873 : nop
        lea eax, ds:[esi*4+8]
        push eax
        push edi
        call public_65d9b5f
        pop ecx
        test eax, eax
        pop ecx
        je public_65df7cb
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+esi*4], ecx
        and dword ptr ds : [eax+esi*4+4], 0
        public_65df896 : nop
        mov dword ptr ds : [public_65e6154], eax
        public_65df89b : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_65df8e7
        push dword ptr ss : [ebp+8]
        call public_65d8120
        inc eax
        inc eax
        push eax
        call public_65d8535
        mov esi, eax
        pop ecx
        test esi, esi
        pop ecx
        je public_65df8e7
        push dword ptr ss : [ebp+8]
        push esi
        call public_65dd010
        mov eax, esi
        pop ecx
        sub eax, dword ptr ss : [ebp+8]
        pop ecx
        add eax, dword ptr ss : [ebp-8]
        and byte ptr ds : [eax], 0
        inc eax
        neg ebx
        sbb ebx, ebx
        not ebx
        and ebx, eax
        push ebx
        push esi
        call dword ptr ds : [public_65e101c]
        push esi
        call public_65d7f23
        pop ecx
        public_65df8e7 : nop
        xor eax, eax
        jmp public_65df7ce
        UNREACHABLE_TRAP(0x65df767)
    }
}

#undef public_65df7b1
#undef public_65df7cb
#undef public_65df7ce
#undef public_65df7d3
#undef public_65df809
#undef public_65df83b
#undef public_65df84b
#undef public_65df861
#undef public_65df869
#undef public_65df873
#undef public_65df896
#undef public_65df89b
#undef public_65df8e7
