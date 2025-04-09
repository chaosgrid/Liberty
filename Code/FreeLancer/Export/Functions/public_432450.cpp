#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432450);
CLANG_FORWARD_PROC_SYMBOL(public_433a50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_432470 _public_432470
#define public_432488 _public_432488
#define public_4324b6 _public_4324b6

PROC_DECLARE(0x432450, internal_432450, public_432450);
extern "C" NAKED register_t __cdecl internal_432450()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_4324b6
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_432470 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x18
        lea ebp, ds:[esi+8]
        call public_5b7e84
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_432488
        mov ebx, eax
        public_432488 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebp
        push eax
        call public_433a50
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x20]
        jne public_432470
        pop edi
        pop ebp
        pop ebx
        public_4324b6 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x432450)
    }
}

#undef public_432470
#undef public_432488
#undef public_4324b6
