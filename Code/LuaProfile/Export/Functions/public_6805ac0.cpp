#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805ac0);
CLANG_FORWARD_PROC_SYMBOL(public_68065d0);

#define public_6805aca _public_6805aca
#define public_6805ad9 _public_6805ad9
#define public_6805ae6 _public_6805ae6
#define public_6805b07 _public_6805b07

PROC_DECLARE(0x6805ac0, internal_6805ac0, public_6805ac0);
extern "C" NAKED register_t __cdecl internal_6805ac0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        je public_6805b07
        push ebx
        push esi
        public_6805aca : nop
        cmp dword ptr ds : [ecx+0xC], 0xFFFFFFFF
        mov esi, dword ptr ds : [ecx]
        jne public_6805ad9
        mov eax, 1
        jmp public_6805ae6
        public_6805ad9 : nop
        mov eax, dword ptr ds : [ecx+0x20]
        cdq 
        and edx, 0x3F
        add eax, edx
        sar eax, 6
        inc eax
        public_6805ae6 : nop
        mov edx, dword ptr ds : [public_680e604]
        mov ebx, dword ptr ds : [edx+0x78]
        sub ebx, eax
        push 0
        push ecx
        mov dword ptr ds : [edx+0x78], ebx
        call public_68065d0
        add esp, 8
        test esi, esi
        mov ecx, esi
        jne public_6805aca
        pop esi
        pop ebx
        public_6805b07 : nop
        ret 
        UNREACHABLE_TRAP(0x6805ac0)
    }
}

#undef public_6805aca
#undef public_6805ad9
#undef public_6805ae6
#undef public_6805b07
