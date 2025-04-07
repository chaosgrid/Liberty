#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419152);
CLANG_FORWARD_PROC_SYMBOL(public_419158);

#define public_40f7f5 _public_40f7f5
#define public_40f803 _public_40f803
#define public_40f813 _public_40f813
#define public_40f816 _public_40f816

PROC_DECLARE(0x40f7c0, internal_40f7c0, public_40f7c0);
extern "C" NAKED register_t __cdecl internal_40f7c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push ebx
        push eax
        push esi
        mov edi, ecx
        call public_419158
        cmp ebx, 6
        jne public_40f7f5
        mov edx, dword ptr ds : [esi]
        push 0xE0C387
        mov ecx, esi
        call dword ptr ds : [edx+0x38]
        push 1
        mov ecx, esi
        call public_419152
        jmp public_40f803
        public_40f7f5 : nop
        cmp ebx, 4
        je public_40f803
        cmp ebx, 1
        je public_40f803
        test ebx, ebx
        jne public_40f816
        public_40f803 : nop
        lea eax, ds:[edi+0x1F0]
        test eax, eax
        jne public_40f813
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_40f813 : nop
        mov eax, dword ptr ds : [eax+4]
        public_40f816 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x40f7c0)
    }
}

#undef public_40f7f5
#undef public_40f803
#undef public_40f813
#undef public_40f816
