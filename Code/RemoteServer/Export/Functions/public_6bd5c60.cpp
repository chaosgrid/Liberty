#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd5c60);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bd5c70 _public_6bd5c70
#define public_6bd5c83 _public_6bd5c83
#define public_6bd5c8c _public_6bd5c8c
#define public_6bd5c90 _public_6bd5c90

PROC_DECLARE(0x6bd5c60, internal_6bd5c60, public_6bd5c60);
extern "C" NAKED register_t __cdecl internal_6bd5c60()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+4]
        xor ebx, ebx
        cmp esi, ebx
        je public_6bd5c90
        mov edi, edi
        public_6bd5c70 : nop
        cmp byte ptr ds : [edi+0xC], bl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_6bd5c83
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [edi+0x10], eax
        jmp public_6bd5c8c
        public_6bd5c83 : nop
        push eax
        call public_6c09aaa
        add esp, 4
        public_6bd5c8c : nop
        cmp esi, ebx
        jne public_6bd5c70
        public_6bd5c90 : nop
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6bd5c60)
    }
}

#undef public_6bd5c70
#undef public_6bd5c83
#undef public_6bd5c8c
#undef public_6bd5c90
