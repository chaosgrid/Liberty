#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6807020);
CLANG_FORWARD_PROC_SYMBOL(public_6807060);

#define public_6807084 _public_6807084
#define public_680709c _public_680709c

PROC_DECLARE(0x6807060, internal_6807060, public_6807060);
extern "C" NAKED register_t __cdecl internal_6807060()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        sub esi, edx
        test eax, eax
        jne public_6807084
        mov eax, dword ptr ss : [esp+8]
        push esi
        push eax
        call public_6806fe0
        add esp, 8
        pop esi
        ret 
        public_6807084 : nop
        dec esi
        test esi, esi
        jg public_680709c
        mov ecx, dword ptr ss : [esp+8]
        neg esi
        push esi
        push eax
        push ecx
        call public_6807020
        add esp, 0xC
        pop esi
        ret 
        public_680709c : nop
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push 0
        push eax
        push edi
        call public_6807020
        push esi
        push edi
        call public_6806fe0
        add esp, 0x14
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6807060)
    }
}

#undef public_6807084
#undef public_680709c
