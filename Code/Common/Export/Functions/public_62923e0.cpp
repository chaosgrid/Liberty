#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628bea0);
CLANG_FORWARD_PROC_SYMBOL(public_6291fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6343130);
CLANG_FORWARD_PROC_SYMBOL(public_6348580);
CLANG_FORWARD_PROC_SYMBOL(public_6348f50);

#define public_629252a _public_629252a

PROC_DECLARE(0x62923e0, internal_62923e0, public_62923e0);
extern "C" NAKED register_t __cdecl internal_62923e0()
{
    __asm
    {
        sub esp, 0x20
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x5C]
        mov ecx, dword ptr ds : [esi+0x54]
        mov ecx, dword ptr ds : [ecx+0x90]
        push edi
        push eax
        call public_6348f50
        mov edi, dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [edi]
        sub esp, 8
        lea ecx, ds:[esi+0xD0]
        fstp qword ptr ss : [esp]
        call public_6291fe0
        fld dword ptr ds : [esi+0x37C]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+0x380]
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ds:[esi+4]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+0x384]
        mov edx, eax
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+4], ecx
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+0xC], ecx
        fld dword ptr ds : [esi+0x348]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+0x34C]
        mov ecx, dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+0x350]
        lea edx, ds:[esi+0xAC]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+4], ecx
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+0xC], ecx
        mov edx, dword ptr ds : [esi+0x370]
        mov ecx, dword ptr ds : [esi+0x374]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [esi+0x36C]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [esi+0x378]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x20], edx
        lea edx, ds:[esi+0x14]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [edx+0xC], ecx
        fld dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+0x5C]
        fsub dword ptr ds : [ecx+0x128]
        add ecx, 0xF4
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+0x38]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx+0x30]
        fstp dword ptr ss : [esp+8]
        fxch 
        fstp dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x58]
        mov edx, dword ptr ds : [eax+0x78]
        test dh, 0xC
        jne public_629252a
        lea edx, ss:[esp+0x18]
        push edx
        add eax, 0x30
        push eax
        call public_6348580
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        lea ecx, ss:[esp+0x10]
        call public_628bea0
        public_629252a : nop
        fld dword ptr ss : [esp+0xC]
        push edi
        fmul dword ptr ss : [esp+0x10]
        mov ecx, esi
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld dword ptr ds : [esi+0x60]
        fmul dword ptr ds : [public_639c470]
        faddp 
        fstp dword ptr ds : [esi+0x60]
        call public_6343130
        pop edi
        pop esi
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x62923e0)
    }
}

#undef public_629252a
