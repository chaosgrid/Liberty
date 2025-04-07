#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21000);
CLANG_FORWARD_PROC_SYMBOL(public_6c21080);
CLANG_FORWARD_PROC_SYMBOL(public_6c211a0);

#define public_6c22230 _public_6c22230
#define public_6c22254 _public_6c22254
#define public_6c22258 _public_6c22258
#define public_6c2225d _public_6c2225d
#define public_6c222b8 _public_6c222b8
#define public_6c222cb _public_6c222cb
#define public_6c222dc _public_6c222dc

PROC_DECLARE(0x6c22210, internal_6c22210, public_6c22210);
extern "C" NAKED register_t __cdecl internal_6c22210()
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
        jne public_6c222cb
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        push ebx
        nop 
        public_6c22230 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6c22258
        test cl, cl
        je public_6c22254
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6c22258
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6c22230
        public_6c22254 : nop
        xor eax, eax
        jmp public_6c2225d
        public_6c22258 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6c2225d : nop
        test eax, eax
        pop ebx
        jne public_6c222cb
        push 1
        push 0x38
        call dword ptr ds : [public_6c36044]
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_6c222b8
        mov ecx, esi
        call public_6c21000
        push edi
        mov ecx, esi
        mov dword ptr ds : [esi], offset public_6c360d0
        mov dword ptr ds : [esi+0x34], 1
        call public_6c211a0
        mov edi, eax
        test edi, edi
        je public_6c222dc
        mov ecx, esi
        call public_6c21080
        push esi
        call dword ptr ds : [public_6c3603c]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        public_6c222b8 : nop
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        xor ecx, ecx
        pop esi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], ecx
        pop ebp
        ret 0xC
        public_6c222cb : nop
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr ds : [edx], ebp
        mov eax, 0xFFFFFFFD
        pop ebp
        ret 0xC
        public_6c222dc : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6c22210)
    }
}

#undef public_6c22230
#undef public_6c22254
#undef public_6c22258
#undef public_6c2225d
#undef public_6c222b8
#undef public_6c222cb
#undef public_6c222dc
