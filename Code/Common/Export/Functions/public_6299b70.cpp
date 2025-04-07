#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6299b70);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6299bda _public_6299bda
#define public_6299c17 _public_6299c17

PROC_DECLARE(0x6299b70, internal_6299b70, public_6299b70);
extern "C" NAKED register_t __cdecl internal_6299b70()
{
    __asm
    {
        sub esp, 0x60
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        call dword ptr ds : [eax+8]
        test al, al
        jne public_6299c17
        mov ecx, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ds : [public_6399040]
        imul ecx, 0x34
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx+esi+0x54]
        push ebx
        lea ebx, ds:[ecx+esi+0x54]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x98]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fc194]
        test eax, eax
        mov ecx, 9
        lea edi, ss:[esp+0x48]
        rep movsd
        jne public_6299bda
        call public_6391cf0
        mov dword ptr ds : [public_63fc194], eax
        public_6299bda : nop
        mov ecx, dword ptr ds : [eax]
        add ebx, 4
        push ebx
        lea edx, ss:[esp+0x4C]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        fld dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x20]
        fxch 
        pop ebx
        fchs 
        fstp dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        fchs 
        fstp dword ptr ss : [esp+0x10]
        public_6299c17 : nop
        mov eax, dword ptr ss : [esp+0x6C]
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov edi, eax
        mov dword ptr ds : [edi], esi
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        add esp, 0x60
        ret 8
        UNREACHABLE_TRAP(0x6299b70)
    }
}

#undef public_6299bda
#undef public_6299c17
