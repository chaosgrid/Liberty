#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5af30);

#define public_6d5af48 _public_6d5af48
#define public_6d5af53 _public_6d5af53
#define public_6d5af73 _public_6d5af73
#define public_6d5af7a _public_6d5af7a

PROC_DECLARE(0x6d5af30, internal_6d5af30, public_6d5af30);
extern "C" NAKED register_t __cdecl internal_6d5af30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        push edi
        mov ebx, offset public_6d64efc
        je public_6d5af48
        mov ebx, eax
        public_6d5af48 : nop
        mov edi, dword ptr ds : [ecx+8]
        cmp edi, esi
        mov edx, edi
        jb public_6d5af53
        mov edx, esi
        public_6d5af53 : nop
        mov eax, dword ptr ds : [ecx+4]
        push edx
        push ebx
        push eax
        call dword ptr ds : [public_6d64cb0]
        add esp, 0xC
        test eax, eax
        jne public_6d5af7a
        cmp edi, esi
        jae public_6d5af73
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 4
        public_6d5af73 : nop
        xor eax, eax
        cmp edi, esi
        setne al
        public_6d5af7a : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d5af30)
    }
}

#undef public_6d5af48
#undef public_6d5af53
#undef public_6d5af73
#undef public_6d5af7a
