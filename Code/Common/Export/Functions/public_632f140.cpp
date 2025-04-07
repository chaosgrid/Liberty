#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632f140);

#define public_632f150 _public_632f150
#define public_632f15e _public_632f15e
#define public_632f168 _public_632f168
#define public_632f176 _public_632f176
#define public_632f17b _public_632f17b
#define public_632f180 _public_632f180
#define public_632f190 _public_632f190
#define public_632f19b _public_632f19b

PROC_DECLARE(0x632f140, internal_632f140, public_632f140);
extern "C" NAKED register_t __cdecl internal_632f140()
{
    __asm
    {
        push ebx
        push esi
        mov eax, ecx
        push edi
        lea edi, ds:[eax+0x1C]
        xor edx, edx
        mov esi, edi
        lea esp, ss:[esp]
        public_632f150 : nop
        cmp dword ptr ds : [esi], 0
        je public_632f15e
        inc edx
        add esi, 0x14
        cmp edx, 8
        jb public_632f150
        public_632f15e : nop
        mov ebx, dword ptr ss : [esp+0x10]
        xor esi, esi
        test edx, edx
        jbe public_632f17b
        public_632f168 : nop
        cmp dword ptr ds : [edi], ebx
        je public_632f176
        inc esi
        add edi, 0x14
        cmp esi, edx
        jb public_632f168
        jmp public_632f17b
        public_632f176 : nop
        cmp esi, 0xFFFFFFFF
        jne public_632f19b
        public_632f17b : nop
        xor edi, edi
        lea esi, ds:[eax+0x10]
        public_632f180 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_632f190
        push ebx
        call public_632f140
        test eax, eax
        jne public_632f19b
        public_632f190 : nop
        inc edi
        add esi, 4
        cmp edi, 3
        jb public_632f180
        xor eax, eax
        public_632f19b : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x632f140)
    }
}

#undef public_632f150
#undef public_632f15e
#undef public_632f168
#undef public_632f176
#undef public_632f17b
#undef public_632f180
#undef public_632f190
#undef public_632f19b
