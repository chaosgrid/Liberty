#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7723);
CLANG_FORWARD_PROC_SYMBOL(public_5b77f7);

#define public_5b7805 _public_5b7805
#define public_5b782d _public_5b782d
#define public_5b7831 _public_5b7831
#define public_5b783b _public_5b783b
#define public_5b7845 _public_5b7845
#define public_5b784f _public_5b784f
#define public_5b7852 _public_5b7852
#define public_5b7873 _public_5b7873
#define public_5b7881 _public_5b7881
#define public_5b788b _public_5b788b

PROC_DECLARE(0x5b77f7, internal_5b77f7, public_5b77f7);
extern "C" NAKED register_t __cdecl internal_5b77f7()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        mov eax, ebx
        push edi
        lea edx, ds:[eax+1]
        public_5b7805 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        test cl, cl
        jne public_5b7805
        sub eax, edx
        cmp eax, 1
        jb public_5b7831
        cmp byte ptr ds : [ebx+1], 0x3A
        jne public_5b7831
        mov esi, dword ptr ss : [ebp+0xC]
        test esi, esi
        je public_5b782d
        push 2
        push ebx
        push esi
        call public_5b7723
        mov byte ptr ds : [esi+2], 0
        public_5b782d : nop
        inc ebx
        inc ebx
        jmp public_5b783b
        public_5b7831 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_5b783b
        mov byte ptr ds : [eax], 0
        public_5b783b : nop
        mov cl, byte ptr ds : [ebx]
        xor eax, eax
        test cl, cl
        mov edx, ebx
        je public_5b7881
        public_5b7845 : nop
        cmp cl, 0x2F
        je public_5b784f
        cmp cl, 0x5C
        jne public_5b7852
        public_5b784f : nop
        lea eax, ds:[edx+1]
        public_5b7852 : nop
        inc edx
        mov cl, byte ptr ds : [edx]
        test cl, cl
        jne public_5b7845
        test eax, eax
        je public_5b7881
        mov edi, dword ptr ss : [ebp+0x10]
        test edi, edi
        je public_5b788b
        sub eax, ebx
        mov esi, eax
        mov eax, 0xFF
        cmp esi, eax
        jbe public_5b7873
        mov esi, eax
        public_5b7873 : nop
        push esi
        push ebx
        push edi
        call public_5b7723
        mov byte ptr ds : [esi+edi], 0
        jmp public_5b788b
        public_5b7881 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_5b788b
        mov byte ptr ds : [eax], 0
        public_5b788b : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x5b77f7)
    }
}

#undef public_5b7805
#undef public_5b782d
#undef public_5b7831
#undef public_5b783b
#undef public_5b7845
#undef public_5b784f
#undef public_5b7852
#undef public_5b7873
#undef public_5b7881
#undef public_5b788b
