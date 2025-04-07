#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00380);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d00391 _public_6d00391
#define public_6d0039c _public_6d0039c
#define public_6d003a0 _public_6d003a0
#define public_6d003e6 _public_6d003e6
#define public_6d003e8 _public_6d003e8
#define public_6d003fd _public_6d003fd

PROC_DECLARE(0x6d00380, internal_6d00380, public_6d00380);
extern "C" NAKED register_t __cdecl internal_6d00380()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6d8d8d8]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        push ebx
        je public_6d0039c
        mov ebx, dword ptr ss : [esp+8]
        public_6d00391 : nop
        cmp ebx, dword ptr ds : [eax+0x3C]
        je public_6d003a0
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6d00391
        public_6d0039c : nop
        xor al, al
        pop ebx
        ret 
        public_6d003a0 : nop
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea esi, ds:[eax+8]
        mov ecx, 0xD
        rep movsd
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ds : [public_6d8d8dc]
        add esp, 4
        dec ecx
        mov dword ptr ds : [public_6d8d8dc], ecx
        mov ecx, dword ptr ds : [public_6d8d8ec]
        test ecx, ecx
        pop edi
        pop esi
        je public_6d003e6
        lea eax, ds:[ecx-8]
        jmp public_6d003e8
        public_6d003e6 : nop
        xor eax, eax
        public_6d003e8 : nop
        cmp eax, ebx
        jne public_6d003fd
        test ecx, ecx
        je public_6d003fd
        push 0
        mov ecx, offset public_6d8d8ec
        call dword ptr ds : [public_6d6447c]
        public_6d003fd : nop
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d00380)
    }
}

#undef public_6d00391
#undef public_6d0039c
#undef public_6d003a0
#undef public_6d003e6
#undef public_6d003e8
#undef public_6d003fd
