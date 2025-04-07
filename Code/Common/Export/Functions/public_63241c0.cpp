#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6315b10);
CLANG_FORWARD_PROC_SYMBOL(public_631fa40);
CLANG_FORWARD_PROC_SYMBOL(public_631fad0);
CLANG_FORWARD_PROC_SYMBOL(public_6320a30);
CLANG_FORWARD_PROC_SYMBOL(public_6323e90);
CLANG_FORWARD_PROC_SYMBOL(public_63241c0);
CLANG_FORWARD_PROC_SYMBOL(public_6324550);
CLANG_FORWARD_PROC_SYMBOL(public_6324570);
CLANG_FORWARD_PROC_SYMBOL(public_6324640);
CLANG_FORWARD_PROC_SYMBOL(public_6324830);
CLANG_FORWARD_PROC_SYMBOL(public_6324920);
CLANG_FORWARD_PROC_SYMBOL(public_6324b00);
CLANG_FORWARD_PROC_SYMBOL(public_6324d10);
CLANG_FORWARD_JUMP_SYMBOL(public_6396ea1);

#define public_6324221 _public_6324221
#define public_632426e _public_632426e
#define public_632428e _public_632428e
#define public_63242b8 _public_63242b8
#define public_63242c3 _public_63242c3
#define public_6324370 _public_6324370
#define public_6324380 _public_6324380
#define public_6324390 _public_6324390
#define public_63243ba _public_63243ba
#define public_632440e _public_632440e
#define public_6324417 _public_6324417
#define public_6324446 _public_6324446
#define public_6324470 _public_6324470
#define public_63244e5 _public_63244e5
#define public_6324501 _public_6324501
#define public_632452d _public_632452d

