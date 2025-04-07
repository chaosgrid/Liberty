#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62684f0);
CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6268510 _public_6268510
#define public_6268528 _public_6268528
#define public_6268556 _public_6268556

PROC_DECLARE(0x62684f0, internal_62684f0, public_62684f0);
extern "C" NAKED register_t __cdecl internal_62684f0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6268556
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_6268510 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x28
        lea ebp, ds:[esi+8]
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6268528
        mov ebx, eax
        public_6268528 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebp
        push eax
        call public_626c1e0
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x20]
        jne public_6268510
        pop edi
        pop ebp
        pop ebx
        public_6268556 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x62684f0)
    }
}

#undef public_6268510
#undef public_6268528
#undef public_6268556
