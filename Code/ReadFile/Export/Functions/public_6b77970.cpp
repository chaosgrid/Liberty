#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b77250);
CLANG_FORWARD_PROC_SYMBOL(public_6b777f0);

#define public_6b7798d _public_6b7798d
#define public_6b779b1 _public_6b779b1
#define public_6b779b5 _public_6b779b5
#define public_6b779ba _public_6b779ba
#define public_6b77a1b _public_6b77a1b
#define public_6b77a2e _public_6b77a2e
#define public_6b77a3f _public_6b77a3f

PROC_DECLARE(0x6b77970, internal_6b77970, public_6b77970);
extern "C" NAKED register_t __cdecl internal_6b77970()
{
    __asm
    {
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        xor ebp, ebp
        cmp dword ptr ds : [edi], 0x40
        jne public_6b77a2e
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        public_6b7798d : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6b779b5
        test cl, cl
        je public_6b779b1
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6b779b5
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6b7798d
        public_6b779b1 : nop
        xor eax, eax
        jmp public_6b779ba
        public_6b779b5 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6b779ba : nop
        test eax, eax
        pop ebx
        jne public_6b77a2e
        push 1
        push 0x12C
        call dword ptr ds : [public_6b7906c]
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_6b77a1b
        push edi
        mov ecx, esi
        mov dword ptr ds : [esi], offset public_6b792f0
        mov dword ptr ds : [esi+4], offset public_6b792e0
        mov dword ptr ds : [esi+0x128], 1
        call public_6b777f0
        mov edi, eax
        test edi, edi
        je public_6b77a3f
        mov ecx, esi
        call public_6b77250
        push esi
        call dword ptr ds : [public_6b79070]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        public_6b77a1b : nop
        mov edx, dword ptr ss : [esp+0x18]
        xor ecx, ecx
        pop edi
        pop esi
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [edx], ecx
        pop ebp
        ret 0xC
        public_6b77a2e : nop
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ebp
        pop ebp
        ret 0xC
        public_6b77a3f : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6b77970)
    }
}

#undef public_6b7798d
#undef public_6b779b1
#undef public_6b779b5
#undef public_6b779ba
#undef public_6b77a1b
#undef public_6b77a2e
#undef public_6b77a3f
