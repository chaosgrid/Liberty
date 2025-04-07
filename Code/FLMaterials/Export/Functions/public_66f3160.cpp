#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3160);

#define public_66f31f9 _public_66f31f9
#define public_66f31fb _public_66f31fb
#define public_66f3202 _public_66f3202

PROC_DECLARE(0x66f3160, internal_66f3160, public_66f3160);
extern "C" NAKED register_t __cdecl internal_66f3160()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x40]
        push edi
        xor eax, eax
        lea edx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x10], offset public_67013dc
        mov ecx, 0xB
        lea edi, ss:[esp+0x14]
        rep stosd
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [esi]
        push edx
        push esi
        mov dword ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x34], 0x8000080
        mov dword ptr ss : [esp+0x14], 0x34
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        xor ebx, ebx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x1C], offset public_67013e8
        mov dword ptr ss : [esp+0x24], 0xC0000000
        mov dword ptr ss : [esp+0x30], 2
        call dword ptr ds : [ecx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_66f3202
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [esi]
        push ebx
        lea ecx, ss:[esp+0x4C]
        push ecx
        push 4
        push edx
        push edi
        push esi
        call dword ptr ds : [eax+0x18]
        test eax, eax
        je public_66f31f9
        cmp dword ptr ss : [esp+0x48], 4
        jne public_66f31f9
        mov ebx, 1
        jmp public_66f31fb
        public_66f31f9 : nop
        xor ebx, ebx
        public_66f31fb : nop
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x10]
        public_66f3202 : nop
        xor eax, eax
        test ebx, ebx
        setne al
        pop edi
        pop esi
        pop ebx
        dec eax
        and eax, 0x80004005
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x66f3160)
    }
}

#undef public_66f31f9
#undef public_66f31fb
#undef public_66f3202
