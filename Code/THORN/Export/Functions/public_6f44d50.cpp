#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af00);

#define public_6f44d7d _public_6f44d7d
#define public_6f44d85 _public_6f44d85
#define public_6f44dac _public_6f44dac
#define public_6f44db5 _public_6f44db5

PROC_DECLARE(0x6f44d50, internal_6f44d50, public_6f44d50);
extern "C" NAKED register_t __cdecl internal_6f44d50()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea esi, ds:[ebx+0x14]
        push esi
        mov ecx, edi
        call public_6f4af00
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6f44d7d
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6f44d7d
        lea eax, ss:[esp+0x14]
        jmp public_6f44d85
        public_6f44d7d : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6f44d85 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_6f44db5
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0x14]
        test eax, eax
        je public_6f44db5
        test ebx, ebx
        je public_6f44dac
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x28]
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        pop edi
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret 4
        public_6f44dac : nop
        mov edx, dword ptr ds : [eax]
        xor ecx, ecx
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        public_6f44db5 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f44d50)
    }
}

#undef public_6f44d7d
#undef public_6f44d85
#undef public_6f44dac
#undef public_6f44db5
