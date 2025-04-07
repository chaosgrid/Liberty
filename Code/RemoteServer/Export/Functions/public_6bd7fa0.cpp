#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda220);
CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6be1750);

#define public_6bd8058 _public_6bd8058

PROC_DECLARE(0x6bd7fa0, internal_6bd7fa0, public_6bd7fa0);
extern "C" NAKED register_t __cdecl internal_6bd7fa0()
{
    __asm
    {
        sub esp, 0x30
        push edi
        lea eax, ss:[esp+4]
        push eax
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+8]
        push 1
        push 1
        call public_6be1750
        test eax, eax
        jne public_6bd8058
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax+4]
        fld qword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        mov cl, byte ptr ds : [eax+0x2C]
        mov eax, dword ptr ds : [eax+0x28]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ss : [esp+4]
        push esi
        mov byte ptr ss : [esp+0xC], cl
        lea esi, ds:[edx+0x20]
        mov dword ptr ss : [esp+0x34], eax
        mov byte ptr ds : [esi], cl
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [esi+4], eax
        call public_6bda4c0
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ds:[esi+0x14]
        call public_6bda220
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [esi+0x24], eax
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [esi+0x28], ecx
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x170]
        pop esi
        public_6bd8058 : nop
        pop edi
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x6bd7fa0)
    }
}

#undef public_6bd8058
