#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_46bb00);
CLANG_FORWARD_PROC_SYMBOL(public_46bb50);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_57a620);
CLANG_FORWARD_PROC_SYMBOL(public_57d1f0);
CLANG_FORWARD_PROC_SYMBOL(public_57d330);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3f75);

#define public_57d36e _public_57d36e
#define public_57d4f5 _public_57d4f5
#define public_57d547 _public_57d547
#define public_57d560 _public_57d560
#define public_57d619 _public_57d619
#define public_57d62a _public_57d62a
#define public_57d65e _public_57d65e
#define public_57d676 _public_57d676
#define public_57d681 _public_57d681

PROC_DECLARE(0x57d330, internal_57d330, public_57d330);
extern "C" NAKED register_t __cdecl internal_57d330()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c3f75 @0x57d338*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3f75
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x490]
        test eax, eax
        push edi
        je public_57d36e
        lea ecx, ds:[esi+0x488]
        call public_46bb50
        push 1
        push 1
        mov ecx, esi
        call public_57a620
        public_57d36e : nop
        lea eax, ds:[esi+0x4DC]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+0x28], eax
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x60], 0
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi+0x48C]
        lea ebp, ds:[esi+0x488]
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, ebp
        mov byte ptr ss : [esp+0x6C], 1
        call public_46c800
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x60], 0
        call public_45eeb0
        push 1
        push 1
        mov ecx, esi
        call public_57a620
        mov ebx, dword ptr ds : [public_5c62c8]
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x60], 0xFFFFFFFF
        call ebx
        mov eax, dword ptr ds : [public_5c62cc]
        lea edi, ds:[esi+0x4E8]
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x28], eax
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x60], 2
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, ebp
        mov byte ptr ss : [esp+0x64], 3
        call public_46bb00
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x60], 2
        call public_45eeb0
        push 1
        push 1
        mov ecx, esi
        call public_57a620
        or ebp, 0xFFFFFFFF
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x60], ebp
        call ebx
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call public_46c860
        mov eax, dword ptr ds : [esi+0x4C8]
        test eax, eax
        je public_57d681
        mov ecx, dword ptr ds : [esi+0x4CC]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x18], edx
        je public_57d681
        mov eax, dword ptr ds : [esi+0x4C8]
        mov ecx, dword ptr ds : [eax+4]
        mov al, byte ptr ds : [esi+0x4F8]
        test al, al
        mov dword ptr ss : [esp+0x20], ecx
        je public_57d4f5
        mov eax, dword ptr ds : [public_5c62cc]
        lea edx, ds:[esi+0x4FC]
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x28], eax
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x60], 4
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x6C], 5
        call public_46c800
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x60], 4
        call public_45eeb0
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x60], ebp
        call ebx
        jmp public_57d547
        public_57d4f5 : nop
        push 0
        push ebp
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c630c]
        mov edx, dword ptr ds : [eax]
        mov ebx, 6
        mov ecx, eax
        mov dword ptr ss : [esp+0x60], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x64], 7
        call public_46bb00
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x60], bl
        call public_45eeb0
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x60], ebp
        call dword ptr ds : [public_5c6308]
        public_57d547 : nop
        mov al, byte ptr ds : [esi+0x4F8]
        xor ecx, ecx
        test al, al
        jne public_57d62a
        xor ebp, ebp
        mov dword ptr ss : [esp+0x10], ebp
        lea ecx, ds:[ecx]
        public_57d560 : nop
        mov eax, dword ptr ds : [esi+0x4C8]
        test eax, eax
        je public_57d62a
        mov edx, dword ptr ds : [esi+0x4CC]
        sub edx, eax
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ebp, edx
        jae public_57d62a
        mov eax, dword ptr ds : [esi+0x4C8]
        mov edx, dword ptr ss : [esp+0x10]
        lea ebx, ds:[edx+eax+4]
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [esp+0x20]
        je public_57d619
        mov edx, ebp
        sub edx, ecx
        push edx
        push ecx
        mov ecx, esi
        call public_57d1f0
        mov eax, dword ptr ds : [ebx]
        push 0
        push 0xFFFFFFFF
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x2C], eax
        call dword ptr ds : [public_5c630c]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x60], 8
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x6C], 9
        call public_46c800
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x60], 8
        call public_45eeb0
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x60], 0xFFFFFFFF
        call dword ptr ds : [public_5c6308]
        mov ecx, ebp
        public_57d619 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc ebp
        add eax, 0xC
        mov dword ptr ss : [esp+0x10], eax
        jmp public_57d560
        public_57d62a : nop
        mov eax, dword ptr ds : [esi+0x4C8]
        test eax, eax
        je public_57d681
        mov edx, dword ptr ds : [esi+0x4CC]
        sub edx, eax
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ecx, edx
        jae public_57d681
        mov eax, dword ptr ds : [esi+0x4C8]
        test eax, eax
        jne public_57d65e
        xor edx, edx
        jmp public_57d676
        public_57d65e : nop
        mov edx, dword ptr ds : [esi+0x4CC]
        sub edx, eax
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_57d676 : nop
        sub edx, ecx
        push edx
        push ecx
        mov ecx, esi
        call public_57d1f0
        public_57d681 : nop
        mov ecx, dword ptr ss : [esp+0x58]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 
        UNREACHABLE_TRAP(0x57d330)
    }
}

#undef public_57d36e
#undef public_57d4f5
#undef public_57d547
#undef public_57d560
#undef public_57d619
#undef public_57d62a
#undef public_57d65e
#undef public_57d676
#undef public_57d681
