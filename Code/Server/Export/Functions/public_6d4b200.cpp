#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4b200);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ea0);

#define public_6d4b233 _public_6d4b233
#define public_6d4b23b _public_6d4b23b
#define public_6d4b250 _public_6d4b250
#define public_6d4b262 _public_6d4b262

PROC_DECLARE(0x6d4b200, internal_6d4b200, public_6d4b200);
extern "C" NAKED register_t __cdecl internal_6d4b200()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+0x3A0]
        push eax
        mov ecx, esi
        call public_6d59ea0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_6d4b233
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6d4b233
        lea eax, ss:[esp+8]
        jmp public_6d4b23b
        public_6d4b233 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6d4b23b : nop
        mov ecx, dword ptr ds : [edi+0x3A4]
        mov eax, dword ptr ds : [eax]
        pop edi
        cmp eax, ecx
        mov cl, byte ptr ss : [esp+0x14]
        pop esi
        je public_6d4b250
        or cl, byte ptr ds : [eax+0x10]
        public_6d4b250 : nop
        test cl, 0x10
        je public_6d4b262
        test cl, 8
        je public_6d4b262
        xor al, al
        add esp, 8
        ret 8
        public_6d4b262 : nop
        mov al, 1
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d4b200)
    }
}

#undef public_6d4b233
#undef public_6d4b23b
#undef public_6d4b250
#undef public_6d4b262
