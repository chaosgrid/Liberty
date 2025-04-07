#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb0460);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1700);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb0480 _public_6eb0480
#define public_6eb0498 _public_6eb0498
#define public_6eb04c6 _public_6eb04c6

PROC_DECLARE(0x6eb0460, internal_6eb0460, public_6eb0460);
extern "C" NAKED register_t __cdecl internal_6eb0460()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6eb04c6
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_6eb0480 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x38
        lea ebp, ds:[esi+8]
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6eb0498
        mov ebx, eax
        public_6eb0498 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebp
        push eax
        call public_6eb1700
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x20]
        jne public_6eb0480
        pop edi
        pop ebp
        pop ebx
        public_6eb04c6 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6eb0460)
    }
}

#undef public_6eb0480
#undef public_6eb0498
#undef public_6eb04c6
