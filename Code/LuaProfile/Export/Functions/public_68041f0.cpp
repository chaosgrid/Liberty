#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68041f0);

#define public_680420f _public_680420f
#define public_680424a _public_680424a
#define public_680425b _public_680425b
#define public_6804260 _public_6804260

PROC_DECLARE(0x68041f0, internal_68041f0, public_68041f0);
extern "C" NAKED register_t __cdecl internal_68041f0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        push ebx
        push esi
        call dword ptr ds : [public_680c064]
        add esp, 8
        test eax, eax
        jne public_6804260
        mov ebp, dword ptr ss : [esp+0x18]
        public_680420f : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        cmp ecx, ebp
        je public_680424a
        mov eax, dword ptr ss : [esp+0x20]
        cmp ecx, eax
        je public_680425b
        inc ecx
        add ebx, ecx
        mov edx, eax
        add esi, ecx
        sub edx, ecx
        push ebx
        push esi
        sub ebp, ecx
        mov dword ptr ss : [esp+0x28], edx
        call dword ptr ds : [public_680c064]
        add esp, 8
        test eax, eax
        je public_680420f
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_680424a : nop
        mov edx, dword ptr ss : [esp+0x20]
        xor eax, eax
        cmp ecx, edx
        sete al
        pop edi
        pop esi
        pop ebp
        pop ebx
        dec eax
        ret 
        public_680425b : nop
        mov eax, 1
        public_6804260 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x68041f0)
    }
}

#undef public_680420f
#undef public_680424a
#undef public_680425b
#undef public_6804260
