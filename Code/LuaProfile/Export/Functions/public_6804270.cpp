#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6803c40);
CLANG_FORWARD_PROC_SYMBOL(public_6804270);
CLANG_FORWARD_PROC_SYMBOL(public_6805300);
CLANG_FORWARD_PROC_SYMBOL(public_6805590);

#define public_680428f _public_680428f
#define public_68042b1 _public_68042b1
#define public_68042c9 _public_68042c9

PROC_DECLARE(0x6804270, internal_6804270, public_6804270);
extern "C" NAKED register_t __cdecl internal_6804270()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_680e604]
        push ebx
        mov ebx, dword ptr ds : [ecx+4]
        push ebp
        shl eax, 4
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        add ebx, eax
        test edi, edi
        jge public_680428f
        xor edi, edi
        public_680428f : nop
        lea edx, ds:[edi+1]
        push edx
        call public_6805300
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+8], ebp
        mov dword ptr ds : [eax], 0xFFFFFFFD
        add esp, 4
        xor eax, eax
        test edi, edi
        jle public_68042c9
        push esi
        public_68042b1 : nop
        lea esi, ds:[eax+1]
        push ebx
        push esi
        push ebp
        call public_6805590
        mov eax, esi
        add esp, 0xC
        add ebx, 0x10
        cmp eax, edi
        jl public_68042b1
        pop esi
        public_68042c9 : nop
        push edi
        push ebp
        call public_6803c40
        add esp, 8
        pop edi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6804270)
    }
}

#undef public_680428f
#undef public_68042b1
#undef public_68042c9
