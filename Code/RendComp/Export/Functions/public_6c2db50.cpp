#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2d710);
CLANG_FORWARD_PROC_SYMBOL(public_6c2d720);

#define public_6c2db70 _public_6c2db70
#define public_6c2db94 _public_6c2db94
#define public_6c2db98 _public_6c2db98
#define public_6c2db9d _public_6c2db9d
#define public_6c2dbef _public_6c2dbef
#define public_6c2dc02 _public_6c2dc02
#define public_6c2dc13 _public_6c2dc13

PROC_DECLARE(0x6c2db50, internal_6c2db50, public_6c2db50);
extern "C" NAKED register_t __cdecl internal_6c2db50()
{
    __asm
    {
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp eax, 0x10
        jne public_6c2dc02
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        push ebx
        nop 
        public_6c2db70 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6c2db98
        test cl, cl
        je public_6c2db94
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6c2db98
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6c2db70
        public_6c2db94 : nop
        xor eax, eax
        jmp public_6c2db9d
        public_6c2db98 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6c2db9d : nop
        test eax, eax
        pop ebx
        jne public_6c2dc02
        push 1
        push 0x10
        call dword ptr ds : [public_6c36044]
        mov edx, eax
        add esp, 8
        test edx, edx
        je public_6c2dbef
        mov ecx, edx
        call public_6c2d710
        push edi
        mov dword ptr ds : [edx], offset public_6c36438
        mov dword ptr ds : [edx+0xC], 1
        call public_6c2d720
        mov esi, eax
        test esi, esi
        je public_6c2dc13
        push edx
        call dword ptr ds : [public_6c3603c]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [ecx], eax
        mov eax, esi
        pop esi
        pop ebp
        ret 0xC
        public_6c2dbef : nop
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        xor ecx, ecx
        pop esi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], ecx
        pop ebp
        ret 0xC
        public_6c2dc02 : nop
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr ds : [edx], ebp
        mov eax, 0xFFFFFFFD
        pop ebp
        ret 0xC
        public_6c2dc13 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [eax], edx
        mov eax, esi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6c2db50)
    }
}

#undef public_6c2db70
#undef public_6c2db94
#undef public_6c2db98
#undef public_6c2db9d
#undef public_6c2dbef
#undef public_6c2dc02
#undef public_6c2dc13
