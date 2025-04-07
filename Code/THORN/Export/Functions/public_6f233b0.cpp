#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f21770);
CLANG_FORWARD_PROC_SYMBOL(public_6f22f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f233b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f234f8 _public_6f234f8
#define public_6f23534 _public_6f23534

PROC_DECLARE(0x6f233b0, internal_6f233b0, public_6f233b0);
extern "C" NAKED register_t __cdecl internal_6f233b0()
{
    __asm
    {
        sub esp, 0x74
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x5D]
        test al, al
        je public_6f23534
        mov eax, dword ptr ss : [esp+0x80]
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x84]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], edi
        call public_6f22f80
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, edi
        shl edx, 4
        lea eax, ds:[edx+ecx]
        lea edx, ds:[eax-0x10]
        mov ebp, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x50], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x54], ebp
        mov ebp, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x58], ebp
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x5C], edx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x44], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x48], edx
        mov eax, dword ptr ds : [eax+0xC]
        lea edx, ds:[edi+1]
        shl edx, 4
        add edx, ecx
        mov dword ptr ss : [esp+0x4C], eax
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [edx+8]
        add edi, 2
        mov dword ptr ss : [esp+0x38], eax
        mov edx, dword ptr ds : [edx+0xC]
        shl edi, 4
        add edi, ecx
        mov dword ptr ss : [esp+0x3C], edx
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x20], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x24], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x28], edx
        mov eax, dword ptr ds : [edi+0xC]
        mov edi, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ss : [esp+0x10], 0
        fild qword ptr ss : [esp+0xC]
        lea ecx, ss:[esp+0x70]
        push ecx
        fmul dword ptr ds : [esi+0xC]
        push ecx
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x34], eax
        fstp dword ptr ss : [esp]
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x50]
        push ecx
        lea edx, ss:[esp+0x64]
        push edx
        mov ecx, esi
        call public_6f21770
        inc edi
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ss : [esp+0x10], 0
        fild qword ptr ss : [esp+0xC]
        lea eax, ss:[esp+0x60]
        push eax
        fmul dword ptr ds : [esi+0xC]
        push ecx
        fstp dword ptr ss : [esp]
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0x64]
        push ecx
        mov ecx, esi
        call public_6f21770
        mov eax, dword ptr ds : [public_6f61dd0]
        test eax, eax
        pop edi
        pop ebp
        jne public_6f234f8
        call public_6f57de0
        mov dword ptr ds : [public_6f61dd0], eax
        public_6f234f8 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax]
        push ecx
        lea ecx, ss:[esp+0x5C]
        push ecx
        lea ecx, ss:[esp+0x70]
        push ecx
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        call dword ptr ds : [edx+0x58]
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0x84]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [edx+0xC], ecx
        public_6f23534 : nop
        pop esi
        add esp, 0x74
        ret 0xC
        UNREACHABLE_TRAP(0x6f233b0)
    }
}

#undef public_6f234f8
#undef public_6f23534
