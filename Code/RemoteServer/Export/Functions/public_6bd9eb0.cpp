#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd9eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bd9f70);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bd9ed0 _public_6bd9ed0
#define public_6bd9ee8 _public_6bd9ee8
#define public_6bd9f16 _public_6bd9f16

PROC_DECLARE(0x6bd9eb0, internal_6bd9eb0, public_6bd9eb0);
extern "C" NAKED register_t __cdecl internal_6bd9eb0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6bd9f16
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_6bd9ed0 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x28
        lea ebp, ds:[esi+8]
        call public_6c09d26
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6bd9ee8
        mov ebx, eax
        public_6bd9ee8 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebp
        push eax
        call public_6bd9f70
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x20]
        jne public_6bd9ed0
        pop edi
        pop ebp
        pop ebx
        public_6bd9f16 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6bd9eb0)
    }
}

#undef public_6bd9ed0
#undef public_6bd9ee8
#undef public_6bd9f16
