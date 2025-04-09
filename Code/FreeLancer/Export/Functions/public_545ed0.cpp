#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d6cd0);
CLANG_FORWARD_PROC_SYMBOL(public_534190);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_545f05 _public_545f05
#define public_545f07 _public_545f07
#define public_545f38 _public_545f38

PROC_DECLARE(0x545ed0, internal_545ed0, public_545ed0);
extern "C" NAKED register_t __cdecl internal_545ed0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        push ebx
        push edi
        push ebp
        mov esi, ecx
        call public_534190
        push edi
        call dword ptr ds : [public_5c6910]
        add esp, 4
        test al, al
        mov al, byte ptr ds : [esi+0x18C]
        jne public_545f05
        or al, 1
        jmp public_545f07
        public_545f05 : nop
        or al, 2
        public_545f07 : nop
        mov byte ptr ds : [esi+0x18C], al
        call public_54baf0
        cmp esi, eax
        jne public_545f38
        mov eax, dword ptr ds : [public_674a10]
        test eax, eax
        je public_545f38
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [public_674a10]
        push eax
        push ebp
        call public_4d6cd0
        public_545f38 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x545ed0)
    }
}

#undef public_545f05
#undef public_545f07
#undef public_545f38
