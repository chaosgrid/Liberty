#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f939e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93a10);
CLANG_FORWARD_PROC_SYMBOL(public_6f93bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93c20);
CLANG_FORWARD_PROC_SYMBOL(public_6f93d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f940f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f94360);
CLANG_FORWARD_PROC_SYMBOL(public_6f945f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f93a7b _public_6f93a7b
#define public_6f93a80 _public_6f93a80
#define public_6f93a88 _public_6f93a88
#define public_6f93a9b _public_6f93a9b
#define public_6f93aa8 _public_6f93aa8
#define public_6f93ac1 _public_6f93ac1
#define public_6f93ad5 _public_6f93ad5
#define public_6f93b33 _public_6f93b33
#define public_6f93b97 _public_6f93b97
#define public_6f93bc4 _public_6f93bc4
#define public_6f93bca _public_6f93bca

PROC_DECLARE(0x6f93a10, internal_6f93a10, public_6f93a10);
extern "C" NAKED register_t __cdecl internal_6f93a10()
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
        mov eax, 0x4EC4EC4F
        imul ecx
        mov ecx, dword ptr ds : [esi+8]
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6f93b33
        test ebx, ebx
        je public_6f93a7b
        mov edx, ecx
        sub edx, ebx
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov ebp, edx
        ja public_6f93a80
        public_6f93a7b : nop
        mov ebp, 1
        public_6f93a80 : nop
        test ebx, ebx
        jne public_6f93a88
        xor edx, edx
        jmp public_6f93a9b
        public_6f93a88 : nop
        sub ecx, ebx
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f93a9b : nop
        lea eax, ds:[edx+ebp]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        jge public_6f93aa8
        xor eax, eax
        public_6f93aa8 : nop
        imul eax, 0x68
        push eax
        call public_6fa912a
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, eax
        je public_6f93ad5
        public_6f93ac1 : nop
        push ebx
        push ebp
        call public_6f945f0
        add ebx, 0x68
        add esp, 8
        add ebp, 0x68
        cmp ebx, edi
        jne public_6f93ac1
        public_6f93ad5 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push ebp
        call public_6f945f0
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x68
        push ebp
        push eax
        push edi
        mov ecx, esi
        call public_6f93c20
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6f93bf0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x14]
        imul eax, 0x68
        add eax, edi
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6f939e0
        inc eax
        imul eax, 0x68
        add eax, edi
        mov dword ptr ds : [esi+4], edi
        jmp public_6f93bca
        public_6f93b33 : nop
        mov edx, ecx
        sub edx, edi
        mov eax, 0x4EC4EC4F
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6f93b97
        lea edx, ds:[edi+0x68]
        push edx
        push ecx
        push edi
        mov ecx, esi
        call public_6f93c20
        mov ebx, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, edi
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        push ebp
        mov ecx, 1
        sub ecx, edx
        push ecx
        push ebx
        mov ecx, esi
        call public_6f93d50
        mov edx, dword ptr ds : [esi+8]
        push ebp
        push edx
        push edi
        call public_6f940f0
        add esp, 0xC
        jmp public_6f93bc4
        public_6f93b97 : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFF98
        push ecx
        mov ecx, esi
        call public_6f93c20
        mov eax, dword ptr ds : [esi+8]
        push eax
        add eax, 0xFFFFFF98
        push eax
        push edi
        call public_6f94360
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        lea ecx, ds:[edi+0x68]
        push ecx
        push edi
        call public_6f940f0
        add esp, 0x18
        public_6f93bc4 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x68
        public_6f93bca : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        imul eax, 0x68
        pop edi
        pop esi
        pop ebp
        add eax, ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6f93a10)
    }
}

#undef public_6f93a7b
#undef public_6f93a80
#undef public_6f93a88
#undef public_6f93a9b
#undef public_6f93aa8
#undef public_6f93ac1
#undef public_6f93ad5
#undef public_6f93b33
#undef public_6f93b97
#undef public_6f93bc4
#undef public_6f93bca
