#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4086c0);
CLANG_FORWARD_PROC_SYMBOL(public_40d740);
CLANG_FORWARD_PROC_SYMBOL(public_527820);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5595c0);
CLANG_FORWARD_PROC_SYMBOL(public_597c70);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b8058);

#define public_408588 _public_408588
#define public_408590 _public_408590
#define public_40859b _public_40859b
#define public_4085a3 _public_4085a3
#define public_4085b5 _public_4085b5
#define public_4085c7 _public_4085c7
#define public_4085de _public_4085de
#define public_4085f4 _public_4085f4
#define public_408649 _public_408649
#define public_408671 _public_408671
#define public_408696 _public_408696
#define public_40869a _public_40869a

PROC_DECLARE(0x408520, internal_408520, public_408520);
extern "C" NAKED register_t __cdecl internal_408520()
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
/*FIXUP push offset public_610294 @0x40852b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_610294
/*FIXUP push offset public_6101f0 @0x408530*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6101f0
        push 0
        push eax
        mov ebx, ecx
        call public_5b8058
        mov ecx, dword ptr ds : [ebx+0x18]
        mov ebp, eax
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], ecx
        push ebp
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], ebp
        call public_4086c0
        mov edx, dword ptr ss : [ebp+0x54]
        mov dword ptr ds : [ebx+0x54], edx
        mov eax, dword ptr ss : [ebp+0x58]
        mov dword ptr ds : [ebx+0x58], eax
        mov ecx, dword ptr ss : [ebp+0x5C]
        mov dword ptr ds : [ebx+0x5C], ecx
        mov edx, dword ptr ss : [ebp+0x60]
        lea edi, ss:[ebp+0x64]
        lea esi, ds:[ebx+0x64]
        cmp esi, edi
        mov dword ptr ds : [ebx+0x60], edx
        je public_40869a
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_408588
        xor eax, eax
        jmp public_408590
        public_408588 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_408590 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_40859b
        xor edx, edx
        jmp public_4085a3
        public_40859b : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 2
        public_4085a3 : nop
        cmp eax, edx
        ja public_4085f4
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edi+4]
        cmp eax, edx
        mov dword ptr ss : [esp+0x18], edx
        je public_4085c7
        public_4085b5 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x18]
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_4085b5
        public_4085c7 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_4085de
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        lea ecx, ds:[eax+edi*4]
        mov dword ptr ds : [esi+8], ecx
        jmp public_40869a
        public_4085de : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        mov eax, dword ptr ds : [esi+4]
        sar edi, 2
        lea ecx, ds:[eax+edi*4]
        mov dword ptr ds : [esi+8], ecx
        jmp public_40869a
        public_4085f4 : nop
        mov ecx, esi
        call public_40d740
        mov ecx, edi
        mov ebp, eax
        call public_5ad970
        cmp eax, ebp
        ja public_408649
        mov ebp, dword ptr ds : [edi+4]
        mov ecx, esi
        call public_5ad970
        mov edx, dword ptr ds : [esi+4]
        lea ebp, ss:[ebp+eax*4]
        mov eax, dword ptr ds : [edi+4]
        push edx
        push ebp
        push eax
        call public_527820
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [edi+8]
        add esp, 0xC
        push ecx
        push edx
        push ebp
        mov ecx, esi
        call public_597c70
        mov ecx, edi
        call public_5ad970
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+8], edx
        jmp public_408696
        public_408649 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_53aaa0
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        add esp, 4
        mov ecx, edi
        call public_5ad970
        test eax, eax
        jge public_408671
        xor eax, eax
        public_408671 : nop
        shl eax, 2
        push eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_597c70
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_408696 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        public_40869a : nop
        add ebp, 0x74
        push ebp
        lea ecx, ds:[ebx+0x74]
        call public_5595c0
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x18], ecx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x408520)
    }
}

#undef public_408588
#undef public_408590
#undef public_40859b
#undef public_4085a3
#undef public_4085b5
#undef public_4085c7
#undef public_4085de
#undef public_4085f4
#undef public_408649
#undef public_408671
#undef public_408696
#undef public_40869a
