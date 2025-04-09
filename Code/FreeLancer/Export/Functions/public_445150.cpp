#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c8d0);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_444f90);
CLANG_FORWARD_PROC_SYMBOL(public_44ae80);
CLANG_FORWARD_PROC_SYMBOL(public_44b370);
CLANG_FORWARD_PROC_SYMBOL(public_555f60);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_445268 _public_445268

PROC_DECLARE(0x445150, internal_445150, public_445150);
extern "C" NAKED register_t __cdecl internal_445150()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push 0x1B
        mov esi, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_445268
        push 0x1C
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_445268
        push 0x3E
        call public_5792b0
        add esp, 4
        test eax, eax
        jne public_445268
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+0x500]
        push ecx
        mov ecx, dword ptr ds : [esi+0x2F4]
        call public_555f60
        mov edx, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ds : [esi+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x98]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax+0x500]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call public_41c8d0
        add esp, 0xC
        test al, al
        je public_445268
        mov ebx, dword ptr ss : [esp+0x24]
        test ebx, ebx
        je public_445268
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x18]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_445268
        push edi
        push ebx
        mov ecx, esi
        call public_444f90
        call public_42d680
        fstp dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x1C0]
        push edi
        push ecx
        mov ecx, dword ptr ds : [esi+0x30]
        push ecx
        push eax
        call dword ptr ds : [edx+0x3C]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp]
        push ebp
        call public_44b370
        mov ecx, dword ptr ds : [esi+8]
        push esi
        call public_44ae80
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ds : [esi+0x30]
        push 0
        push edi
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x40]
        pop edi
        public_445268 : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x445150)
    }
}

#undef public_445268
