#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46501);
CLANG_FORWARD_PROC_SYMBOL(public_6d465fd);
CLANG_FORWARD_PROC_SYMBOL(public_6d4671d);

#define public_6d46751 _public_6d46751
#define public_6d4675a _public_6d4675a
#define public_6d4677a _public_6d4677a
#define public_6d46784 _public_6d46784
#define public_6d467a2 _public_6d467a2
#define public_6d467af _public_6d467af
#define public_6d467b3 _public_6d467b3

PROC_DECLARE(0x6d4671d, internal_6d4671d, public_6d4671d);
extern "C" NAKED register_t __cdecl internal_6d4671d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        shl ecx, 7
        xor edx, edx
        mov eax, 0x3B9AC9F0
        div ecx
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        push edi
        mov edi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [ebp-4], ecx
        mov esi, eax
        test esi, esi
        jg public_6d46751
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ds : [eax+0x14], 0x45
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax]
        pop ecx
        public_6d46751 : nop
        mov ebx, dword ptr ss : [ebp+0x14]
        cmp esi, ebx
        jl public_6d4675a
        mov esi, ebx
        public_6d4675a : nop
        mov eax, ebx
        shl eax, 2
        push eax
        push dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edi+0x4C], esi
        push dword ptr ss : [ebp+8]
        call public_6d46501
        add esp, 0xC
        xor edi, edi
        test ebx, ebx
        mov dword ptr ss : [ebp+0x14], eax
        jbe public_6d467b3
        public_6d4677a : nop
        mov eax, ebx
        sub eax, edi
        cmp esi, eax
        jb public_6d46784
        mov esi, eax
        public_6d46784 : nop
        mov eax, esi
        imul eax, dword ptr ss : [ebp+0x10]
        shl eax, 7
        push eax
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6d465fd
        add esp, 0xC
        test esi, esi
        jbe public_6d467af
        mov ecx, esi
        public_6d467a2 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [edx+edi*4], eax
        add eax, dword ptr ss : [ebp-4]
        inc edi
        dec ecx
        jne public_6d467a2
        public_6d467af : nop
        cmp edi, ebx
        jb public_6d4677a
        public_6d467b3 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4671d)
    }
}

#undef public_6d46751
#undef public_6d4675a
#undef public_6d4677a
#undef public_6d46784
#undef public_6d467a2
#undef public_6d467af
#undef public_6d467b3
