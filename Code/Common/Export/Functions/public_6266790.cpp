#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6266790);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62667ac _public_62667ac
#define public_62667b4 _public_62667b4
#define public_62667bf _public_62667bf
#define public_62667c7 _public_62667c7
#define public_62667d2 _public_62667d2
#define public_62667e0 _public_62667e0
#define public_62667fa _public_62667fa
#define public_6266813 _public_6266813
#define public_626681b _public_626681b
#define public_6266823 _public_6266823
#define public_626682b _public_626682b
#define public_6266833 _public_6266833
#define public_6266843 _public_6266843
#define public_626684b _public_626684b
#define public_6266852 _public_6266852
#define public_6266860 _public_6266860
#define public_6266870 _public_6266870
#define public_6266878 _public_6266878
#define public_6266882 _public_6266882
#define public_626689c _public_626689c
#define public_62668b5 _public_62668b5
#define public_62668c9 _public_62668c9
#define public_62668d1 _public_62668d1
#define public_62668d7 _public_62668d7
#define public_62668f6 _public_62668f6
#define public_62668fe _public_62668fe
#define public_6266908 _public_6266908
#define public_626690e _public_626690e

PROC_DECLARE(0x6266790, internal_6266790, public_6266790);
extern "C" NAKED register_t __cdecl internal_6266790()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ebx, ecx
        cmp ebx, esi
        push edi
        je public_626690e
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_62667ac
        xor edi, edi
        jmp public_62667b4
        public_62667ac : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 2
        public_62667b4 : nop
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        jne public_62667bf
        xor ecx, ecx
        jmp public_62667c7
        public_62667bf : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 2
        public_62667c7 : nop
        cmp edi, ecx
        ja public_6266813
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        je public_62667e0
        public_62667d2 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_62667d2
        public_62667e0 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_62667fa
        mov eax, dword ptr ds : [ebx+4]
        xor esi, esi
        lea ecx, ds:[eax+esi*4]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+8], ecx
        mov eax, ebx
        pop ebx
        ret 4
        public_62667fa : nop
        mov esi, dword ptr ds : [esi+8]
        sub esi, eax
        mov eax, dword ptr ds : [ebx+4]
        sar esi, 2
        lea ecx, ds:[eax+esi*4]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+8], ecx
        mov eax, ebx
        pop ebx
        ret 4
        public_6266813 : nop
        test eax, eax
        jne public_626681b
        xor edi, edi
        jmp public_6266823
        public_626681b : nop
        mov edi, dword ptr ds : [esi+8]
        sub edi, eax
        sar edi, 2
        public_6266823 : nop
        test edx, edx
        jne public_626682b
        xor ecx, ecx
        jmp public_6266833
        public_626682b : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, edx
        sar ecx, 2
        public_6266833 : nop
        cmp edi, ecx
        ja public_62668b5
        test edx, edx
        jne public_6266843
        xor ecx, ecx
        jmp public_626684b
        public_6266843 : nop
        mov ecx, dword ptr ds : [ebx+8]
        sub ecx, edx
        sar ecx, 2
        public_626684b : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_6266860
        public_6266852 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], edi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6266852
        public_6266860 : nop
        mov edi, dword ptr ds : [esi+8]
        cmp ecx, edi
        mov edx, dword ptr ds : [ebx+8]
        mov eax, ecx
        je public_6266882
        lea esp, ss:[esp]
        public_6266870 : nop
        test edx, edx
        je public_6266878
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        public_6266878 : nop
        add eax, 4
        add edx, 4
        cmp eax, edi
        jne public_6266870
        public_6266882 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_626689c
        mov edx, dword ptr ds : [ebx+4]
        xor esi, esi
        lea eax, ds:[edx+esi*4]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        public_626689c : nop
        mov esi, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ebx+4]
        sub esi, eax
        sar esi, 2
        lea eax, ds:[edx+esi*4]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        public_62668b5 : nop
        push edx
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_62668c9
        xor eax, eax
        jmp public_62668d1
        public_62668c9 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_62668d1 : nop
        test eax, eax
        jge public_62668d7
        xor eax, eax
        public_62668d7 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6391d9c
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_6266908
        public_62668f6 : nop
        test ecx, ecx
        je public_62668fe
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_62668fe : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_62668f6
        public_6266908 : nop
        mov dword ptr ds : [ebx+0xC], ecx
        mov dword ptr ds : [ebx+8], ecx
        public_626690e : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6266790)
    }
}

#undef public_62667ac
#undef public_62667b4
#undef public_62667bf
#undef public_62667c7
#undef public_62667d2
#undef public_62667e0
#undef public_62667fa
#undef public_6266813
#undef public_626681b
#undef public_6266823
#undef public_626682b
#undef public_6266833
#undef public_6266843
#undef public_626684b
#undef public_6266852
#undef public_6266860
#undef public_6266870
#undef public_6266878
#undef public_6266882
#undef public_626689c
#undef public_62668b5
#undef public_62668c9
#undef public_62668d1
#undef public_62668d7
#undef public_62668f6
#undef public_62668fe
#undef public_6266908
#undef public_626690e
