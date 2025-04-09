#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_587200);
CLANG_FORWARD_PROC_SYMBOL(public_587380);
CLANG_FORWARD_PROC_SYMBOL(public_587440);
CLANG_FORWARD_PROC_SYMBOL(public_587770);
CLANG_FORWARD_PROC_SYMBOL(public_5877b0);
CLANG_FORWARD_PROC_SYMBOL(public_5877e0);
CLANG_FORWARD_PROC_SYMBOL(public_587960);
CLANG_FORWARD_PROC_SYMBOL(public_587af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_58723f _public_58723f
#define public_587244 _public_587244
#define public_58724c _public_58724c
#define public_587251 _public_587251
#define public_58725d _public_58725d
#define public_587276 _public_587276
#define public_58728a _public_58728a
#define public_5872e9 _public_5872e9
#define public_587331 _public_587331
#define public_58735c _public_58735c
#define public_587362 _public_587362

PROC_DECLARE(0x587200, internal_587200, public_587200);
extern "C" NAKED register_t __cdecl internal_587200()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebx, edi
        sub ecx, eax
        sub ebx, edx
        sar ebx, 5
        sar ecx, 5
        cmp ecx, 1
        mov dword ptr ss : [esp+0x14], ebx
        jae public_5872e9
        test edx, edx
        je public_58723f
        mov ecx, eax
        sub ecx, edx
        sar ecx, 5
        cmp ecx, 1
        ja public_587244
        public_58723f : nop
        mov ecx, 1
        public_587244 : nop
        test edx, edx
        jne public_58724c
        xor eax, eax
        jmp public_587251
        public_58724c : nop
        sub eax, edx
        sar eax, 5
        public_587251 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_58725d
        xor eax, eax
        public_58725d : nop
        shl eax, 5
        push eax
        call public_5b7e84
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_58728a
        public_587276 : nop
        push ebx
        push ebp
        call public_587af0
        add ebx, 0x20
        add esp, 8
        add ebp, 0x20
        cmp ebx, edi
        jne public_587276
        public_58728a : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push ebp
        call public_587af0
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x20
        push ebp
        push eax
        push edi
        mov ecx, esi
        call public_587770
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_587440
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        shl eax, 5
        add eax, edi
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_587380
        mov ebx, dword ptr ss : [esp+0x14]
        inc eax
        shl eax, 5
        add eax, edi
        mov dword ptr ds : [esi+4], edi
        jmp public_587362
        public_5872e9 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 5
        cmp ecx, 1
        mov ecx, esi
        jae public_587331
        lea edx, ds:[edi+0x20]
        push edx
        push eax
        push edi
        call public_587770
        mov eax, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 5
        push ebp
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_5877b0
        mov eax, dword ptr ds : [esi+8]
        push ebp
        push eax
        push edi
        call public_5877e0
        add esp, 0xC
        jmp public_58735c
        public_587331 : nop
        push eax
        push eax
        add eax, 0xFFFFFFE0
        push eax
        call public_587770
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFFE0
        push eax
        push edi
        call public_587960
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        lea edx, ds:[edi+0x20]
        push edx
        push edi
        call public_5877e0
        add esp, 0x18
        public_58735c : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x20
        public_587362 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], eax
        pop edi
        mov eax, ebx
        pop esi
        shl eax, 5
        pop ebp
        add eax, ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x587200)
    }
}

#undef public_58723f
#undef public_587244
#undef public_58724c
#undef public_587251
#undef public_58725d
#undef public_587276
#undef public_58728a
#undef public_5872e9
#undef public_587331
#undef public_58735c
#undef public_587362
