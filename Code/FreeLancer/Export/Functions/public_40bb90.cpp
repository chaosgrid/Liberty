#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d4b0);
CLANG_FORWARD_PROC_SYMBOL(public_40d760);
CLANG_FORWARD_PROC_SYMBOL(public_40d780);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5595c0);
CLANG_FORWARD_PROC_SYMBOL(public_591460);
CLANG_FORWARD_PROC_SYMBOL(public_5995f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b8058);

#define public_40bbfe _public_40bbfe
#define public_40bc06 _public_40bc06
#define public_40bc11 _public_40bc11
#define public_40bc19 _public_40bc19
#define public_40bc4c _public_40bc4c
#define public_40bcb9 _public_40bcb9
#define public_40bce4 _public_40bce4
#define public_40bd06 _public_40bd06
#define public_40bd09 _public_40bd09

PROC_DECLARE(0x40bb90, internal_40bb90, public_40bb90);
extern "C" NAKED register_t __cdecl internal_40bb90()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        push 0
/*FIXUP push offset public_610444 @0x40bb9b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_610444
/*FIXUP push offset public_6101f0 @0x40bba0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6101f0
        push 0
        push eax
        mov esi, ecx
        call public_5b8058
        mov ecx, dword ptr ds : [esi+0x18]
        mov edi, eax
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        mov edx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], edx
        mov eax, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], eax
        mov ecx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], ecx
        mov edx, dword ptr ds : [edi+0x1C]
        lea ebp, ds:[edi+0x20]
        lea ebx, ds:[esi+0x20]
        add esp, 0x14
        cmp ebx, ebp
        mov dword ptr ds : [esi+0x1C], edx
        je public_40bd09
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_40bbfe
        xor edx, edx
        jmp public_40bc06
        public_40bbfe : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, eax
        sar edx, 3
        public_40bc06 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_40bc11
        xor eax, eax
        jmp public_40bc19
        public_40bc11 : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 3
        public_40bc19 : nop
        cmp edx, eax
        ja public_40bc4c
        mov eax, dword ptr ss : [ebp+8]
        push ecx
        push eax
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_591460
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 0xC
        push ecx
        push eax
        mov ecx, ebx
        call public_53aaa0
        mov ecx, ebp
        call public_5995f0
        mov edx, dword ptr ds : [ebx+4]
        lea eax, ds:[edx+eax*8]
        jmp public_40bd06
        public_40bc4c : nop
        mov ecx, ebx
        call public_40d760
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_5995f0
        mov ecx, dword ptr ss : [esp+0x18]
        cmp eax, ecx
        ja public_40bcb9
        mov ecx, dword ptr ds : [edi+0x24]
        lea ebp, ds:[edi+0x20]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, ebx
        call public_5995f0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ebx+4]
        lea eax, ds:[edx+eax*8]
        mov edx, dword ptr ss : [ebp+4]
        push ecx
        push eax
        push edx
        mov dword ptr ss : [esp+0x24], eax
        call public_591460
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [esp+0x24]
        add esp, 0xC
        push eax
        push ecx
        push edx
        mov ecx, ebx
        call public_40d780
        mov ecx, ebp
        call public_5995f0
        mov ecx, dword ptr ds : [ebx+4]
        lea edx, ds:[ecx+eax*8]
        mov dword ptr ds : [ebx+8], edx
        jmp public_40bd09
        public_40bcb9 : nop
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        mov ecx, ebx
        call public_53aaa0
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_5b7e1d
        lea ebp, ds:[edi+0x20]
        add esp, 4
        mov ecx, ebp
        call public_5995f0
        test eax, eax
        jge public_40bce4
        xor eax, eax
        public_40bce4 : nop
        shl eax, 3
        push eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push ebp
        mov ecx, ebx
        call public_40d780
        mov dword ptr ds : [ebx+0xC], eax
        public_40bd06 : nop
        mov dword ptr ds : [ebx+8], eax
        public_40bd09 : nop
        lea ecx, ds:[edi+0x30]
        push ecx
        lea ecx, ds:[esi+0x30]
        call public_5595c0
        lea edx, ds:[edi+0x40]
        push edx
        lea ecx, ds:[esi+0x40]
        call public_40d4b0
        mov al, byte ptr ds : [edi+0x50]
        mov cl, byte ptr ds : [esi+0x50]
        xor al, cl
        and al, 1
        xor al, cl
        mov byte ptr ds : [esi+0x50], al
        mov cl, byte ptr ds : [edi+0x50]
        xor cl, al
        and cl, 2
        xor cl, al
        mov byte ptr ds : [esi+0x50], cl
        mov al, byte ptr ds : [edi+0x50]
        xor al, cl
        and al, 4
        xor al, cl
        mov byte ptr ds : [esi+0x50], al
        mov cl, byte ptr ds : [edi+0x50]
        xor cl, al
        and cl, 8
        xor cl, al
        mov byte ptr ds : [esi+0x50], cl
        mov al, byte ptr ds : [edi+0x50]
        xor al, cl
        and al, 0x10
        xor al, cl
        mov byte ptr ds : [esi+0x50], al
        mov ecx, dword ptr ds : [edi+0x50]
        mov dword ptr ds : [esi+0x50], ecx
        mov edx, dword ptr ds : [edi+0x54]
        mov dword ptr ds : [esi+0x54], edx
        mov eax, dword ptr ds : [edi+0x58]
        mov dword ptr ds : [esi+0x58], eax
        mov ecx, dword ptr ds : [edi+0x5C]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x5C], ecx
        mov edx, dword ptr ds : [edi+0x60]
        pop edi
        mov dword ptr ds : [esi+0x60], edx
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x40bb90)
    }
}

#undef public_40bbfe
#undef public_40bc06
#undef public_40bc11
#undef public_40bc19
#undef public_40bc4c
#undef public_40bcb9
#undef public_40bce4
#undef public_40bd06
#undef public_40bd09
