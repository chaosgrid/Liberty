#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802ec0);
CLANG_FORWARD_PROC_SYMBOL(public_68030f0);
CLANG_FORWARD_PROC_SYMBOL(public_68031a0);
CLANG_FORWARD_PROC_SYMBOL(public_6803ab0);

#define public_6803121 _public_6803121
#define public_680317a _public_680317a
#define public_6803184 _public_6803184
#define public_680318b _public_680318b

PROC_DECLARE(0x68030f0, internal_68030f0, public_68030f0);
extern "C" NAKED register_t __cdecl internal_68030f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [eax+0x34]
        push esi
        push edi
        call public_6803ab0
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [public_680e604]
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ecx+0x78]
        push edi
        push ebx
        call public_68031a0
        add esp, 8
        cmp eax, 1
        je public_680317a
        public_6803121 : nop
        cmp eax, 2
        je public_6803184
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0x74]
        mov edx, esi
        neg edx
        shl edx, 0x1F
        sub edx, esi
        mov esi, dword ptr ds : [eax+0x78]
        add esi, edx
        shl esi, 1
        add ecx, esi
        mov dword ptr ds : [eax+0x74], ecx
        call public_6802ec0
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx+0x74]
        sub edx, esi
        test edi, edi
        mov dword ptr ds : [ecx+0x74], edx
        je public_680318b
        test eax, eax
        jne public_680318b
        call public_6803ab0
        mov eax, dword ptr ds : [public_680e604]
        mov esi, dword ptr ds : [eax+0x78]
        push edi
        push ebx
        call public_68031a0
        add esp, 8
        cmp eax, 1
        jne public_6803121
        public_680317a : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 
        public_6803184 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_680318b : nop
        mov ecx, dword ptr ds : [public_680e604]
        pop edi
        pop esi
        mov dword ptr ds : [ecx+0x34], ebp
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x68030f0)
    }
}

#undef public_6803121
#undef public_680317a
#undef public_6803184
#undef public_680318b
