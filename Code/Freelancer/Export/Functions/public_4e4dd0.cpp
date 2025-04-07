#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46d660);
CLANG_FORWARD_PROC_SYMBOL(public_4e4dd0);
CLANG_FORWARD_PROC_SYMBOL(public_4e5760);
CLANG_FORWARD_PROC_SYMBOL(public_4e5860);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);

#define public_4e4e80 _public_4e4e80
#define public_4e4ede _public_4e4ede
#define public_4e4f06 _public_4e4f06
#define public_4e4f4e _public_4e4f4e
#define public_4e4f61 _public_4e4f61

PROC_DECLARE(0x4e4dd0, internal_4e4dd0, public_4e4dd0);
extern "C" NAKED register_t __cdecl internal_4e4dd0()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x3C]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+4]
        lea eax, ss:[esp+0x44]
        mov esi, ecx
        push eax
        mov ecx, ebp
        call public_53e430
        mov ecx, dword ptr ds : [eax]
        push edi
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, ebp
        call public_4e5760
        mov eax, dword ptr ds : [esi+0x398]
        test eax, eax
        je public_4e4f61
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e4f61
        mov esi, dword ptr ds : [esi+0x398]
        test esi, esi
        je public_4e4f61
        lea eax, ds:[esi-8]
        test eax, eax
        je public_4e4f61
        add eax, 0xC
        test eax, eax
        je public_4e4f61
        mov edi, dword ptr ds : [eax+4]
        test edi, edi
        mov dword ptr ss : [esp+0x44], edi
        je public_4e4f61
        mov eax, dword ptr ds : [edi+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        jne public_4e4f61
        lea ecx, ss:[esp+0x20]
        lea ebx, ds:[edi+0x144]
        push ecx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x24], 1
        call dword ptr ds : [public_5c6584]
        mov esi, eax
        test esi, esi
        je public_4e4ede
        lea esp, ss:[esp]
        public_4e4e80 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ax, word ptr ds : [edx+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, ebp
        mov word ptr ss : [esp+0x18], ax
        mov dword ptr ss : [esp+0x1C], 0
        call public_4e5860
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_46d660
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, esi
        call dword ptr ds : [public_5c6580]
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebx
        mov dword ptr ds : [edi+0x10], eax
        call dword ptr ds : [public_5c6584]
        mov esi, eax
        test esi, esi
        jne public_4e4e80
        mov edi, dword ptr ss : [esp+0x44]
        public_4e4ede : nop
        push 0x1EE0
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_5c64f4]
        lea eax, ss:[esp+0x30]
        add edi, 0xE4
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c64f0]
        mov esi, eax
        test esi, esi
        je public_4e4f61
        public_4e4f06 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x58]
        test al, al
        je public_4e4f4e
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+0x14]
        test ecx, ecx
        je public_4e4f4e
        mov cx, word ptr ds : [esi+8]
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x2C]
        mov word ptr ss : [esp+0x1C], cx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], 0
        call public_4e5860
        mov edx, dword ptr ds : [esi]
        mov ebx, dword ptr ss : [esp+0x28]
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov dword ptr ds : [ebx+0x10], eax
        public_4e4f4e : nop
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c64f0]
        mov esi, eax
        test esi, esi
        jne public_4e4f06
        public_4e4f61 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x4e4dd0)
    }
}

#undef public_4e4e80
#undef public_4e4ede
#undef public_4e4f06
#undef public_4e4f4e
#undef public_4e4f61
