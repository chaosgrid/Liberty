#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f32950);
CLANG_FORWARD_PROC_SYMBOL(public_6f32b70);

#define public_6f32b90 _public_6f32b90
#define public_6f32ba5 _public_6f32ba5
#define public_6f32bd1 _public_6f32bd1

PROC_DECLARE(0x6f32b70, internal_6f32b70, public_6f32b70);
extern "C" NAKED register_t __cdecl internal_6f32b70()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fb3018]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov ecx, esi
        call ebx
        test al, al
        mov edi, dword ptr ss : [esp+0x14]
        je public_6f32ba5
        lea esp, ss:[esp]
        public_6f32b90 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push esi
        mov ecx, edi
        call public_6f32950
        mov ecx, esi
        call ebx
        test al, al
        jne public_6f32b90
        public_6f32ba5 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        call dword ptr ds : [public_6fb3050]
        test al, al
        jne public_6f32bd1
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6f32bd1
        mov eax, dword ptr ds : [edi+0x34]
        test eax, eax
        je public_6f32bd1
        mov eax, dword ptr ds : [edi+0x38]
        test eax, eax
        je public_6f32bd1
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret 
        public_6f32bd1 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f32b70)
    }
}

#undef public_6f32b90
#undef public_6f32ba5
#undef public_6f32bd1
