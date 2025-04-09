#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51fbc0);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);

#define public_51fbe4 _public_51fbe4
#define public_51fbf0 _public_51fbf0
#define public_51fbff _public_51fbff
#define public_51fc24 _public_51fc24
#define public_51fc32 _public_51fc32
#define public_51fc41 _public_51fc41
#define public_51fc51 _public_51fc51
#define public_51fc60 _public_51fc60
#define public_51fc6e _public_51fc6e

PROC_DECLARE(0x51fbc0, internal_51fbc0, public_51fbc0);
extern "C" NAKED register_t __cdecl internal_51fbc0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [public_5c60bc]
        push edi
        mov ecx, offset public_675350
        call esi
        mov ecx, offset public_675340
        call esi
        mov ebp, dword ptr ds : [public_5c71d8]
        mov ebx, offset public_6752f8
        public_51fbe4 : nop
        mov esi, dword ptr ds : [ebx-4]
        mov edi, dword ptr ds : [ebx]
        cmp esi, edi
        jae public_51fbff
        lea ecx, ds:[ecx]
        public_51fbf0 : nop
        mov eax, dword ptr ds : [esi]
        push eax
        call ebp
        add esi, 4
        add esp, 4
        cmp esi, edi
        jb public_51fbf0
        public_51fbff : nop
        mov esi, dword ptr ds : [ebx-4]
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        lea edi, ds:[ebx-8]
        je public_51fc41
        mov ecx, dword ptr ds : [ebx]
        mov eax, ecx
        sub eax, esi
        sar eax, 2
        test eax, eax
        jbe public_51fc41
        mov eax, ecx
        cmp eax, ecx
        je public_51fc32
        public_51fc24 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], edx
        add eax, 4
        add esi, 4
        cmp eax, ecx
        jne public_51fc24
        public_51fc32 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        push esi
        mov ecx, edi
        call public_53aaa0
        mov dword ptr ds : [edi+8], esi
        public_51fc41 : nop
        add ebx, 0x10
        cmp ebx, offset public_675348
        jl public_51fbe4
        mov esi, offset public_6752f8
        public_51fc51 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi-4]
        mov eax, edx
        cmp eax, edx
        je public_51fc6e
        lea esp, ss:[esp]
        public_51fc60 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_51fc60
        public_51fc6e : nop
        mov dword ptr ds : [esi], ecx
        add esi, 0x10
        cmp esi, offset public_675348
        jl public_51fc51
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x51fbc0)
    }
}

#undef public_51fbe4
#undef public_51fbf0
#undef public_51fbff
#undef public_51fc24
#undef public_51fc32
#undef public_51fc41
#undef public_51fc51
#undef public_51fc60
#undef public_51fc6e
