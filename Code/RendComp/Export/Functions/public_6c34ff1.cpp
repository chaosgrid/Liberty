#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34080);
CLANG_FORWARD_PROC_SYMBOL(public_6c34f46);

#define public_6c3500d _public_6c3500d
#define public_6c35017 _public_6c35017
#define public_6c35029 _public_6c35029
#define public_6c35033 _public_6c35033
#define public_6c35035 _public_6c35035
#define public_6c35039 _public_6c35039
#define public_6c35055 _public_6c35055
#define public_6c3505e _public_6c3505e
#define public_6c3506d _public_6c3506d
#define public_6c35084 _public_6c35084
#define public_6c35087 _public_6c35087

PROC_DECLARE(0x6c34ff1, internal_6c34ff1, public_6c34ff1);
extern "C" NAKED register_t __cdecl internal_6c34ff1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        test esi, esi
        jne public_6c3500d
        cmp dword ptr ds : [public_6c37d6c], 0
        jmp public_6c35033
        public_6c3500d : nop
        cmp esi, 1
        je public_6c35017
        cmp esi, 2
        jne public_6c35039
        public_6c35017 : nop
        mov eax, dword ptr ds : [public_6c38188]
        test eax, eax
        je public_6c35029
        push edi
        push esi
        push ebx
        call eax
        test eax, eax
        je public_6c35035
        public_6c35029 : nop
        push edi
        push esi
        push ebx
        call public_6c34f46
        test eax, eax
        public_6c35033 : nop
        jne public_6c35039
        public_6c35035 : nop
        xor eax, eax
        jmp public_6c35087
        public_6c35039 : nop
        push edi
        push esi
        push ebx
        call public_6c34080
        cmp esi, 1
        mov dword ptr ss : [ebp+0xC], eax
        jne public_6c35055
        test eax, eax
        jne public_6c35084
        push edi
        push eax
        push ebx
        call public_6c34f46
        public_6c35055 : nop
        test esi, esi
        je public_6c3505e
        cmp esi, 3
        jne public_6c35084
        public_6c3505e : nop
        push edi
        push esi
        push ebx
        call public_6c34f46
        test eax, eax
        jne public_6c3506d
        and dword ptr ss : [ebp+0xC], eax
        public_6c3506d : nop
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6c35084
        mov eax, dword ptr ds : [public_6c38188]
        test eax, eax
        je public_6c35084
        push edi
        push esi
        push ebx
        call eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6c35084 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_6c35087 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6c34ff1)
    }
}

#undef public_6c3500d
#undef public_6c35017
#undef public_6c35029
#undef public_6c35033
#undef public_6c35035
#undef public_6c35039
#undef public_6c35055
#undef public_6c3505e
#undef public_6c3506d
#undef public_6c35084
#undef public_6c35087
