#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bd5a11 _public_6bd5a11
#define public_6bd5a26 _public_6bd5a26
#define public_6bd5a2f _public_6bd5a2f
#define public_6bd5a33 _public_6bd5a33
#define public_6bd5a48 _public_6bd5a48
#define public_6bd5a59 _public_6bd5a59
#define public_6bd5a70 _public_6bd5a70

PROC_DECLARE(0x6bd5a00, internal_6bd5a00, public_6bd5a00);
extern "C" NAKED register_t __cdecl internal_6bd5a00()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_6c0b7a8
        je public_6bd5a33
        public_6bd5a11 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6bd5a26
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6bd5a2f
        public_6bd5a26 : nop
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bd5a2f : nop
        test edi, edi
        jne public_6bd5a11
        public_6bd5a33 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_6bd5a59
        public_6bd5a48 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6c09aaa
        add esp, 4
        test edi, edi
        jne public_6bd5a48
        public_6bd5a59 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_6bd5a70
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bd5a70 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bd5a00)
    }
}

#undef public_6bd5a11
#undef public_6bd5a26
#undef public_6bd5a2f
#undef public_6bd5a33
#undef public_6bd5a48
#undef public_6bd5a59
#undef public_6bd5a70
