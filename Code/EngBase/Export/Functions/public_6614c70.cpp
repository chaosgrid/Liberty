#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66128f0);
CLANG_FORWARD_PROC_SYMBOL(public_6614580);
CLANG_FORWARD_PROC_SYMBOL(public_6615ec0);

#define public_6614ca1 _public_6614ca1
#define public_6614cb5 _public_6614cb5

PROC_DECLARE(0x6614c70, internal_6614c70, public_6614c70);
extern "C" NAKED register_t __cdecl internal_6614c70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        lea eax, ss:[esp+0x10]
        push edi
        push eax
        push ecx
        mov ecx, ebx
        call public_6614580
        test al, al
        je public_6614cb5
        mov edi, dword ptr ss : [esp+0x14]
        mov ecx, edi
        call public_66128f0
        mov esi, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [edi+0x10]
        cmp esi, eax
        je public_6614cb5
        public_6614ca1 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, ebx
        push edx
        call public_6615ec0
        mov eax, dword ptr ds : [edi+0x10]
        add esi, 4
        cmp esi, eax
        jne public_6614ca1
        public_6614cb5 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6614c70)
    }
}

#undef public_6614ca1
#undef public_6614cb5
