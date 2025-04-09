#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555860);

#define public_409fd0 _public_409fd0
#define public_409fe2 _public_409fe2
#define public_409ff0 _public_409ff0
#define public_40a002 _public_40a002

PROC_DECLARE(0x409fb0, internal_409fb0, public_409fb0);
extern "C" NAKED register_t __cdecl internal_409fb0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [esi+0x50]
        mov eax, dword ptr ds : [esi+0x48]
        push edi
        mov edi, dword ptr ds : [esi+0x44]
        or cl, 8
        cmp edi, eax
        mov byte ptr ds : [esi+0x50], cl
        je public_409fe2
        lea esp, ss:[esp]
        public_409fd0 : nop
        push ebx
        mov ecx, edi
        call public_555860
        mov eax, dword ptr ds : [esi+0x48]
        add edi, 0x24
        cmp edi, eax
        jne public_409fd0
        public_409fe2 : nop
        mov edi, dword ptr ds : [esi+0x64]
        cmp edi, dword ptr ds : [esi+0x68]
        je public_40a002
        lea ebx, ds:[ebx]
        public_409ff0 : nop
        push ebx
        mov ecx, edi
        call public_555860
        mov eax, dword ptr ds : [esi+0x68]
        add edi, 0x24
        cmp edi, eax
        jne public_409ff0
        public_40a002 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x409fb0)
    }
}

#undef public_409fd0
#undef public_409fe2
#undef public_409ff0
#undef public_40a002
