#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f213d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f22f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f23230);

PROC_DECLARE(0x6f23230, internal_6f23230, public_6f23230);
extern "C" NAKED register_t __cdecl internal_6f23230()
{
    __asm
    {
        sub esp, 0x48
        mov eax, dword ptr ss : [esp+0x50]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x58]
        mov esi, ecx
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], edi
        call public_6f22f80
        fstp dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [esi+0x18]
        lea edx, ds:[edi+edi*2]
        lea eax, ds:[ecx+edx*4]
        lea edx, ds:[eax-0xC]
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x48], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x4C], ebx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x50], edx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x3C], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x40], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x44], eax
        lea edx, ds:[edi+edi*2+3]
        lea eax, ds:[ecx+edx*4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x34], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x38], eax
        lea edx, ds:[edi+edi*2+6]
        mov edi, dword ptr ss : [esp+0xC]
        lea eax, ds:[ecx+edx*4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ss : [esp+0x10], ebx
        fild qword ptr ss : [esp+0xC]
        lea ecx, ss:[esp+0x18]
        push ecx
        fmul dword ptr ds : [esi+0xC]
        push ecx
        mov dword ptr ss : [esp+0x30], edx
        lea edx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp]
        push edx
        mov dword ptr ss : [esp+0x38], eax
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x5C]
        push edx
        mov ecx, esi
        call public_6f213d0
        inc edi
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ss : [esp+0x10], ebx
        fild qword ptr ss : [esp+0xC]
        lea eax, ss:[esp+0xC]
        push eax
        fmul dword ptr ds : [esi+0xC]
        push ecx
        lea ecx, ss:[esp+0x2C]
        lea edx, ss:[esp+0x38]
        fstp dword ptr ss : [esp]
        push ecx
        push edx
        lea eax, ss:[esp+0x4C]
        push eax
        lea ecx, ss:[esp+0x5C]
        push ecx
        mov ecx, esi
        call public_6f213d0
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x10]
        pop edi
        fsub dword ptr ss : [esp+0x18]
        pop esi
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x18]
        pop ebx
        fstp dword ptr ss : [esp+0x44]
        fxch 
        fmul dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp]
        fadd st, st(2)
        mov dword ptr ds : [edx], eax
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+4]
        fadd st, st(1)
        mov dword ptr ds : [edx+4], ecx
        fstp dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+8]
        fstp st(0)
        mov dword ptr ds : [edx+8], eax
        fstp st(0)
        add esp, 0x48
        ret 0xC
        UNREACHABLE_TRAP(0x6f23230)
    }
}
