#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4118e0);

#define public_41023e _public_41023e

PROC_DECLARE(0x410200, internal_410200, public_410200);
extern "C" NAKED register_t __cdecl internal_410200()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0x7C]
        lea esi, ds:[ecx+0x78]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_4118e0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_41023e
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_41023e
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
        public_41023e : nop
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
        UNREACHABLE_TRAP(0x410200)
    }
}

#undef public_41023e
