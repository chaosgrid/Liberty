#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55dee0);
CLANG_FORWARD_PROC_SYMBOL(public_55e120);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);
CLANG_FORWARD_PROC_SYMBOL(public_55e360);
CLANG_FORWARD_PROC_SYMBOL(public_55e590);

#define public_4e32da _public_4e32da
#define public_4e3312 _public_4e3312

PROC_DECLARE(0x4e2fe0, internal_4e2fe0, public_4e2fe0);
extern "C" NAKED register_t __cdecl internal_4e2fe0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x364]
        mov ecx, edi
        call public_55e280
        test al, al
        jne public_4e3312
        lea ebx, ds:[esi+0x4E0]
        mov ecx, ebx
        call public_55e280
        test al, al
        jne public_4e3312
        mov al, byte ptr ds : [esi+0x4D0]
        test al, al
        jne public_4e32da
        mov eax, dword ptr ds : [public_5d8860]
        push eax
        mov ecx, edi
        call public_55e120
        mov eax, dword ptr ds : [esi+0x4C8]
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ds:[esi+0x4D4]
        push edx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 0xBEC00000
        mov dword ptr ss : [esp+0x1C], 0xBE8A3D71
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        mov eax, dword ptr ds : [esi+0x640]
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 0xBEF53F7D
        mov dword ptr ss : [esp+0x1C], 0xBECCCCCD
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0xBEF53F7D
        mov dword ptr ss : [esp+0x28], 0xBEBD70A4
        mov dword ptr ss : [esp+0x2C], 0
        call public_55dee0
        mov eax, dword ptr ds : [esi+0x508]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0xBED26E98
        mov dword ptr ss : [esp+0x28], 0xBECCCCCD
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0xBED26E98
        mov dword ptr ss : [esp+0x1C], 0xBEBD70A4
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        mov eax, dword ptr ds : [esi+0x50C]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0xBED26E98
        mov dword ptr ss : [esp+0x28], 0xBECCCCCD
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0xBED26E98
        mov dword ptr ss : [esp+0x1C], 0xBEBD70A4
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        mov eax, dword ptr ds : [esi+0x51C]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0xBEE3D70A
        mov dword ptr ss : [esp+0x28], 0xBECCCCCD
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0xBEE3D70A
        mov dword ptr ss : [esp+0x1C], 0xBEBD70A4
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x1C], 0xBEE3D70A
        mov dword ptr ss : [esp+0x20], 0xBECCCCCD
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x10], 0xBEE3D70A
        mov dword ptr ss : [esp+0x14], 0xBEBD70A4
        mov dword ptr ss : [esp+0x18], 0
        push edx
        mov eax, dword ptr ds : [esi+0x520]
        push eax
        mov ecx, edi
        call public_55dee0
        mov eax, dword ptr ds : [esi+0x638]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0xBEAF9DB2
        mov dword ptr ss : [esp+0x28], 0xBECCCCCD
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0xBEAF9DB2
        mov dword ptr ss : [esp+0x1C], 0xBEBD70A4
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        mov eax, dword ptr ds : [esi+0x63C]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0xBEC10625
        mov dword ptr ss : [esp+0x28], 0xBECCCCCD
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0xBEC10625
        mov dword ptr ss : [esp+0x1C], 0xBEBD70A4
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        mov eax, dword ptr ds : [esi+0x634]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0xBED22D0E
        mov dword ptr ss : [esp+0x28], 0xBECCCCCD
        mov dword ptr ss : [esp+0x2C], 0xBF800000
        mov dword ptr ss : [esp+0x18], 0xBED22D0E
        mov dword ptr ss : [esp+0x1C], 0xBEBD70A4
        mov dword ptr ss : [esp+0x20], 0xBF800000
        call public_55dee0
        mov ecx, dword ptr ds : [public_5d8864]
        push 0x14
        mov dword ptr ds : [esi+0x558], ecx
        mov ecx, dword ptr ds : [esi+0x500]
        mov edx, dword ptr ds : [ecx]
        push 1
        push 0x50
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x504]
        mov eax, dword ptr ds : [ecx]
        push 0x14
        push 1
        push 0x50
        call dword ptr ds : [eax+0xA8]
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 
        public_4e32da : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x34]
        mov eax, dword ptr ds : [public_5d8860]
        push eax
        mov ecx, ebx
        call public_55e590
        mov ecx, dword ptr ds : [esi+0x4CC]
        push 0x3DCCCCCD
        push 0x3F800000
        push ecx
        mov ecx, ebx
        call public_55e360
        mov esi, dword ptr ds : [esi+0x644]
        and byte ptr ds : [esi+0x6C], 0xFC
        public_4e3312 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x4e2fe0)
    }
}

#undef public_4e32da
#undef public_4e3312
