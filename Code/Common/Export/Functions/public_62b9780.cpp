#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b9780);
CLANG_FORWARD_PROC_SYMBOL(public_62bb160);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62b97a0 _public_62b97a0
#define public_62b97b8 _public_62b97b8
#define public_62b97e6 _public_62b97e6

PROC_DECLARE(0x62b9780, internal_62b9780, public_62b9780);
extern "C" NAKED register_t __cdecl internal_62b9780()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_62b97e6
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_62b97a0 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x20
        lea ebp, ds:[esi+8]
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_62b97b8
        mov ebx, eax
        public_62b97b8 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebp
        push eax
        call public_62bb160
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x20]
        jne public_62b97a0
        pop edi
        pop ebp
        pop ebx
        public_62b97e6 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x62b9780)
    }
}

#undef public_62b97a0
#undef public_62b97b8
#undef public_62b97e6
