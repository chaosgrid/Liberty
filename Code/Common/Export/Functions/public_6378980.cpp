#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6378980);
CLANG_FORWARD_PROC_SYMBOL(public_6386b00);
CLANG_FORWARD_PROC_SYMBOL(public_63872c0);
CLANG_FORWARD_PROC_SYMBOL(public_6388370);

#define public_63789a9 _public_63789a9
#define public_63789ca _public_63789ca
#define public_63789db _public_63789db
#define public_63789f7 _public_63789f7

PROC_DECLARE(0x6378980, internal_6378980, public_6378980);
extern "C" NAKED register_t __cdecl internal_6378980()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b7fc]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        push edi
        push ebx
        push ebp
        push 5
        push eax
        call public_63872c0
        add esp, 0x14
        test ebp, ebp
        je public_63789ca
        mov esi, ebp
        public_63789a9 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_63789ca
        mov ecx, dword ptr ds : [public_658b7fc]
        push edi
        push esi
        push 5
        push ecx
        call public_6386b00
        mov esi, dword ptr ds : [esi+0x30]
        add esp, 0x10
        test esi, esi
        jne public_63789a9
        public_63789ca : nop
        test ebx, ebx
        je public_63789f7
        mov eax, dword ptr ds : [ebx+4]
        lea esi, ds:[ebx+4]
        add esi, 4
        test eax, eax
        je public_63789f7
        public_63789db : nop
        mov edx, dword ptr ds : [public_658b7fc]
        push edi
        push eax
        push 5
        push edx
        call public_6386b00
        mov eax, dword ptr ds : [esi]
        add esp, 0x10
        add esi, 4
        test eax, eax
        jne public_63789db
        public_63789f7 : nop
        mov eax, dword ptr ds : [public_658b7fc]
        push edi
        push ebx
        push ebp
        push 5
        push eax
        call public_6388370
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6378980)
    }
}

#undef public_63789a9
#undef public_63789ca
#undef public_63789db
#undef public_63789f7
