#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4155c0);

#define public_4155d8 _public_4155d8
#define public_4155e3 _public_4155e3
#define public_415603 _public_415603
#define public_41560a _public_41560a

PROC_DECLARE(0x4155c0, internal_4155c0, public_4155c0);
extern "C" NAKED register_t __cdecl internal_4155c0()
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
        mov ebx, offset public_41c3f4
        je public_4155d8
        mov ebx, eax
        public_4155d8 : nop
        mov edi, dword ptr ds : [ecx+8]
        cmp edi, esi
        mov edx, edi
        jb public_4155e3
        mov edx, esi
        public_4155e3 : nop
        mov eax, dword ptr ds : [ecx+4]
        push edx
        push ebx
        push eax
        call dword ptr ds : [public_41b8fc]
        add esp, 0xC
        test eax, eax
        jne public_41560a
        cmp edi, esi
        jae public_415603
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 4
        public_415603 : nop
        xor eax, eax
        cmp edi, esi
        setne al
        public_41560a : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4155c0)
    }
}

#undef public_4155d8
#undef public_4155e3
#undef public_415603
#undef public_41560a
