#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288900);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6288916 _public_6288916

PROC_DECLARE(0x6288900, internal_6288900, public_6288900);
extern "C" NAKED register_t __cdecl internal_6288900()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fc0b8]
        sub esp, 0x24
        test eax, eax
        jne public_6288916
        call public_6391cf0
        mov dword ptr ds : [public_63fc0b8], eax
        public_6288916 : nop
        mov edx, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, 9
        lea esi, ss:[esp+8]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6288900)
    }
}

#undef public_6288916
