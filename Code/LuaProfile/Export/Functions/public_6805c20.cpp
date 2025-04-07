#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805c20);
CLANG_FORWARD_PROC_SYMBOL(public_68065d0);

#define public_6805c25 _public_6805c25
#define public_6805c38 _public_6805c38
#define public_6805c50 _public_6805c50
#define public_6805c57 _public_6805c57

PROC_DECLARE(0x6805c20, internal_6805c20, public_6805c20);
extern "C" NAKED register_t __cdecl internal_6805c20()
{
    __asm
    {
        push ebx
        push esi
        push edi
        xor ebx, ebx
        public_6805c25 : nop
        mov eax, dword ptr ds : [public_680e604]
        mov esi, dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [esi+ebx]
        add esi, ebx
        xor edi, edi
        test eax, eax
        jle public_6805c57
        public_6805c38 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx+edi*4]
        cmp eax, offset public_680d810
        je public_6805c50
        push 0
        push eax
        call public_68065d0
        add esp, 8
        public_6805c50 : nop
        mov eax, dword ptr ds : [esi]
        inc edi
        cmp edi, eax
        jl public_6805c38
        public_6805c57 : nop
        mov edx, dword ptr ds : [esi+8]
        push 0
        push edx
        call public_68065d0
        add ebx, 0xC
        add esp, 8
        cmp ebx, 0x2E8
        jl public_6805c25
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0x60]
        push 0
        push ecx
        call public_68065d0
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6805c20)
    }
}

#undef public_6805c25
#undef public_6805c38
#undef public_6805c50
#undef public_6805c57
