#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5a440);

#define public_6d5a462 _public_6d5a462
#define public_6d5a477 _public_6d5a477
#define public_6d5a482 _public_6d5a482
#define public_6d5a49c _public_6d5a49c
#define public_6d5a49e _public_6d5a49e
#define public_6d5a4a3 _public_6d5a4a3
#define public_6d5a4a9 _public_6d5a4a9
#define public_6d5a4b9 _public_6d5a4b9

PROC_DECLARE(0x6d5a440, internal_6d5a440, public_6d5a440);
extern "C" NAKED register_t __cdecl internal_6d5a440()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx+8]
        push edi
        mov edi, dword ptr ds : [eax+4]
        cmp edi, edx
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], eax
        je public_6d5a4b9
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6d64ca4]
        push esi
        public_6d5a462 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov edx, offset public_6d64f30
        je public_6d5a477
        mov edx, eax
        public_6d5a477 : nop
        mov esi, dword ptr ds : [edi+0x14]
        cmp esi, ebx
        mov ecx, esi
        jb public_6d5a482
        mov ecx, ebx
        public_6d5a482 : nop
        mov eax, dword ptr ds : [edi+0x10]
        push ecx
        push edx
        push eax
        call ebp
        add esp, 0xC
        test eax, eax
        jne public_6d5a49c
        cmp esi, ebx
        jb public_6d5a49e
        cmp esi, ebx
        setne al
        test eax, eax
        public_6d5a49c : nop
        jge public_6d5a4a3
        public_6d5a49e : nop
        mov edi, dword ptr ds : [edi+8]
        jmp public_6d5a4a9
        public_6d5a4a3 : nop
        mov dword ptr ss : [esp+0x10], edi
        mov edi, dword ptr ds : [edi]
        public_6d5a4a9 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6d5a462
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        pop ebx
        public_6d5a4b9 : nop
        pop edi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d5a440)
    }
}

#undef public_6d5a462
#undef public_6d5a477
#undef public_6d5a482
#undef public_6d5a49c
#undef public_6d5a49e
#undef public_6d5a4a3
#undef public_6d5a4a9
#undef public_6d5a4b9
