#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a66a0);
CLANG_FORWARD_PROC_SYMBOL(public_62ac230);
CLANG_FORWARD_PROC_SYMBOL(public_62e9500);
CLANG_FORWARD_PROC_SYMBOL(public_62eb5a0);
CLANG_FORWARD_PROC_SYMBOL(public_62eb6c0);

#define public_62eb744 _public_62eb744
#define public_62eb825 _public_62eb825
#define public_62eb860 _public_62eb860
#define public_62eb86a _public_62eb86a
#define public_62eb8b6 _public_62eb8b6
#define public_62eb8cc _public_62eb8cc
#define public_62eb8e0 _public_62eb8e0
#define public_62eb8f6 _public_62eb8f6
#define public_62eb8ff _public_62eb8ff

PROC_DECLARE(0x62eb6c0, internal_62eb6c0, public_62eb6c0);
extern "C" NAKED register_t __cdecl internal_62eb6c0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        je public_62eb8ff
        mov ecx, dword ptr ds : [edi+0x1580]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xBC]
        test al, al
        jne public_62eb744
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x1820]
        test cl, cl
        je public_62eb744
        mov cl, byte ptr ds : [eax+0x1429]
        test cl, cl
        jne public_62eb744
        mov eax, dword ptr ds : [eax+0x1370]
        test eax, eax
        je public_62eb744
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_62eb744
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62eb744
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62eb744
        mov ecx, eax
        call public_62ac230
        test eax, eax
        je public_62eb744
        mov ecx, eax
        call public_62a66a0
        mov edx, dword ptr ds : [esi+4]
        mov edi, eax
        mov byte ptr ds : [edx+0x14], 1
        public_62eb744 : nop
        mov eax, dword ptr ds : [edi+0x1704]
        mov dword ptr ds : [esi+0x103C], eax
        mov ecx, dword ptr ds : [edi+0x1708]
        mov dword ptr ds : [esi+0x1040], ecx
        mov edx, dword ptr ds : [edi+0x1730]
        mov dword ptr ds : [esi+0x1044], edx
        mov eax, dword ptr ds : [edi+0x170C]
        mov dword ptr ds : [esi+0x1048], eax
        mov ecx, dword ptr ds : [edi+0x1710]
        mov dword ptr ds : [esi+0x104C], ecx
        mov edx, dword ptr ds : [edi+0x1734]
        mov dword ptr ds : [esi+0x1054], edx
        mov eax, dword ptr ds : [edi+0x173C]
        mov dword ptr ds : [esi+0x105C], eax
        mov ecx, dword ptr ds : [edi+0x1714]
        mov dword ptr ds : [esi+0x1050], ecx
        mov edx, dword ptr ds : [edi+0x1738]
        mov dword ptr ds : [esi+0x1058], edx
        mov eax, dword ptr ds : [edi+0x1718]
        mov dword ptr ds : [esi+0x1080], eax
        mov ecx, dword ptr ds : [edi+0x1728]
        mov dword ptr ss : [esp+8], ecx
        fld dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+0xC]
        call dword ptr ds : [public_6399308]
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x10]
        push edx
        fmul dword ptr ds : [public_63997d0]
        lea eax, ss:[esp+0xC]
        fld dword ptr ss : [esp+0xC]
        push eax
        fsub dword ptr ss : [esp+0x14]
        mov ecx, esi
        fmulp 
        fadd dword ptr ss : [esp+0x14]
        fadd qword ptr ds : [public_6399410]
        fmul dword ptr ds : [edi+0x1724]
        fstp dword ptr ss : [esp+0x14]
        call public_62eb5a0
        cmp al, 1
        jne public_62eb825
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [esi+0x1084]
        public_62eb825 : nop
        mov ecx, dword ptr ds : [edi+0x174C]
        mov dword ptr ds : [esi+0x106C], ecx
        movzx edx, byte ptr ds : [edi+0x1750]
        mov dword ptr ss : [esp+0x10], edx
        fild dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [esi+0x1070]
        mov eax, dword ptr ds : [edi+0x1700]
        sub eax, 0
        je public_62eb860
        dec eax
        jne public_62eb86a
        mov dword ptr ds : [esi+0x1088], 0
        jmp public_62eb86a
        public_62eb860 : nop
        mov dword ptr ds : [esi+0x1088], 1
        public_62eb86a : nop
        mov eax, dword ptr ds : [edi+0x1754]
        mov dword ptr ds : [esi+0x1060], eax
        mov ecx, dword ptr ds : [edi+0x1758]
        mov dword ptr ds : [esi+0x1064], ecx
        mov edx, dword ptr ds : [edi+0x175C]
        mov dword ptr ds : [esi+0x1068], edx
        mov eax, dword ptr ds : [edi+0x1740]
        mov dword ptr ds : [esi+0x1074], eax
        mov ecx, dword ptr ds : [edi+0x1744]
        mov eax, dword ptr ds : [esi+0x830]
        xor edi, edi
        test eax, eax
        push ebp
        mov dword ptr ds : [esi+0x1078], ecx
        jle public_62eb8cc
        lea ebp, ds:[esi+0x30]
        public_62eb8b6 : nop
        push ebp
        mov ecx, esi
        call public_62e9500
        mov eax, dword ptr ds : [esi+0x830]
        inc edi
        add ebp, 0x20
        cmp edi, eax
        jl public_62eb8b6
        public_62eb8cc : nop
        mov eax, dword ptr ds : [esi+0x1038]
        xor edi, edi
        test eax, eax
        jle public_62eb8f6
        lea ebp, ds:[esi+0x838]
        mov edi, edi
        public_62eb8e0 : nop
        push ebp
        mov ecx, esi
        call public_62e9500
        mov eax, dword ptr ds : [esi+0x1038]
        inc edi
        add ebp, 0x20
        cmp edi, eax
        jl public_62eb8e0
        public_62eb8f6 : nop
        pop ebp
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 
        public_62eb8ff : nop
        pop edi
        xor al, al
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62eb6c0)
    }
}

#undef public_62eb744
#undef public_62eb825
#undef public_62eb860
#undef public_62eb86a
#undef public_62eb8b6
#undef public_62eb8cc
#undef public_62eb8e0
#undef public_62eb8f6
#undef public_62eb8ff
