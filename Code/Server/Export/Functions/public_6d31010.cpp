#include "Server-PCH.h"


#define public_6d31020 _public_6d31020
#define public_6d31037 _public_6d31037
#define public_6d3104e _public_6d3104e
#define public_6d31050 _public_6d31050
#define public_6d3105a _public_6d3105a
#define public_6d3106a _public_6d3106a

PROC_DECLARE(0x6d31010, internal_6d31010, public_6d31010);
extern "C" NAKED register_t __cdecl internal_6d31010()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0xC]
        cmp eax, edi
        je public_6d31037
        public_6d31020 : nop
        mov si, word ptr ds : [edx]
        test si, si
        je public_6d3106a
        cmp word ptr ds : [eax], si
        jne public_6d3106a
        add eax, 2
        add edx, 2
        cmp eax, edi
        jne public_6d31020
        public_6d31037 : nop
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d3105a
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d3104e : nop
        je public_6d3106a
        public_6d31050 : nop
        pop edi
        mov eax, 1
        pop esi
        ret 8
        public_6d3105a : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d31050
        cmp dword ptr ds : [eax+8], edx
        jmp public_6d3104e
        public_6d3106a : nop
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d31010)
    }
}

#undef public_6d31020
#undef public_6d31037
#undef public_6d3104e
#undef public_6d31050
#undef public_6d3105a
#undef public_6d3106a
