#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c2ed70 _public_6c2ed70
#define public_6c2ed94 _public_6c2ed94
#define public_6c2ed98 _public_6c2ed98
#define public_6c2ed9d _public_6c2ed9d
#define public_6c2eded _public_6c2eded
#define public_6c2ee01 _public_6c2ee01
#define public_6c2ee13 _public_6c2ee13

PROC_DECLARE(0x6c2ed50, internal_6c2ed50, public_6c2ed50);
extern "C" NAKED register_t __cdecl internal_6c2ed50()
{
    __asm
    {
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp eax, 0x14
        jne public_6c2ee13
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        nop 
        public_6c2ed70 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6c2ed98
        test cl, cl
        je public_6c2ed94
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6c2ed98
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6c2ed70
        public_6c2ed94 : nop
        xor eax, eax
        jmp public_6c2ed9d
        public_6c2ed98 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6c2ed9d : nop
        test eax, eax
        pop esi
        pop ebx
        jne public_6c2ee13
        push 0x18
        call public_6c34eac
        add esp, 4
        test eax, eax
        je public_6c2ee01
        lea ecx, ds:[eax+0xC]
        mov dword ptr ds : [ecx], offset public_6c364f8
        mov dword ptr ds : [ecx+4], 1
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax], offset public_6c364e8
        mov dword ptr ds : [eax+4], offset public_6c364d4
        mov edx, dword ptr ds : [edi+8]
        test edx, edx
        mov dword ptr ds : [eax+8], edx
        jne public_6c2eded
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        xor ecx, ecx
        pop edi
        mov dword ptr ds : [edx], eax
        mov eax, ecx
        pop ebp
        ret 0xC
        public_6c2eded : nop
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [esp+0x14]
        xor ecx, ecx
        pop edi
        mov dword ptr ds : [edx], eax
        mov eax, ecx
        pop ebp
        ret 0xC
        public_6c2ee01 : nop
        mov edx, dword ptr ss : [esp+0x14]
        xor ecx, ecx
        pop edi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], ecx
        pop ebp
        ret 0xC
        public_6c2ee13 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [ecx], ebp
        mov eax, 0xFFFFFFFD
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6c2ed50)
    }
}

#undef public_6c2ed70
#undef public_6c2ed94
#undef public_6c2ed98
#undef public_6c2ed9d
#undef public_6c2eded
#undef public_6c2ee01
#undef public_6c2ee13
