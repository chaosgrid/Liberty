#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af00);

#define public_6f483ed _public_6f483ed
#define public_6f483f5 _public_6f483f5
#define public_6f4841f _public_6f4841f
#define public_6f48428 _public_6f48428

PROC_DECLARE(0x6f483c0, internal_6f483c0, public_6f483c0);
extern "C" NAKED register_t __cdecl internal_6f483c0()
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
        je public_6f483ed
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6f483ed
        lea eax, ss:[esp+0x14]
        jmp public_6f483f5
        public_6f483ed : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6f483f5 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_6f48428
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xCC]
        test eax, eax
        je public_6f48428
        test ebx, ebx
        je public_6f4841f
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x28]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        pop edi
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret 4
        public_6f4841f : nop
        mov edx, dword ptr ds : [eax]
        xor ecx, ecx
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        public_6f48428 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f483c0)
    }
}

#undef public_6f483ed
#undef public_6f483f5
#undef public_6f4841f
#undef public_6f48428
