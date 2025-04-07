#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_445710);

#define public_452a46 _public_452a46
#define public_452a54 _public_452a54
#define public_452a5f _public_452a5f
#define public_452a61 _public_452a61
#define public_452aa5 _public_452aa5
#define public_452aa9 _public_452aa9

PROC_DECLARE(0x452a30, internal_452a30, public_452a30);
extern "C" NAKED register_t __cdecl internal_452a30()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push ebx
        or ecx, 0xFFFFFFFF
        xor edx, edx
        lea eax, ds:[edi+0x274]
        public_452a46 : nop
        mov bl, byte ptr ds : [eax+0x34]
        test bl, bl
        je public_452a54
        mov ebx, dword ptr ds : [eax]
        cmp ebx, dword ptr ds : [esi+0x2C]
        je public_452a5f
        public_452a54 : nop
        inc edx
        add eax, 0x3C
        cmp edx, 0x20
        jl public_452a46
        jmp public_452a61
        public_452a5f : nop
        mov ecx, edx
        public_452a61 : nop
        imul ecx, 0x3C
        mov eax, dword ptr ds : [ecx+edi+0x270]
        lea esi, ds:[ecx+edi+0x270]
        mov ecx, dword ptr ds : [edi+0x64]
        push eax
        call public_445710
        mov dl, byte ptr ds : [esi+0x38]
        mov ecx, dword ptr ds : [edi+0x64]
        mov ecx, dword ptr ds : [ecx+0x30]
        or eax, 0xFFFFFFFF
        test dl, dl
        pop ebx
        je public_452aa9
        mov dl, byte ptr ds : [esi+0x39]
        test dl, dl
        je public_452aa5
        mov edi, dword ptr ds : [esi]
        mov edx, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x30]
        public_452aa5 : nop
        mov byte ptr ds : [esi+0x38], 0
        public_452aa9 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x452a30)
    }
}

#undef public_452a46
#undef public_452a54
#undef public_452a5f
#undef public_452a61
#undef public_452aa5
#undef public_452aa9
