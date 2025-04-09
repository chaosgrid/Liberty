#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43e210);
CLANG_FORWARD_PROC_SYMBOL(public_43e570);
CLANG_FORWARD_PROC_SYMBOL(public_4b4510);

#define public_43e585 _public_43e585
#define public_43e591 _public_43e591
#define public_43e59c _public_43e59c
#define public_43e5b4 _public_43e5b4
#define public_43e5b9 _public_43e5b9
#define public_43e5dd _public_43e5dd
#define public_43e5e2 _public_43e5e2
#define public_43e5f2 _public_43e5f2

PROC_DECLARE(0x43e570, internal_43e570, public_43e570);
extern "C" NAKED register_t __cdecl internal_43e570()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x380]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_43e5f2
        mov ecx, 0xC
        public_43e585 : nop
        mov dl, byte ptr ds : [esi+9]
        test dl, dl
        jne public_43e591
        cmp dword ptr ds : [esi+0x38], ecx
        je public_43e59c
        public_43e591 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_43e585
        pop edi
        pop esi
        ret 4
        public_43e59c : nop
        push ebx
        call public_4b4510
        mov bl, al
        test bl, bl
        je public_43e5b4
        mov al, byte ptr ss : [esp+0x10]
        test al, al
        jne public_43e5b4
        xor eax, eax
        jmp public_43e5b9
        public_43e5b4 : nop
        mov eax, 1
        public_43e5b9 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 2
        call dword ptr ds : [edx+0xA8]
        mov cl, byte ptr ds : [esi+8]
        test bl, bl
        pop ebx
        je public_43e5dd
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        jne public_43e5dd
        xor eax, eax
        jmp public_43e5e2
        public_43e5dd : nop
        mov eax, 1
        public_43e5e2 : nop
        cmp cl, al
        mov byte ptr ds : [esi+8], al
        je public_43e5f2
        push 0
        mov ecx, edi
        call public_43e210
        public_43e5f2 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x43e570)
    }
}

#undef public_43e585
#undef public_43e591
#undef public_43e59c
#undef public_43e5b4
#undef public_43e5b9
#undef public_43e5dd
#undef public_43e5e2
#undef public_43e5f2
