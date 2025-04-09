#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43ce50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43ce60 _public_43ce60
#define public_43ce73 _public_43ce73
#define public_43ce7c _public_43ce7c
#define public_43ce80 _public_43ce80

PROC_DECLARE(0x43ce50, internal_43ce50, public_43ce50);
extern "C" NAKED register_t __cdecl internal_43ce50()
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
        je public_43ce80
        mov edi, edi
        public_43ce60 : nop
        cmp byte ptr ds : [edi+0xC], bl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_43ce73
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [edi+0x10], eax
        jmp public_43ce7c
        public_43ce73 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_43ce7c : nop
        cmp esi, ebx
        jne public_43ce60
        public_43ce80 : nop
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x43ce50)
    }
}

#undef public_43ce60
#undef public_43ce73
#undef public_43ce7c
#undef public_43ce80
