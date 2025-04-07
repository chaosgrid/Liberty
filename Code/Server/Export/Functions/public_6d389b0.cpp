#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d389b0);

#define public_6d389cd _public_6d389cd
#define public_6d389d7 _public_6d389d7
#define public_6d389f0 _public_6d389f0
#define public_6d38a27 _public_6d38a27

PROC_DECLARE(0x6d389b0, internal_6d389b0, public_6d389b0);
extern "C" NAKED register_t __cdecl internal_6d389b0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edx+4]
        push ebx
        shl eax, 5
        add eax, ecx
        mov cl, byte ptr ds : [eax+8]
        test cl, cl
        push ebp
        push esi
        push edi
        jne public_6d389d7
        public_6d389cd : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 8
        public_6d389d7 : nop
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp esi, eax
        mov edx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], eax
        je public_6d38a27
        lea ebx, ds:[ebx]
        public_6d389f0 : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp dword ptr ds : [eax+0xC], edi
        je public_6d389cd
        mov bx, word ptr ds : [edi]
        xor eax, eax
        mov ax, word ptr ds : [esi]
        push eax
        call dword ptr ds : [public_6d64ba0]
        push ebx
        mov ebp, eax
        call dword ptr ds : [public_6d64ba0]
        add esp, 8
        cmp ax, bp
        jne public_6d389cd
        mov eax, dword ptr ss : [esp+0x10]
        add esi, 2
        add edi, 2
        cmp esi, eax
        jne public_6d389f0
        public_6d38a27 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], edi
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d389b0)
    }
}

#undef public_6d389cd
#undef public_6d389d7
#undef public_6d389f0
#undef public_6d38a27
