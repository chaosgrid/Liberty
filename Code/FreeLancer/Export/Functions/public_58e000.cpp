#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ba90);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_579cc0);
CLANG_FORWARD_PROC_SYMBOL(public_57a810);
CLANG_FORWARD_PROC_SYMBOL(public_58e000);
CLANG_FORWARD_PROC_SYMBOL(public_58f9e0);
CLANG_FORWARD_PROC_SYMBOL(public_58fd10);
CLANG_FORWARD_PROC_SYMBOL(public_590040);
CLANG_FORWARD_PROC_SYMBOL(public_5900d0);
CLANG_FORWARD_PROC_SYMBOL(public_590450);
CLANG_FORWARD_PROC_SYMBOL(public_5995c0);
CLANG_FORWARD_PROC_SYMBOL(public_599a60);
CLANG_FORWARD_PROC_SYMBOL(public_59f590);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4852);

#define public_58e067 _public_58e067
#define public_58e06f _public_58e06f
#define public_58e097 _public_58e097
#define public_58e0b4 _public_58e0b4
#define public_58e0d3 _public_58e0d3
#define public_58e0db _public_58e0db
#define public_58e103 _public_58e103
#define public_58e120 _public_58e120
#define public_58e185 _public_58e185
#define public_58e1a2 _public_58e1a2
#define public_58e215 _public_58e215
#define public_58e233 _public_58e233
#define public_58e246 _public_58e246
#define public_58e27b _public_58e27b
#define public_58e283 _public_58e283
#define public_58e2a4 _public_58e2a4
#define public_58e2ac _public_58e2ac
#define public_58e2c4 _public_58e2c4
#define public_58e2f6 _public_58e2f6
#define public_58e2f8 _public_58e2f8
#define public_58e328 _public_58e328