PROC_DECLARE(0x63241c0, internal_63241c0, public_63241c0);
extern "C" NAKED register_t __cdecl internal_63241c0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6396ea1 @0x63241c8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396ea1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x130
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14C]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x150]
        mov ecx, ebp
        sub ecx, edi
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 0x10
        jg public_63242b8
        cmp edi, ebp
        je public_632452d
        lea esi, ds:[edi+0x90]
        cmp esi, ebp
        je public_632452d
        public_6324221 : nop
        push esi
        lea ecx, ss:[esp+0xB4]
        call public_6324570
        mov ecx, dword ptr ss : [esp+0xB0]
        sub ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x148], 0
        js public_632426e
        sub esp, 0x90
        lea edx, ss:[esp+0x140]
        mov ecx, esp
        mov dword ptr ss : [esp+0xA4], esp
        push edx
        call public_6324570
        push esi
        call public_6324830
        add esp, 0x94
        jmp public_632428e
        public_632426e : nop
        lea eax, ds:[esi+0x90]
        push eax
        push esi
        push edi
        call public_6323e90
        add esp, 0xC
        lea ecx, ss:[esp+0xB0]
        push ecx
        mov ecx, edi
        call public_6324550
        public_632428e : nop
        lea ecx, ss:[esp+0xB4]
        mov dword ptr ss : [esp+0x148], 0xFFFFFFFF
        call public_631fa40
        add esi, 0x90
        cmp esi, ebp
        jne public_6324221
        jmp public_632452d
        public_63242b8 : nop
        cmp edx, 0x10
        mov ebx, ebp
        jle public_6324446
        public_63242c3 : nop
        sub esp, 0x90
        lea edx, ds:[ebx-0x90]
        mov ecx, esp
        mov dword ptr ss : [esp+0xA4], esp
        push edx
        call public_6324570
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x38E38E39
        imul ecx
        mov eax, edx
        sar eax, 5
        mov ecx, eax
        shr ecx, 0x1F
        add eax, ecx
        cdq 
        sub eax, edx
        sar eax, 1
        lea edx, ds:[eax+eax*8]
        sub esp, 0x90
        shl edx, 4
        add edx, edi
        mov ecx, esp
        mov dword ptr ss : [esp+0x13C], esp
        push edx
        mov dword ptr ss : [esp+0x26C], 1
        call public_6324570
        sub esp, 0x90
        mov ecx, esp
        mov dword ptr ss : [esp+0x1C8], esp
        push edi
        mov byte ptr ss : [esp+0x2FC], 2
        call public_6324570
        lea eax, ss:[esp+0x260]
        push eax
        mov dword ptr ss : [esp+0x2FC], 0xFFFFFFFF
        call public_6324b00
        add esp, 0x1B4
        mov ebp, ebx
        mov esi, edi
        mov dword ptr ss : [esp+0x148], 3
        lea esp, ss:[esp]
        public_6324370 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0xB0]
        sub ecx, eax
        jns public_6324390
        lea ecx, ds:[ecx]
        public_6324380 : nop
        mov edx, dword ptr ds : [esi+0x90]
        add esi, 0x90
        sub edx, eax
        js public_6324380
        public_6324390 : nop
        mov edx, dword ptr ss : [ebp-0x90]
        sub ebp, 0x90
        mov ecx, eax
        sub ecx, edx
        js public_6324390
        cmp ebp, esi
        jbe public_63243ba
        push 0
        push ebp
        push esi
        call public_6324d10
        add esp, 0xC
        add esi, 0x90
        jmp public_6324370
        public_63243ba : nop
        lea ecx, ss:[esp+0xB4]
        mov dword ptr ss : [esp+0x148], 0xFFFFFFFF
        call public_631fa40
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x38E38E39
        imul ecx
        mov ecx, edx
        sar ecx, 5
        mov edx, ecx
        shr edx, 0x1F
        add ecx, edx
        mov edx, esi
        sub edx, edi
        mov eax, 0x38E38E39
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ecx, edx
        push 0
        jg public_632440e
        push ebx
        push esi
        call public_6324640
        mov ebx, esi
        jmp public_6324417
        public_632440e : nop
        push esi
        push edi
        call public_6324640
        mov edi, esi
        public_6324417 : nop
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        add esp, 0xC
        cmp edx, 0x10
        jg public_63242c3
        mov ebp, dword ptr ss : [esp+0x154]
        mov edi, dword ptr ss : [esp+0x150]
        public_6324446 : nop
        xor ebx, ebx
        push ebx
        lea esi, ds:[edi+0x900]
        push esi
        push edi
        call public_6324920
        add esp, 0xC
        cmp esi, ebp
        je public_632452d
        lea edx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x18], edx
        lea esp, ss:[esp]
        public_6324470 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x20], eax
        call public_6320a30
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x148], 4
        call public_6320a30
        lea ecx, ss:[esp+0x13]
        push ecx
        lea ecx, ss:[esp+0xA0]
        call public_6315b10
        lea edx, ds:[esi+4]
        push edx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x14C], 6
        mov dword ptr ss : [esp+0xB0], ebx
        mov dword ptr ss : [esp+0x30], ebx
        call public_631fad0
        mov ecx, esi
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [esi-0x90]
        sub eax, edx
        lea edi, ds:[esi-0x90]
        mov dword ptr ss : [esp+0x148], 7
        jns public_6324501
        public_63244e5 : nop
        push edi
        call public_6324550
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi-0x90]
        mov ecx, edi
        sub edi, 0x90
        sub edx, eax
        js public_63244e5
        public_6324501 : nop
        lea eax, ss:[esp+0x20]
        push eax
        call public_6324550
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x148], 0xFFFFFFFF
        call public_631fa40
        add esi, 0x90
        cmp esi, ebp
        jne public_6324470
        public_632452d : nop
        mov ecx, dword ptr ss : [esp+0x140]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x13C
        ret 
        UNREACHABLE_TRAP(0x63241c0)
    }
}

#undef public_6324221
#undef public_632426e
#undef public_632428e
#undef public_63242b8
#undef public_63242c3
#undef public_6324370
#undef public_6324380
#undef public_6324390
#undef public_63243ba
#undef public_632440e
#undef public_6324417
#undef public_6324446
#undef public_6324470
#undef public_63244e5
#undef public_6324501
#undef public_632452d
