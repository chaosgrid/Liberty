#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_445340);
CLANG_FORWARD_PROC_SYMBOL(public_445580);
CLANG_FORWARD_PROC_SYMBOL(public_454f80);
CLANG_FORWARD_PROC_SYMBOL(public_4568d0);

#define public_4455a5 _public_4455a5
#define public_4455db _public_4455db
#define public_44561b _public_44561b

PROC_DECLARE(0x445580, internal_445580, public_445580);
extern "C" NAKED register_t __cdecl internal_445580()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        mov esi, ecx
        je public_4455a5
        mov eax, dword ptr ds : [esi+0x364]
        test eax, eax
        je public_4455a5
        push eax
        push edi
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_44561b
        public_4455a5 : nop
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        je public_4455db
        push eax
        mov ecx, offset public_66d2d0
        call public_4568d0
        lea eax, ds:[esi+0x364]
        push eax
        mov dword ptr ds : [esi+0x360], 0
        mov byte ptr ds : [esi+0x368], 0
        call dword ptr ds : [public_5c60c8]
        add esp, 4
        public_4455db : nop
        lea ecx, ds:[esi+0x364]
        push edi
        push ecx
        call dword ptr ds : [public_5c60cc]
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 8
        push edx
        push edi
        mov ecx, esi
        call public_445340
        mov ecx, dword ptr ds : [esi+0x36C]
        test ecx, ecx
        mov dword ptr ds : [esi+0x360], eax
        jne public_44561b
        test eax, eax
        je public_44561b
        mov ecx, eax
        call public_454f80
        mov byte ptr ds : [esi+0x368], 1
        public_44561b : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x445580)
    }
}

#undef public_4455a5
#undef public_4455db
#undef public_44561b
