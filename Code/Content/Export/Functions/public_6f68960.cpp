#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f68960);

#define public_6f68a10 _public_6f68a10
#define public_6f68aa2 _public_6f68aa2
#define public_6f68ab0 _public_6f68ab0

PROC_DECLARE(0x6f68960, internal_6f68960, public_6f68960);
extern "C" NAKED register_t __cdecl internal_6f68960()
{
    __asm
    {
        sub esp, 0xFC8
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xFD8]
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ds:[edi+4]
        xor esi, esi
        push ecx
        mov dword ptr ss : [esp+0x24], esi
        call dword ptr ds : [public_6fb34a8]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        cmp eax, esi
        je public_6f68ab0
        lea edx, ss:[esp+0x14]
        push edx
        push 0xFDFF
        push 0x7F7FFFFF
        lea eax, ss:[esp+0x34]
        push eax
        push 0x3E8
        lea ecx, ss:[esp+0x48]
        push ecx
        push edi
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x44], esi
        mov dword ptr ss : [esp+0x48], esi
        mov dword ptr ss : [esp+0x4C], esi
        call dword ptr ds : [public_6fb3460]
        mov eax, dword ptr ss : [esp+0x38]
        lea edx, ss:[esp+0x28]
        push edx
        or ebx, 0xFFFFFFFF
        push eax
        mov dword ptr ss : [esp+0x30], ebx
        call dword ptr ds : [public_6fb364c]
        add esp, 0x24
        test eax, eax
        jne public_6f68ab0
        cmp dword ptr ss : [esp+0xC], ebx
        je public_6f68ab0
        cmp dword ptr ss : [esp+0x14], esi
        jbe public_6f68ab0
        mov edi, dword ptr ds : [public_6fb33f0]
        push ebp
        mov ebp, dword ptr ds : [public_6fb365c]
        lea esp, ss:[esp]
        public_6f68a10 : nop
        mov edx, dword ptr ss : [esp+esi*4+0x38]
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        call edi
        add esp, 8
        test eax, eax
        jne public_6f68aa2
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        call dword ptr ds : [public_6fb366c]
        add esp, 8
        test eax, eax
        jne public_6f68aa2
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x1C], eax
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        call ebp
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        call dword ptr ds : [public_6fb35e8]
        fld dword ptr ss : [esp+0x40]
        fsub dword ptr ss : [esp+0x34]
        add esp, 0x18
        fabs 
        fcomp qword ptr ds : [public_6fbbb88]
        fnstsw ax
        test ah, 0x41
        jne public_6f68aa2
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        call dword ptr ds : [public_6fb33f4]
        add esp, 0xC
        public_6f68aa2 : nop
        mov eax, dword ptr ss : [esp+0x18]
        inc esi
        cmp esi, eax
        jb public_6f68a10
        pop ebp
        public_6f68ab0 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xFC8
        ret 4
        UNREACHABLE_TRAP(0x6f68960)
    }
}

#undef public_6f68a10
#undef public_6f68aa2
#undef public_6f68ab0
