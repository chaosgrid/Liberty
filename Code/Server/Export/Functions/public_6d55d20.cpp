#include "Server-PCH.h"


#define public_6d55d87 _public_6d55d87

PROC_DECLARE(0x6d55d20, internal_6d55d20, public_6d55d20);
extern "C" NAKED register_t __cdecl internal_6d55d20()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [edx]
        sub esp, 0xC
        test ecx, ecx
        push esi
        mov eax, 0xFFFFFFFE
        jbe public_6d55d87
        mov esi, dword ptr ds : [public_6d90264]
        dec ecx
        cmp ecx, esi
        jae public_6d55d87
        mov esi, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        push edi
        mov edi, dword ptr ds : [ecx+esi+0x348]
        test edi, edi
        pop edi
        je public_6d55d87
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        mov al, byte ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+4], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [public_6d8fb14]
        lea esi, ss:[esp+4]
        push esi
        mov byte ptr ss : [esp+0xC], al
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x124]
        xor eax, eax
        public_6d55d87 : nop
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d55d20)
    }
}

#undef public_6d55d87
