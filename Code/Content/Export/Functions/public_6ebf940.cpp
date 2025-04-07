#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);

#define public_6ebf98e _public_6ebf98e
#define public_6ebf9c0 _public_6ebf9c0
#define public_6ebf9d7 _public_6ebf9d7
#define public_6ebf9e1 _public_6ebf9e1
#define public_6ebf9f8 _public_6ebf9f8
#define public_6ebfa06 _public_6ebfa06
#define public_6ebfa0d _public_6ebfa0d

PROC_DECLARE(0x6ebf940, internal_6ebf940, public_6ebf940);
extern "C" NAKED register_t __cdecl internal_6ebf940()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        test eax, eax
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        mov byte ptr ss : [esp+0x13], 0
        je public_6ebfa0d
        xor bl, bl
        mov edi, offset public_6fb57a0
        lea esi, ss:[ebp+0x10]
        mov ecx, 5
        xor eax, eax
        repe cmpsb
        je public_6ebf98e
        test dword ptr ss : [ebp+0x74], 0x3FFFFFFF
        jne public_6ebf98e
        lea ecx, ss:[ebp+0xC]
        push ecx
        mov ecx, dword ptr ss : [ebp+4]
        call public_6f15940
        test eax, 0x3FFFFFFF
        mov dword ptr ss : [ebp+0x74], eax
        jne public_6ebf98e
        mov bl, 1
        public_6ebf98e : nop
        mov edi, offset public_6fb57a0
        lea esi, ss:[ebp+0x44]
        mov ecx, 5
        xor edx, edx
        repe cmpsb
        je public_6ebf9c0
        test dword ptr ss : [ebp+0x78], 0x3FFFFFFF
        jne public_6ebf9c0
        mov ecx, dword ptr ss : [ebp+4]
        lea eax, ss:[ebp+0x40]
        push eax
        call public_6f15940
        test eax, 0x3FFFFFFF
        mov dword ptr ss : [ebp+0x78], eax
        je public_6ebfa0d
        public_6ebf9c0 : nop
        test bl, bl
        jne public_6ebfa0d
        mov esi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp+0x74]
        mov edi, dword ptr ds : [esi]
        xor cl, cl
        xor dl, dl
        cmp eax, edi
        jne public_6ebf9d7
        mov cl, 1
        public_6ebf9d7 : nop
        mov ebp, dword ptr ss : [ebp+0x78]
        cmp ebp, dword ptr ds : [esi+4]
        jne public_6ebf9e1
        mov dl, 1
        public_6ebf9e1 : nop
        and eax, 0x3FFFFFFF
        je public_6ebf9f8
        test ebp, 0x3FFFFFFF
        je public_6ebf9f8
        test cl, cl
        je public_6ebfa0d
        test dl, dl
        jmp public_6ebfa06
        public_6ebf9f8 : nop
        test eax, eax
        je public_6ebfa0d
        test ebp, 0x3FFFFFFF
        jne public_6ebfa0d
        test cl, cl
        public_6ebfa06 : nop
        je public_6ebfa0d
        mov byte ptr ss : [esp+0x13], 1
        public_6ebfa0d : nop
        mov al, byte ptr ss : [esp+0x13]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ebf940)
    }
}

#undef public_6ebf98e
#undef public_6ebf9c0
#undef public_6ebf9d7
#undef public_6ebf9e1
#undef public_6ebf9f8
#undef public_6ebfa06
#undef public_6ebfa0d
