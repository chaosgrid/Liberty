#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6614290);

#define public_66142a7 _public_66142a7
#define public_66142c9 _public_66142c9
#define public_66142d1 _public_66142d1
#define public_66142d4 _public_66142d4
#define public_66142dd _public_66142dd
#define public_66142e1 _public_66142e1
#define public_66142e8 _public_66142e8

PROC_DECLARE(0x6614290, internal_6614290, public_6614290);
extern "C" NAKED register_t __cdecl internal_6614290()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        push ebx
        mov ebx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [eax+4]
        cmp edx, ebx
        je public_66142e8
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi]
        public_66142a7 : nop
        mov ecx, dword ptr ds : [edx+0xC]
        cmp ecx, edi
        jne public_66142d1
        test ecx, ecx
        je public_66142c9
        cmp ecx, 1
        je public_66142c9
        cmp ecx, 2
        jne public_66142dd
        mov ecx, dword ptr ds : [edx+0x10]
        mov ebp, dword ptr ds : [esi+4]
        cmp ecx, ebp
        setb cl
        jmp public_66142d4
        public_66142c9 : nop
        mov ecx, dword ptr ds : [edx+0x18]
        mov ebp, dword ptr ds : [esi+0xC]
        cmp ecx, ebp
        public_66142d1 : nop
        setl cl
        public_66142d4 : nop
        test cl, cl
        je public_66142dd
        mov edx, dword ptr ds : [edx+8]
        jmp public_66142e1
        public_66142dd : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_66142e1 : nop
        cmp edx, ebx
        jne public_66142a7
        pop edi
        pop esi
        pop ebp
        public_66142e8 : nop
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6614290)
    }
}

#undef public_66142a7
#undef public_66142c9
#undef public_66142d1
#undef public_66142d4
#undef public_66142dd
#undef public_66142e1
#undef public_66142e8
