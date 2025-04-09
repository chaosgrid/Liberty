#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d9a70);
CLANG_FORWARD_PROC_SYMBOL(public_4d9c70);
CLANG_FORWARD_PROC_SYMBOL(public_4d9cf0);
CLANG_FORWARD_PROC_SYMBOL(public_4d9d30);
CLANG_FORWARD_PROC_SYMBOL(public_4d9d70);
CLANG_FORWARD_PROC_SYMBOL(public_4d9f00);
CLANG_FORWARD_PROC_SYMBOL(public_4da0a0);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4d9adb _public_4d9adb
#define public_4d9ae0 _public_4d9ae0
#define public_4d9ae8 _public_4d9ae8
#define public_4d9afb _public_4d9afb
#define public_4d9b08 _public_4d9b08
#define public_4d9b24 _public_4d9b24
#define public_4d9b3e _public_4d9b3e
#define public_4d9ba5 _public_4d9ba5
#define public_4d9c0c _public_4d9c0c
#define public_4d9c41 _public_4d9c41
#define public_4d9c49 _public_4d9c49

PROC_DECLARE(0x4d9a70, internal_4d9a70, public_4d9a70);
extern "C" NAKED register_t __cdecl internal_4d9a70()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, edi
        sub ecx, ebx
        mov eax, 0x63E7063F
        imul ecx
        mov ecx, dword ptr ds : [esi+8]
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        mov eax, 0x63E7063F
        imul edx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_4d9ba5
        test ebx, ebx
        je public_4d9adb
        mov edx, ecx
        sub edx, ebx
        mov eax, 0x63E7063F
        imul edx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov ebp, edx
        ja public_4d9ae0
        public_4d9adb : nop
        mov ebp, 1
        public_4d9ae0 : nop
        test ebx, ebx
        jne public_4d9ae8
        xor edx, edx
        jmp public_4d9afb
        public_4d9ae8 : nop
        sub ecx, ebx
        mov eax, 0x63E7063F
        imul ecx
        sar edx, 7
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_4d9afb : nop
        lea eax, ds:[edx+ebp]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_4d9b08
        xor eax, eax
        public_4d9b08 : nop
        imul eax, 0x148
        push eax
        call public_5b7e84
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_4d9b3e
        public_4d9b24 : nop
        push ebx
        push ebp
        call public_4da0a0
        add ebx, 0x148
        add esp, 8
        add ebp, 0x148
        cmp ebx, edi
        jne public_4d9b24
        public_4d9b3e : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push ebp
        call public_4da0a0
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x148
        push ebp
        push eax
        push edi
        mov ecx, esi
        call public_4d9cf0
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_53aaa0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        imul eax, 0x148
        add eax, edi
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_4d9c70
        inc eax
        imul eax, 0x148
        add eax, edi
        mov dword ptr ds : [esi+4], edi
        jmp public_4d9c49
        public_4d9ba5 : nop
        mov edx, ecx
        sub edx, edi
        mov eax, 0x63E7063F
        imul edx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_4d9c0c
        lea edx, ds:[edi+0x148]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_4d9cf0
        mov ebx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x63E7063F
        imul ecx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        push ebp
        mov ecx, 1
        sub ecx, edx
        push ecx
        push ebx
        mov ecx, esi
        call public_4d9d30
        mov edx, dword ptr ds : [esi+8]
        push ebp
        push edx
        push edi
        call public_4d9d70
        add esp, 0xC
        jmp public_4d9c41
        public_4d9c0c : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFEB8
        push ecx
        mov ecx, esi
        call public_4d9cf0
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFEB8
        push eax
        push edi
        call public_4d9f00
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        lea ecx, ds:[edi+0x148]
        push ecx
        push edi
        call public_4d9d70
        add esp, 0x18
        public_4d9c41 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x148
        public_4d9c49 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        imul eax, 0x148
        pop edi
        pop esi
        pop ebp
        add eax, ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x4d9a70)
    }
}

#undef public_4d9adb
#undef public_4d9ae0
#undef public_4d9ae8
#undef public_4d9afb
#undef public_4d9b08
#undef public_4d9b24
#undef public_4d9b3e
#undef public_4d9ba5
#undef public_4d9c0c
#undef public_4d9c41
#undef public_4d9c49