PROC_DECLARE(0x58e000, internal_58e000, public_58e000);
extern "C" NAKED register_t __cdecl internal_58e000()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4852 @0x58e002*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4852
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        mov eax, dword ptr ss : [esp+0x48]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        push edi
        push eax
        mov ebp, ecx
        call public_57a810
        mov ebx, dword ptr ss : [esp+0x5C]
        cmp ebx, edi
        mov byte ptr ss : [esp+0x58], al
        je public_58e246
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp+0x488], ecx
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [ebp+0x48C], edx
        mov ecx, dword ptr ss : [ebp+0x4A4]
        test ecx, ecx
        lea esi, ss:[ebp+0x4A0]
        mov dword ptr ss : [esp+0x5C], edi
        mov edi, dword ptr ds : [ebx+8]
        jne public_58e067
        xor eax, eax
        jmp public_58e06f
        public_58e067 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_58e06f : nop
        cmp eax, edi
        jae public_58e097
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x5C]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        call public_5ad970
        mov edx, dword ptr ss : [esp+0x14]
        sub edi, eax
        push edi
        push edx
        mov ecx, esi
        call public_537260
        jmp public_58e0b4
        public_58e097 : nop
        mov ecx, esi
        call public_5ad970
        cmp edi, eax
        jae public_58e0b4
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        lea eax, ds:[ecx+edi*4]
        push eax
        mov ecx, esi
        call public_5995c0
        public_58e0b4 : nop
        mov ecx, dword ptr ss : [ebp+0x4B4]
        test ecx, ecx
        mov edi, dword ptr ds : [ebx+0xC]
        lea esi, ss:[ebp+0x4B0]
        mov dword ptr ss : [esp+0x5C], 0
        jne public_58e0d3
        xor eax, eax
        jmp public_58e0db
        public_58e0d3 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_58e0db : nop
        cmp eax, edi
        jae public_58e103
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x10], ecx
        push edx
        mov ecx, esi
        call public_5ad970
        sub edi, eax
        mov eax, dword ptr ss : [esp+0x14]
        push edi
        push eax
        mov ecx, esi
        call public_537260
        jmp public_58e120
        public_58e103 : nop
        mov ecx, esi
        call public_5ad970
        cmp edi, eax
        jae public_58e120
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        lea ecx, ds:[ecx+edi*4]
        push eax
        push ecx
        mov ecx, esi
        call public_5995c0
        public_58e120 : nop
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_5c62dc]
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x50], 0
        call dword ptr ds : [public_5c62dc]
        mov byte ptr ss : [esp+0x44], 0
        mov esi, dword ptr ds : [ebx+8]
        imul esi, dword ptr ds : [ebx+0xC]
        lea edi, ss:[ebp+0x490]
        mov ecx, edi
        mov dword ptr ss : [esp+0x50], 1
        call public_58f9e0
        cmp eax, esi
        mov ecx, edi
        jae public_58e185
        mov edx, dword ptr ds : [edi+8]
        lea eax, ss:[esp+0x2C]
        push eax
        mov dword ptr ss : [esp+0x60], edx
        call public_58f9e0
        mov ecx, dword ptr ss : [esp+0x60]
        sub esi, eax
        push esi
        push ecx
        mov ecx, edi
        call public_58fd10
        jmp public_58e1a2
        public_58e185 : nop
        call public_58f9e0
        cmp esi, eax
        jae public_58e1a2
        mov ecx, dword ptr ds : [edi+4]
        imul esi, 0x1C
        mov eax, dword ptr ds : [edi+8]
        add esi, ecx
        push eax
        push esi
        mov ecx, edi
        call public_590040
        public_58e1a2 : nop
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x50], 2
        call public_46ba90
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call public_46ba90
        xor eax, eax
        mov dword ptr ss : [esp+0x28], eax
        mov byte ptr ss : [esp+0x21], 1
        mov byte ptr ss : [esp+0x20], 1
        mov byte ptr ss : [esp+0x22], 1
        mov dword ptr ss : [esp+0x24], eax
        mov edi, dword ptr ds : [ebx+8]
        lea esi, ss:[ebp+0x4C0]
        mov ecx, esi
        mov dword ptr ss : [esp+0x50], 3
        call public_59f590
        cmp eax, edi
        mov ecx, esi
        jae public_58e215
        mov ebx, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x20]
        push edx
        call public_59f590
        sub edi, eax
        push edi
        push ebx
        mov ecx, esi
        call public_5900d0
        jmp public_58e233
        public_58e215 : nop
        call public_59f590
        cmp edi, eax
        jae public_58e233
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        lea eax, ds:[edi+edi*2]
        lea ecx, ds:[ecx+eax*4]
        push ecx
        mov ecx, esi
        call public_590450
        public_58e233 : nop
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x50], 0xFFFFFFFF
        call public_599a60
        xor edi, edi
        public_58e246 : nop
        lea ebx, ss:[ebp+0x4B0]
        mov ecx, ebx
        call public_5ad970
        test eax, eax
        jbe public_58e328
        lea esi, ss:[ebp+0x4A0]
        mov ecx, esi
        call public_5ad970
        test eax, eax
        jbe public_58e328
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, edi
        jne public_58e27b
        xor eax, eax
        jmp public_58e283
        public_58e27b : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_58e283 : nop
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], edi
        fild qword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ebx+4]
        cmp ecx, edi
        fdivr dword ptr ss : [ebp+0x48C]
        fstp dword ptr ss : [esp+0x5C]
        jne public_58e2a4
        xor eax, eax
        jmp public_58e2ac
        public_58e2a4 : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 2
        public_58e2ac : nop
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], edi
        fild qword ptr ss : [esp+0x10]
        xor ecx, ecx
        fdivr dword ptr ss : [ebp+0x488]
        fstp dword ptr ss : [esp+0x10]
        public_58e2c4 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp edx, edi
        je public_58e2f6
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 2
        cmp ecx, eax
        jae public_58e2f6
        mov edx, dword ptr ss : [ebp+0x4A4]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edi
        fild qword ptr ss : [esp+0x18]
        inc ecx
        fmul dword ptr ss : [esp+0x5C]
        fchs 
        fstp dword ptr ds : [edx+ecx*4-4]
        jmp public_58e2c4
        public_58e2f6 : nop
        xor ecx, ecx
        public_58e2f8 : nop
        mov edx, dword ptr ds : [ebx+4]
        cmp edx, edi
        je public_58e328
        mov eax, dword ptr ds : [ebx+8]
        sub eax, edx
        sar eax, 2
        cmp ecx, eax
        jae public_58e328
        mov eax, dword ptr ss : [ebp+0x4B4]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edi
        fild qword ptr ss : [esp+0x18]
        inc ecx
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+ecx*4-4]
        jmp public_58e2f8
        public_58e328 : nop
        mov ecx, dword ptr ss : [ebp+0x48C]
        mov edx, dword ptr ss : [ebp+0x488]
        push ecx
        push edx
        mov ecx, ebp
        call public_579cc0
        mov ecx, dword ptr ss : [esp+0x48]
        mov al, byte ptr ss : [esp+0x58]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 8
        UNREACHABLE_TRAP(0x58e000)
    }
}

#undef public_58e067
#undef public_58e06f
#undef public_58e097
#undef public_58e0b4
#undef public_58e0d3
#undef public_58e0db
#undef public_58e103
#undef public_58e120
#undef public_58e185
#undef public_58e1a2
#undef public_58e215
#undef public_58e233
#undef public_58e246
#undef public_58e27b
#undef public_58e283
#undef public_58e2a4
#undef public_58e2ac
#undef public_58e2c4
#undef public_58e2f6
#undef public_58e2f8
#undef public_58e328
