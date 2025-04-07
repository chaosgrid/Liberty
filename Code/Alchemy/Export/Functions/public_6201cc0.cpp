#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6201cc0);

#define public_6201cd0 _public_6201cd0
#define public_6201ce0 _public_6201ce0
#define public_6201ce2 _public_6201ce2
#define public_6201d27 _public_6201d27
#define public_6201d45 _public_6201d45

PROC_DECLARE(0x6201cc0, internal_6201cc0, public_6201cc0);
extern "C" NAKED register_t __cdecl internal_6201cc0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ecx, offset public_62578b4
        push esi
        push edi
        mov dword ptr ss : [esp+0x18], ecx
        public_6201cd0 : nop
        mov ebp, dword ptr ds : [ecx]
        xor eax, eax
        cmp ebp, eax
        mov esi, ebp
        je public_6201d45
        xor edi, edi
        xor ebx, ebx
        jmp public_6201ce2
        public_6201ce0 : nop
        xor eax, eax
        public_6201ce2 : nop
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi]
        push ecx
        push esi
        call dword ptr ds : [eax+0xD0]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x14]
        push eax
        push esi
        call dword ptr ds : [edx+0xD4]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [esi+8]
        add edi, edx
        add ebx, ecx
        test esi, esi
        jne public_6201ce0
        mov ecx, dword ptr ss : [ebp]
        push ebx
        push edi
        push ebp
        mov esi, ebp
        call dword ptr ds : [ecx+0x9C]
        public_6201d27 : nop
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0xA4]
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_6201d27
        mov eax, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [eax+0xA0]
        mov ecx, dword ptr ss : [esp+0x18]
        public_6201d45 : nop
        add ecx, 0xC
        cmp ecx, offset public_62578e4
        mov dword ptr ss : [esp+0x18], ecx
        jl public_6201cd0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6201cc0)
    }
}

#undef public_6201cd0
#undef public_6201ce0
#undef public_6201ce2
#undef public_6201d27
#undef public_6201d45
