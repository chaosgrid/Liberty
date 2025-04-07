#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4118e0);

#define public_410334 _public_410334

PROC_DECLARE(0x4102f0, internal_4102f0, public_4102f0);
extern "C" NAKED register_t __cdecl internal_4102f0()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0x90]
        lea esi, ds:[ecx+0x8C]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_4118e0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_410334
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_410334
        lea eax, ss:[esp+8]
        mov eax, dword ptr ds : [eax]
        xor edx, edx
        cmp eax, edi
        setne dl
        pop edi
        mov al, dl
        pop esi
        pop ecx
        ret 4
        public_410334 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        mov eax, dword ptr ds : [eax]
        xor edx, edx
        cmp eax, edi
        setne dl
        pop edi
        mov al, dl
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x4102f0)
    }
}

#undef public_410334
