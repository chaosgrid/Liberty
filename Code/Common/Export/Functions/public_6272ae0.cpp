#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272ae0);
CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6272b00 _public_6272b00
#define public_6272b18 _public_6272b18
#define public_6272b46 _public_6272b46

PROC_DECLARE(0x6272ae0, internal_6272ae0, public_6272ae0);
extern "C" NAKED register_t __cdecl internal_6272ae0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6272b46
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_6272b00 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x10
        lea ebp, ds:[esi+8]
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6272b18
        mov ebx, eax
        public_6272b18 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebp
        push eax
        call public_62bee40
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x20]
        jne public_6272b00
        pop edi
        pop ebp
        pop ebx
        public_6272b46 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6272ae0)
    }
}

#undef public_6272b00
#undef public_6272b18
#undef public_6272b46
